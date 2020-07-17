   
   
2000.10 


三、 改错题（2×5）：
21、指出下面程序中的错误，在错误处说明出错原因
#include<iostream>
using namespace std;

const float pi = 3.1416;
const float r = 3.2;

void main() {
	float s1, s2, c1, c2, r1;
	c1 = pi * r * r;
	s1 = 2 * pi * r;
	r = 2.8;
	c2 = pi * r * r;
	s2 = 2 * pi * r;
	cout << c1 << s1 << c2 << s2 << endl;
}




答： r = 2.8;  出错，    r是常量，不能被重新赋值 。



22. 指出下面程序中的错误，在错误处说明出错原因
 
#include<iostream>
using namespace std;

class A {
public:
	A() { func(); }
	Virtual void func() = 0;
};

void main() {
	
}



答： A() { func(); } 出错，       在构造函数类调用纯虚函数会导致程序运行错误。




23、指出下面程序中的错误，并改正
#include<iostream>
using namespace std;

class Test {
private:
	static int x;
public:
	virtual static int func();
};
int Test::x = 20;
int Test::func() {

	return x;
}
void main() {
	cout << Test::func() << endl;
	Test a;
	cout << a.func() << endl;
}



答： 类 Test 定义中  virtual static int func(); 出错，    应改为：  static int func();   ( 或 virtual int func();)。





24、指出下面程序重点错误，在错误处说明出错原因
#include<iostream>
using namespace std;

class A {
private:
	int a;
public:
	void seta(int x) { a = x; }
	void showA() {
		cout << "a=" << a << endl;
	}
};
class B : private A {
private:
	int b;
public:
	void setB(int x, int y) {
		b = x; 
		seta(y);
	}
	void showB() {
		showA(); cout << "b=" << b << endl;
	}
};
void main() {
	B obj;
	obj.seta(53); obj.showA();
	obj.setB(53, 58); obj.showB();
}




答：  main 函数的 obj.seta(53); obj.showA(); 出错，因为B从A私有派生，B的对象不能访问A中成员。







25、下面程序希望产生的输出为4+3i，但是运行输出是3+3i，请指出错误并改正
#include<iostream>
using namespace std;


class complex {
	int real; // 实部
	int imag; // 虚部
public:
	complex(int r = 0, int i = 0) : real(r), imag(i) {
	
	}

	void show() { 
		cout << real << " + " << imag << "i";
	}

	complex operator++() { 
		real++; 
		return *this;
	}
};
void main() {
	complex o(2, 3);
	++++o;
	o.show();
}

答：   complex operator++()  应为：     complex &operator++()





四、 完成程序题（4×5）：
26、在下面程序的横线处填上适当字句，使该程序执行结果为6。
#include<iostream>
using namespace std;


class base {
    int X;
public:
    void init(int x) { X = x; }// 为X置值
    int Getnum() { return X; }// 取X值
};
void main(){
    base test;
    test.init(6);
    cout << test.Getnum();
}




28、在横线处填上适当字句，完成程序。
#include<iostream>
using namespace std;


class A {
public:
	void f(int i) { cout << i << endl; }
	void g() { cout << "g\n"; }
};
class B : A {
public:
	void h() { cout << "h\n"; }
	A::f;  //
};
void main() {
	B d1;
	d1.f(6);
	d1.h(); //
}
















