# MyChatServer
可以工作在nginx tcp负载均衡环境中的集群聊天服务器和客户端源码  基于muduo网络库实现 ,使用mysql数据库,使用redis作为消息中间件，解决集群聊天服务器跨服务器问题。

编译方式:
cd build
rm -rf *
cmake ..
make




编译要求：
1.nginx配置tcp负载均衡；需要下载nginx源码编译（nginx版本>=1.9），并在nginx.conf中配置集群服务器
2.安装mysql数据库
3.安装redis

