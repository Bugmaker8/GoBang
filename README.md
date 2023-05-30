- [Gobang 联机五子棋](#head1)
	- [ 项目简介](#head2)
		- [ 客户端](#head3)
		- [ 服务端](#head4)
	- [ 功能介绍](#head5)
	- [ 程序预览](#head6)
	- [ 程序框架](#head7)
	- [ TODO](#head8)

## <span id="head1">Gobang 联机五子棋</span>

------

#### <span id="head2"> 项目简介</span>
学完网络编程优化了一下 C++ 课程设计，在原来的本地五子棋对战的基础上结合网络编程扩展出联机对战。

该程序分为 **服务端** 与 **客户端**，客户端采用 QT 编写提供基本的图形化界面，服务端采用 C++ 编写同时架设在 Linux 服务器上。


##### <span id="head3"> 客户端</span>
通过QT实现客户端的编写，提供友好的人机交互界面。

- QT的基础界面编程
- QT的画笔工具
- QT的基础socket编程


##### <span id="head4"> 服务端</span>
Linux下使用c++编写的并发服务器，为客户端提供服务。

- 通过序列化自定义的数据格式完成客户端之间的socket交互
- 使用epoll多路IO复用技术,实现并发，采用 LT+LT epoll模式下的阻塞IO
- 当有两个用户连接成功服务器创建一个新线程作为消息处理器处理客户端之间的交互

#### <span id="head5"> 功能介绍</span>

- 人机对战功能
- 本地对战功能
- 联机对战功能
- 棋局内能够悔棋，认输，求和和消息发送

#### <span id="head6"> 程序预览</span>

### 本地对局

支持 AI 对战与本地双人对战，支持局时与悔棋功能。

![local](https://z3.ax1x.com/2021/08/09/f8iTDH.png)

### 联机对局

支持大部分功能如：悔棋、认输、求和等，支持实时信息交流。

![Net](https://z3.ax1x.com/2021/08/09/f8ibVA.png)

### 服务端

服务端实时日志如下。

![Server](https://z3.ax1x.com/2021/08/09/f8i7bd.png)

### 主菜单

![Menu](https://z3.ax1x.com/2021/08/09/f8DvKx.jpg)

---
#### <span id="head7"> 程序框架</span>

![gobang_frame](https://z3.ax1x.com/2021/08/09/f1qTUJ.jpg)


---
#### <span id="head8"> TODO</span>
##TODO
-  使用 Mysql 进行数据存储服务，来完成用户信息的相关功能，如登陆，排名，对局记录等。
-  使用用 Reactor 架构实现多人多房间对局。
-  使用protobuf来设计通信协议，提高通信效率，避免TCP沾包。
