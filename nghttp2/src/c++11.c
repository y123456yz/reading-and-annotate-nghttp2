/*
标准库函数 std::move
既然编译器只对右值引用才能调用转移构造函数和转移赋值函数，而所有命名对象都只能是左值引用，如果已知一个命名对象不再被使用而想对它调用转移构造函数和转移赋值函数，也就是把一个左值引用当做右值引用来使用，怎么做呢？标准库提供了函数 std::move，这个函数以非常简单的方式将左值引用转换为右值引用。

示例程序 :

 void ProcessValue(int& i) { 
  std::cout << "LValue processed: " << i << std::endl; 
 } 

 void ProcessValue(int&& i) { 
  std::cout << "RValue processed: " << i << std::endl; 
 } 

 int main() { 
  int a = 0; 
  ProcessValue(a); 
  ProcessValue(std::move(a)); 
 }
运行结果 :

 LValue processed: 0 
 RValue processed: 0
std::move在提高 swap 函数的的性能上非常有帮助，一般来说，swap函数的通用定义如下：

    template <class T> swap(T& a, T& b) 
    { 
        T tmp(a);   // copy a to tmp 
        a = b;      // copy b to a 
        b = tmp;    // copy tmp to b 
 }
有了 std::move，swap 函数的定义变为 :

    template <class T> swap(T& a, T& b) 
    { 
        T tmp(std::move(a)); // move a to tmp 
        a = std::move(b);    // move b to a 
        b = std::move(tmp);  // move tmp to b 
 }
通过 std::move，一个简单的 swap 函数就避免了 3 次不必要的拷贝操作。

&&位右值引用，可以避免内存拷贝，move是实现把左值引用转换为右值引用 yang add







2. C++11新标准 如果不用std::move，拷贝的代价很大，性能较低。使用move几乎没有任何代价，只是转换了资源的所有权 

3. emplace_back为C++11新标准 vector的末尾插入一个元素  容器中添加类的对象时, 相比于push_back,emplace_back可以避免额外类的复制和移动操作.
    
*/
