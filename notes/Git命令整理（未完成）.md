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

---
---

```
git init
```

```
git config --global user.name "Your Name"

git config --global user.email "email@example.com"
```


```
git add readme.md

git commit -m “add a readme.md”
```

 
```
git status

git diff readme.md
```

```
git rm readme.md
```
 
```
git checkout -- readme.md（恢复）
```
 
```
ssh-keygen -t rsa -C "youremail@example.com"
```
```
git remote add origin git@github.com/username/repo.git

git remote 

git remote -v         查看远程仓库地址

git remote remove origin
```
 
```
git push -u origin master

git push origin master

git push -u origin master -f
```
 
```
git clone git@github.com/username/repo.git

git clone https://github.com/michaelliao/gitskills.git
```
 
```
git checkout -b dev

等于下面两行命令

git branch dev

git checkout dev
```
 
```
git merge dev

git branch -d dev


分支管理-Bug分支
```

```
git checkout . # 丢弃所有修改或删除，不影响新增或未跟踪的文件。会递归下级目录
git clean -nxdf # dry-run，先看下即将删除那些文件，再执行下面的危险命令
git clean -df # 删除所有未跟踪的文件和目录（不包含.gitignore的文件），危险命令
git clean -xdf # 删除所有未跟踪的文件和目录（同时包含.gitignore的文件），危险命令
```