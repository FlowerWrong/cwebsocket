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
