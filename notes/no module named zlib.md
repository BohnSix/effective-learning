# ImportError: no module named zlib.

zlib是python的内置包（build-in module），找不到说明在编译安装的时候出了什么差错。

## 手动安装zlib 
`sudo apt-get install zlib-dev` 
## 重新编译python 
`./configure --with-zlib`
## 安装 
`make`

`make install `


## 测试
```
Python 3.5.3 (default, Aug 23 2019, 16:00:21)
[GCC 7.4.0] on linux
Type "help", "copyright", "credits" or "license" for more information.
>>> import zlib
>>>
```