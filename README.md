# reading-and-annotate-nghttp2
HTTP/2 库nghttp2源码分析、注释  

QQ交流群1(针对在校生)-(群号：568892619 )
===================================    
群号：568892619  
    在校生nginx、redis、memcache、twemproxy等源码实现交流，指引在校生快速阅读这些底层开源基础中间件代码，对以后工作很有帮助  
  
QQ交流群2(针对已工作，有一些技术基础的同学)-(581089275)
===================================    
群号: 581089275  
    主要针对有一定技术基础的开发人员，提升其基础组件源码技术深度(如nginx、redis、memcache、twemproxy、mongodb、存储引擎、内核网络协议栈等)，同时可以帮助业务开发、运维开发、嵌入式等其他工作方向的同学转基础组件、中间件、分布式存储、高性能服务器等开发
  
nginx高性能特性应用于其他项目，效果明显  
===================================    
Nginx多进程高并发、低时延、高可靠机制在缓存代理中的应用: 
https://github.com/y123456yz/reading-code-of-nginx-1.9.2/blob/master/%E5%80%9F%E9%89%B4nginx%E7%89%B9%E6%80%A7%E5%BA%94%E7%94%A8%E4%BA%8E%E5%85%B6%E4%BB%96%E9%A1%B9%E7%9B%AE-Nginx%E5%A4%9A%E8%BF%9B%E7%A8%8B%E9%AB%98%E5%B9%B6%E5%8F%91%E3%80%81%E4%BD%8E%E6%97%B6%E5%BB%B6%E3%80%81%E9%AB%98%E5%8F%AF%E9%9D%A0%E6%9C%BA%E5%88%B6%E5%9C%A8%E7%BC%93%E5%AD%98%E4%BB%A3%E7%90%86%E4%B8%AD%E7%9A%84%E5%BA%94%E7%94%A8.docx  
   
nginx多进程、高性能、低时延机制应用于缓存中间件twemproxy，对twemproxy进行多进程优化改造，提升TPS，降低时延:    
http://blog.itpub.net/69908606/viewspace-2565161/

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
