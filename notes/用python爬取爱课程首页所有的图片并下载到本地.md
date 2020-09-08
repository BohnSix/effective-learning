分析：因为是要下载所有的图片，不需要进行筛选。这就简单多了。图片一般都在“src=”的后面。

代码：
```python
# -*- coding:utf-8 -*-
 
__author__ = 'Bohn'
 
import requests, re, os
from urllib.request import urlretrieve
 
def getHtml(url):
    #伪装头部
    user_agent = 'Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/65.0.3325.181 Safari/537.36'
    headers = {'User-Agent': user_agent}
 
    response = requests.get(url)
    response.encoding = 'utf-8'
    html = response.text
    print("Got html")
    return html
 
def getImg(html):
    #编写正则表达式
    regex = 'src="(.*?)"' 
    pattern = re.compile(regex, re.S)
    #找到正则表达式匹配的图片
    imglist = re.findall(pattern, html)
    print(imglist)
    x = 1
    #判断这个文件夹是否存在，不存在就创建
    if not(os.path.exists(r'D:\imgsaving')):
        os.makedirs(r'D:\imgsaving')
    #下载图片
    for img in imglist:
        print("正在下载第%s张图片…" % x)
        urlretrieve(img, r'D:\imgsaving\%s.jpg' % x)
        x = x + 1
    return
 
try:
    #爬取爱课程首页的图片
    url = r"http://www.icourses.cn/home/"
    html = getHtml(url)
    getImg(html)
    print("OK")
except:
    print('Failed.')
```
————————————————
版权声明：本文为CSDN博主「BohnLee」的原创文章，遵循 CC 4.0 BY-SA 版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/BohnLee/article/details/80006687