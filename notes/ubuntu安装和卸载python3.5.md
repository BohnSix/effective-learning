# 官网下载源码包本地安装

## 1. 下载

`wget https://www.python.org/ftp/python/3.5.3/Python-3.5.3.tgz`

## 2. 解压
`tar -xvzf Python-3.5.3.tgz`

## 3. 编译安装
 ### 进入解压文件夹 `cd python-3.5.3`
 ### 生成Makefile文件 `./configure`
 ### 编译 `make`
 ### 安装 `make install`

## 4.删除默认的 python link 文件，重新建立链接关系
```
sudo mv  /usr/bin/python /usr/bin/python-old
sudo  ln  -s  /usr/bin/python3.5    /usr/bin/python 
```
---
# 卸载
## 1. 卸载
```
sudo apt-get remove python3
```

## 2. 卸载依赖
```
```

## 3. 清除
```
sudo apt-get purge python3

