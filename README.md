# reading-and-annotate-nghttp2
HTTP/2 库nghttp2源码分析、注释  

阅读进度：
===================================
17.4.11    
    调试日志增加函数名和行号，这样有利于阅读代码  
    nghttp启动过程、连接建立过程、网络读写事件处理流程注释分析  
  	
17.4.18
    各种帧组包发送流程分析  	
  	
  	
  	
相关参考资料：
===================================    
HTTP/2协议部分资料和tcpdump抓包分析可以参考:    
https://github.com/y123456yz/reading-code-of-nginx-1.9.2/tree/master/nginx-1.9.2/http2%E7%9B%B8%E5%85%B3     
  
nginx http2模块源码分析可以参考:https://github.com/y123456yz/reading-code-of-nginx-1.9.2    




放弃分析nghttp2：  
===================================  
后期不在继续分析nghttp2,原因如下:  
1. 冗余代码太多,代码可读性实在是差  
2. HTTP2主要功能代码在nginx中已经分析，没必要再次分析。

有兴趣学习http2源码实现过程的可以参考:https://github.com/y123456yz/reading-code-of-nginx-1.9.2       
对quic源码实现有兴趣的可以参考:https://github.com/y123456yz/reading-and-annotate-quic   

   

nginx http2 quic学习参考:      
===================================    
nginx源码中文详细分析注释参考：https://github.com/y123456yz/reading-code-of-nginx-1.9.2    
libquic goquic编译安装，源码分析注释：https://github.com/y123456yz/reading-and-annotate-quic         
nghttp2相关参考：https://github.com/y123456yz/reading-and-annotate-nghttp2    