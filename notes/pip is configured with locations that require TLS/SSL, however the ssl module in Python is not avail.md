# pip is configured with locations that require TLS/SSL, however the ssl module in Python is not avail

## 原因：python需要的SSL版本要求较高。
## 解决方案：重新手动安装SSL

### 1. 下载OPENSSL
```
wget https://www.openssl.org/source/openssl-1.1.1a.tar.gz
tar -zxvf openssl-1.1.1a.tar.gz
cd openssl-1.1.1a
```
### 2. 编译安装
```
./config --prefix=/usr/local/openssl no-zlib #不需要zlib
make
make install
```

### 3.备份原配置
```
mv /usr/bin/openssl /usr/bin/openssl.bak
mv /usr/include/openssl/ /usr/include/openssl.bak
```

### 4.新版配置
```
ln -s /usr/local/openssl/include/openssl /usr/include/openssl
ln -s /usr/local/openssl/lib/libssl.so.1.1 /usr/local/lib64/libssl.so
ln -s /usr/local/openssl/bin/openssl /usr/bin/openssl
```
### 5.修改系统配置
#### 5.1 写入openssl库文件的搜索路径
```
echo "/usr/local/openssl/lib" >> /etc/ld.so.conf
```
#### 5.2 使修改后的/etc/ld.so.conf生效 
```
ldconfig -v
```
### 6.查看openssl版本
```
openssl version
```