众所周知，github在国内没有被墙但依然访问很慢。在clone项目到本地时，如果项目很大，就很麻烦。

推荐科学魔法后再设置git代理。我科学出行的端口是7078

```
git config --global http.proxy http://127.0.0.1:7078
git config --global https.proxy https://127.0.0.1:7078
```

取消命令如下

```
git config --global --unset http.proxy
git config --global --unset https.proxy
```

当然，你也可以直接编辑 git 的设置文件，该文件通常位于用户目录下，名为 .gitconfig，如果看不到，需要显示隐藏文件。

