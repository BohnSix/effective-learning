# pip is configured with locations that require TLS/SSL, however the ssl module in Python is not avail

## 原因：python需要的SSL版本要求较高。
## 解决方案：重新手动安装SSL

### 1. 下载OPENSSL
```
wget https://www.openssl.org/source/openssl-1.1.1b.tar.gz
tar -xzvf openssl-1.1.1b.tar.gz
cd openssl-1.1.1b
```
### 2. 编译安装
```
./config
make
sudo make install
```

### 3.备份原配置
```
mv /usr/bin/openssl /usr/bin/openssl.bak
mv /usr/include/openssl/ /usr/include/openssl.bak
```

### 4.新版配置
```
sudo mv /usr/bin/openssl /usr/bin/openssl.old    //将旧版本的openssl进行备份
sudo ln -s /usr/local/bin/openssl /usr/bin/openssl    //将新版本的openssl进行软链接
cd /etc/   //进入etc目录
su     //下一步一定要切换到root用户
echo "/usr/local/lib" >> ld.so.conf    //将openssl的安装路径加入配置中
ldconfig  //重新加载配置
```
### 5.查看openssl版本
```
openssl version
```