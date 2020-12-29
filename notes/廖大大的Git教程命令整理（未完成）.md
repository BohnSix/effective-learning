git init

git config --global user.name "Your Name"

git config --global user.email "email@example.com"

 

git add readme.md

git commit -m “added a readme.md”

 

git status

git diff readme.md

 

git rm readme.md

 

git checkout -- readme.md（恢复）

 

ssh-keygen -t rsa -C "youremail@example.com"

git remote add origin git@github.com/username/repo.git

git remote 

git remote -v         查看远程仓库地址

git remote remove origin

 

git push -u origin master

git push origin master

git push -u origin master -f

 

git clone git@github.com/username/repo.git

git clone https://github.com/michaelliao/gitskills.git

 

git checkout -b dev

等于下面两行命令

git branch dev

git checkout dev

 

git merge dev

git branch -d dev

 

分支管理-Bug分支