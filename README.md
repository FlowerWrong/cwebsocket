## A websocket server in c

#### Install

```bash
make
```

#### Usage

* -D: run server in daemonize.

```bash
make s # or make sd
```

#### Gcc

* -L/usr/local/lib: 表示要链接的库在此目录下
* -ltest: 编译器查找动态连接库时有隐含的命名规则，即在给出的名字前面加上lib，后面加上.so来确定库的名称
* ldd server

#### Benchmark

```bash
ab -n1000 -c10 http://localhost:5001/
netstat -anl | grep "5001"
lsof -i:5001
```

#### Reference

* [rfc6455](https://tools.ietf.org/html/rfc6455)
* [rfc6455 in Chinese](https://www.gitbook.com/book/chenjianlong/rfc-6455-websocket-protocol-in-chinese/details)
* [mozilla: Writing_WebSocket_servers](https://developer.mozilla.org/en-US/docs/Web/API/WebSockets_API/Writing_WebSocket_servers)
* [zlog](https://github.com/HardySimpson/zlog)
* [http-parser](https://github.com/nodejs/http-parser)
* [tinyhttp](https://github.com/mendsley/tinyhttp)
* [h3](https://github.com/c9s/h3)
* [picohttpparser](https://github.com/h2o/picohttpparser)
