# Tomcat配置
* 先安装java，2020年1月我装的还是JAVA8。建议安装那些Sun长期更新的java版本（LTS），例如JAVA8, JAVA11, JAVA17等。
* 安装完在cmd里`java -version`查看自己的java版本。
* 在左边导航栏的which version根据自己的Java版本看下载哪个版本的tomcat。一般不用最新的，用第二新的版本。例如我用的8.5。
* 下载zip就可以了，解压。
* 环境变量中加入CATALINA_HOME和JAVA_HOME, 分别对应tomcat的根目录和java jdk或jre的根目录。
* 
# 闪退处理
* 看log。
* 在cmd中进入tomcat的bin目录，运行startup.bat(linux用户运行*.sh)。看报错信息。
# 乱码设置
* remind unsolved