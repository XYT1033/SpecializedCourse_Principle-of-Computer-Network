
// *  *   *  *    *  *   *  *   *  *   *  *  

#include <iostream>
using namespace std;
int max(int ,int);
int max(int ,int ,int);
void main()
{cout<<max(35,25)<<","<<max(25,39,35)<<endl;
}
int max(float x,int y)
{return (x>y?x:y);}
int max(int x,int y,int z)
{int t=max(x,y);
 return max(t,z);
}
#include <iostream>
using namespace std;
void main()
{
	double *p;
	p=new double[3];
	for(int i=0;i<3;i++)
		cin>>*(p+i);
	for(i=0;i<3;i++)
		cout<<*(p+i)<<" ";
	delete p;
}








// *  *   *  *    *  *   *  *   *  *   *  *  

#include <iostream>
using namespace std;
void main()
{
   int x=56;
   int& a=x;
   int *p=&x;
   cout<<"x="<<x<<",&x="<<&x<<",a="<<a<<",&a="<<&a<<endl;
   cout<<"x="<<x<<",&x="<<&x<<",p="<<p<<",*p="<<*p<<endl;
}














// *  *   *  *    *  *   *  *   *  *   *  *  

#include <iostream>
#include <algorithm>
using namespace std;
void main()
{double a[]={1.1,4.4,3.3,2.2},b[4];
 copy(a,a+4,ostream_iterator<double>(cout,","));
 cout<<endl;
 reverse_copy(a,a+4,ostream_iterator<double>(cout,","));
 cout<<endl;
 copy(a,a+4,b);
 copy(b,b+4,ostream_iterator<double>(cout,","));
 cout<<endl;
 sort(a,a+4);
 copy(a,a+4,ostream_iterator<double>(cout,","));
 cout<<endl;
 reverse_copy(a,a+4,b);
 copy(b,b+4,ostream_iterator<double>(cout,","));
 cout<<endl;
}












// *  *   *  *    *  *   *  *   *  *   *  *  

#include <iostream>
#include <iomanip>
using namespace std;
void main()
{
	int a=29,b=1001;
	cout<<a<<setw(6)<<setfill('*')<<
		setiosflags(ios_base::left)<<b<<endl;
cout<<	resetiosflags(ios_base::left)<<
	setw(6)<<a<<b<<endl;
	cout<<"dec"<<dec<<a<<endl;
	cout<<"oct"<<oct<<a<<endl;
	cout<<"hex"<<hex<<a<<endl;
}






 



// *  *   *  *    *  *   *  *   *  *   *  *  

#include <iostream>
using namespace std;
class Point{
   private:
	   double x,y;
   public:
	   Point() {};
	   Point(double a,double b)
	   {x=a;y=b;}
	   void Setxy(double a,double b)
	   {x=a;y=b;}
	   void Display()
	   {cout<<x<<"\t"<<y<<endl;}
};
void main()
{
	Point a;
	Point b(18.5,10.6);
	a.Setxy(10.6,18.5);
	a.Display();
	b.Display();	
}











// *  *   *  *    *  *   *  *   *  *   *  *  

#include <iostream>
#include <string>
using namespace std;
void main()
{
	string str1("We are here!");
	string str2("where are you? ");
	cout<<str1[0]<<str1[11]<<","<<str1<<endl;
	cout<<str2[0]<<str2[13]<<","<<str2<<endl;
	cout<<"please input a word:";
    cin>>str1;
	cout<<"length of the "<<str1<<" is "<<str1.size()
		<<"."<<endl;
}














// *  *   *  *    *  *   *  *   *  *   *  *  

#include <iostream>
#include <complex>
#include <string>
using namespace std;
void main()
{
	complex <int> num1(2,3);
	complex <float> num2(3.5,4.5);
	string str1("real is ");
	string str2("image is ");
cout<<str1<<num1.real()<<','<<str2<<num1.imag()<<endl;
cout<<str1<<num2.real()<<','<<str2<<num2.imag()<<endl;

	
}







// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
#include <string>
using namespace std;
void swap(string,string);
void main()
{
	string str1("现在"),str2("过去");
	swap(str1,str2);
	cout<<"返回后:str1="<<str1<<" str2="<<str2<<endl;
}
void swap(string s1,string s2)
{
	string temp=s1;
	s1=s2;s2=temp;
	cout<<"交换为:str1="<<s1<<" str2="<<s2<<endl;
}











// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
#include <string>
using namespace std;
void swap(string *,string *);
void main()
{
	string str1("现在"),str2("过去");
	swap(&str1,&str2);
	cout<<"返回后:str1="<<str1<<" str2="<<str2<<endl;
}
void swap(string *s1,string *s2)
{
	string temp=*s1;
	*s1=*s2;*s2=temp;
	cout<<"交换为:str1="<<*s1<<" str2="<<*s2<<endl;
}











// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
#include <string>
using namespace std;
void swap(string &,string &);
void main()
{
	string str1("现在"),str2("过去");
	swap(str1,str2);
	cout<<"返回后:str1="<<str1<<" str2="<<str2<<endl;
}
void swap(string &s1,string &s2)
{
	string temp=s1;
	s1=s2;s2=temp;
	cout<<"交换为:str1="<<s1<<" str2="<<s2<<endl;
}









// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
#include <string>
using namespace std;
void display(string s1,string s2="",string s3="");
void main()
{
	string str1("现在"),str2("过去"),str3("将来");
	display(str1);
	display(str1,str2,str3);
	display(str3,str1);
	display(str2,str3);
}
void display(string s1,string s2,string s3)
{
	if(s2==""&&s3=="")  cout<<s1<<endl;
	else if(s3==""&&s2!="") cout<<s1<<","<<s2<<endl;
	else cout<<s1<<","<<s2<<","<<s3<<endl;
}














// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
#include <string>
using namespace std;
void change(const string&);
void main()
{
	string str("can you change it?");
    change(str);
	cout<<str<<endl;
}
void change(const string&s) 
{
	 s=s+"no!";
	cout<<s<<endl;

}










// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
float *input(int&);
void main()
{
  int num;
  float *data;
  data=input(num);
  if(data){
	  for(int i=0;i<num;i++)
		  cout<<data[i]<<" ";
	  delete data;
  }
}
float *input(int &n)
{
	cout<<"input number:";
	cin>>n;
	if(n<=0) return NULL;
	float *buf=new float[n];
	if(buf==0) return NULL;
	for(int i=0;i<n;i++)
		cin>>buf[i];
	return buf;
}














// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
#include <string>
using namespace std;
string input(const int);
void main()
{
  int n;
  cout<<"input n=";
  cin>>n;
  string str=input(n);
  cout<<str<<endl;
}
string input(const int n)
{
	string s1,s2;
	for(int i=0;i<n;i++)
	{cin>>s1;s2=s2+s1+" ";}
	return s2;
}












// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
inline int isnumber(char c){return (c>='0'&&c<='9')?1:0;}
void main()
{
	char c;
	cin>>c;
	if(isnumber(c)) cout<<"you entered a digit";
	else cout<<"you entered a non_digit";
}










// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
template <typename T>
T max(T m1,T m2)
{return (m1>m2)?m1:m2;}

template <typename T>
T min(T m1,T m2)
{return (m1<m2)?m1:m2;}
void main()
{   	cout<<max(2,5)<<"\t"<<max(2.1,5.2)<<"\t"<<
		max('w','a')<<"\t"<<max("ABC","ABCD")<<endl;

       cout<<min(2,5)<<"\t"<<min(2.1,5.2)<<"\t"<<
		min('w','a')<<"\t"<<min("ABC","ABCD")<<endl;
}












// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
class Point{
  private:
     int x,y;
  public:
	 void Setxy(int a,int b);
	 void Move(int a,int b);
	 void Display();
	 int Getx();
	 int Gety();
};
void Point::Setxy(int a,int b)
{x=a;y=b;}
void Point::Move(int a,int b)
{x=x+a;y=y+b;}
void Point::Display()
{cout<<x<<","<<y<<endl;}
int Point::Getx()
{return x;}
int Point::Gety()
{return y;}












// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
class Point{
  private:
     int x,y;
  public:
	 void Setxy(int a,int b);
	 void Move(int a,int b);
	 void Display();
	 int Getx();
	 int Gety();
};
void Point::Setxy(int a,int b)
{x=a;y=b;}
void Point::Move(int a,int b)
{x=x+a;y=y+b;}
void Point::Display()
{cout<<x<<","<<y<<endl;}
int Point::Getx()
{return x;}
int Point::Gety()
{return y;}

void print(Point a)
{a.Display();}
void main()
{
	Point A,B;
	A.Setxy(25,55);
	B=A;
	A.Display();
	A.Move(-10,20);
	print(A);
	print(B);
	cout<<A.Getx()<<endl;
}


















// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
class Point{
  private:
     int x,y;
  public:
    void Setxy(int a,int b)
	{x=a;y=b;}
    void Move(int a,int b)
	{x=x+a;y=y+b;}
    void Display()
	{cout<<x<<","<<y<<endl;}
    int Getx()
	{return x;}
    int Gety()
	{ return y;}
};
void print(Point *a)
{a->Display();}
void print(Point &a)
{a.Display();}
void main()
{
	Point A,B,*p;
	Point &RA=A;
	A.Setxy(25,55);
	B=A;
	p=&B;
	p->Setxy(112,115);
	print(p);
	p->Display();
	RA.Move(-80,23);
	print(A);
	print(&A);
}


















// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
class Point{
  private:
     int x,y;
  public:
     Point();
	 Point(int,int);
};
Point::Point():x(0),y(0)
{cout<<"Initializing default"<<endl;}
Point::Point(int a,int b):x(a),y(b)
{cout<<"Initializing "<<a<<","<<b<<endl;}
void main()
{
	Point A;
	Point B(15,25);
	Point C[2];
	Point D[2]={Point(5,7),Point(8,12)};
}















// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
class Point{
  private:
     int x,y;
  public:
     Point();
	 Point(int,int);
};
Point::Point():x(0),y(0)
{cout<<"Initializing default"<<endl;}
Point::Point(int a,int b):x(a),y(b)
{cout<<"Initializing "<<a<<","<<b<<endl;}
void main()
{
	Point *ptr1=new Point;
	Point *ptr2=new Point(5,7);
	delete ptr1;
	delete ptr2;
}

















// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
class Point{
  private:
     int x,y;
  public:
     Point(int=0,int=0);
};
Point::Point(int a,int b):x(a),y(b)
{cout<<"Initializing "<<a<<","<<b<<endl;}
void main()
{
	Point A;
	Point B(15,25);
	Point C[2];
}


















// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
class Point{
  private:
     int x,y;
  public:
     Point(int=0,int=0);
	 ~Point();
};
Point::Point(int a,int b):x(a),y(b)
{cout<<"Initializing "<<a<<","<<b<<endl;}
Point::~Point()
{cout<<"Destructor is active"<<endl;}
void main()
{
	Point *ptr=new Point[2];
    delete []ptr;

}
















// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
class Point{
  private:
     int x,y;
  public:
	 void Set(int a,int b)
	{x=a;y=b;}
    int Getx()
	{return x;}
    int Gety()
	{return y;}
};
class Rectangle{
	Point Loc;
	int H,W;
  public:
    void Set(int x,int y,int h,int w);
	Point * GetLoc();
	int GetHeight(){return H;}
	int GetWidth() {return W;}
};
void Rectangle::Set(int x,int y,int h,int w)
{
	Loc.Set(x,y);
	H=h;W=w;
}

Point *Rectangle::GetLoc()
{return &Loc;}
void main()
{
	Rectangle rect;
	rect.Set(10,2,25,20);
	cout<<rect.GetHeight()<<","<<rect.GetHeight()<<",";
	Point *p=rect.GetLoc();
	cout<<p->Getx()<<","<<p->Gety()<<endl;
}








// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
class object{
  private:
     int val;
  public:
	  object():val(0)
	  {cout<<"Default constructor for object"<<endl;}
	  object(int i):val(i)
	  {cout<<"Constructor for object"<<val<<endl;}
	  ~object()
	  {cout<<"Destructor for object"<<val<<endl;}
};
class container{
  private:
	  object one;
	  object two;
	  int data;
  public:
      container():data(0)
	  {cout<<"Default constructor for containter"<<endl;}
	  container(int i,int j,int k);
	  ~container()
	  {cout<<"Destructor for container"<<data<<endl;}
};
container::container(int i,int j,int k):two(i),one(j)
	  {
	    data=k;
	    cout<<"Constructor for container"<<data<<endl;
		}

void main()
{
   container obj,anObj(5,6,10);
}
















// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
class Test{
     static int x;
     int n;
  public:
	  Test(){}
	  Test(int a,int b)
	  {x=a;n=b;}
	  static int func(){return x;}
	  static void sfunc(Test&r,int a){r.n=a;}
	  int Getn(){return n;}
};
int Test::x=25;

void main()
{
	cout<<Test::func();
	Test b,c;
	b.sfunc(b,58);
	cout<<" "<<b.Getn();
	cout<<" "<<b.func();
	cout<<" "<<c.func();
	Test a(24,56);
	cout<<" "<<a.func()<<" "<<b.func()<<" "<<c.func()<<endl;
}

















// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
class test{
  private:
     int n;
  public:
	  test(int i)
	  {n=i;cout<<"constructor:"<<i<<endl;}
	  ~test(){cout<<"destructo:"<<n<<endl;}
	  int getn(){return n;}
	  void inc(){++n;}
};

void main()
{
	cout<<"loop start"<<endl;
    for(int i=0;i<3;i++){
		static test a(3);
		test b(3);
		a.inc();
		b.inc();
		cout<<"a.n="<<a.getn()<<endl;
	    cout<<"b.n="<<b.getn()<<endl;
	}
	cout<<"loop end."<<endl;
	cout<<"Exit main()"<<endl;
}


















// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
#include <cmath>
using namespace std;
class Point{
  private:
     double x,y;
  public:
	  Point(double xi,double yi)
	  {x=xi;y=yi;}
	  double GetX(){return x;}
	  double GetY(){return y;}
	  friend double distances(Point&,Point&);
};
double distances(Point& a,Point& b)
{
	double dx=a.x-b.x;
	double dy=a.y-b.y;
	return sqrt(dx*dx+dy*dy);
}
void main()
{
    Point p1(3.5,5.5),p2(4.5,6.5);
	cout<<"The distance is "<<distances(p1,p2)<<endl;
}


















// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
class Two;
class One{
  private:
     int x;
  public:
	  One(int a) {x=a;}
	  int Getx(){return x;}
	  void func(Two&);
};
class Two{
   private:
	   int y;
   public:
	   Two(int b){y=b;}
	   int Gety(){return y;}
	   friend void One::func(Two&);
};
void One::func(Two& r)
{r.y=x;}

void main()
{
    One Obj1(5);
	Two Obj2(8);
	cout<<Obj1.Getx()<<" "<<Obj2.Gety()<<endl;
	Obj1.func(Obj2);
	cout<<Obj1.Getx()<<" "<<Obj2.Gety()<<endl;
}
















// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
class Two{
   private:
	   int y;
   public:
	   friend class One;
};
class One{
  private:
     int x;
  public:
	  One(int a,Two& r,int b) 
	  {x=a;r.y=b;}
	  void Display(Two&);
};

void One::Display(Two& r)
{cout<<x<<" "<<r.y<<endl;}

void main()
{
    Two Obj2;
	One Obj1(23,Obj2,55);
	Obj1.Display(Obj2);
}



















// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
class Base{
   private:
	   int x;
	   const int a;
	   static const int b;
	   const int& r;
   public:
	   Base(int,int);
	   void show()
	   {cout<<x<<","<<a<<","<<b<<","<<r<<endl;}
	   void display(const double&r)
	   {cout<<r<<endl;}
};
const int Base::b=125;
Base::Base(int i,int j):x(i),a(j),r(x)
{}
void main()
{
    Base a1(104,118),a2(119,140);
	a1.show();
	a2.show();
	a2.display(3.14159);
}



















// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
class Base{
   private:
	   double x,y;
	   const double p;
   public:
	   Base(double m,double n,double d):p(d)
	   {x=m;y=n;}
	   void show();
	   void show() const;
};
void Base::show()
{cout<<x<<","<<y<<"p="<<p<<endl;}
void Base::show() const
{cout<<x<<","<<y<<"const p="<<p<<endl;}

void main()
{
    Base a(8.9,2.5,3.1416);
	const Base b(2.5,8.9,3.14);
	b.show();
	a.show();
}




















// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
class Test{
   private:
	   int num;
	   double f1;
   public:
	   Test(int n){num=n;}
	   Test(int n,double f){num=n;f1=f;}
	   int GetNum()
	   {return num;}
	   double GetF(){return f1;}
};

void main()
{
    Test one[2]={2,4},*p;
	Test two[2]={Test(1,3.2),Test(5,9.5)};
	for(int i=0;i<2;i++)
		cout<<"one["<<i<<"]="<<one[i].GetNum()<<endl;
	p=two;
	for(i=0;i<2;i++,p++)
		cout<<"two["<<i<<"]=("<<p->GetNum()<<","<<p->GetF()
		    <<")"<<endl;
}


























// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
class Test{
   private:
	   int num;
	   double f1;
   public:
	   Test(int n){num=n;}
	   Test(int n,double f){num=n;f1=f;}
	   int GetNum()
	   {return num;}
	   double GetF(){return f1;}
};

void main()
{
    Test *one[2]={new Test(2),new Test(4)};
	Test *two[2]={new Test(1,3.2),new Test(5,9.5)};
	for(int i=0;i<2;i++)
		cout<<"one["<<i<<"]="<<one[i]->GetNum()<<endl;
	for(i=0;i<2;i++)
		cout<<"two["<<i<<"]=("<<two[i]->GetNum()<<","<<two[i]->GetF()
		    <<")"<<endl;
}



















// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
class A{
   private:
	   int val;
   public:
	   A(int i){val=i;}
	   int value(int a)
	   {return val+a;}
};

void main()
{
    int(A::*pfun)(int);
	pfun=A::value;
	A obj(10);
	cout<<(obj.*pfun)(15)<<endl;
	A *pc=&obj;
	cout<<(pc->*pfun)(15)<<endl;
}






// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
class Point{
   private:
	   int x,y;
   public:
	   Point(int a,int b)
	   {x=a;y=b;cout<<"Point.."<<endl;}
	   void showxy()
	   {cout<<"x="<<x<<",y="<<y<<endl;}
	   ~Point()
	   {cout<<"delete Point"<<endl;}
};
class Rectangle:public Point
{
  private:
	  int H,W;
  public:
	  Rectangle(int a,int b,int h,int w):Point(a,b)
	  {H=h;W=w;cout<<"Rectangle..."<<endl;}
	  void show()
	  {cout<<"H="<<H<<",W="<<W<<endl;}
	  ~Rectangle()
	  {cout<<"delete rectangle"<<endl;}
};

void main()
{
    Rectangle r1(3,4,5,6);
	r1.showxy();
	r1.show();
}












// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
class Point{
   protected:
	   int x,y;
   public:
	   Point(int a,int b)
	   {x=a;y=b;}
	   void show()
	   {cout<<"x="<<x<<",y="<<y<<endl;}
};
class Rectangle:public Point
{
  private:
	  int H,W;
  public:
	  Rectangle(int,int,int,int);
	 void show()
	  {cout<<"x="<<x<<",y="<<y<<",H="<<H<<",W="<<W<<endl;}
};
Rectangle::Rectangle(int a,int b,int h,int w):Point(a,b)
	  {H=h;W=w;}

void main()
{
	Point a(3,4);
    Rectangle r1(3,4,5,6);
	a.show();
    r1.show();
}
















// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
class Point{
   protected:
	   int x,y;
   public:
	   Point(int a,int b)
	   {x=a;y=b;}
	   void show()
	   {cout<<"x="<<x<<",y="<<y<<endl;}
};
class Rectangle:public Point
{
  private:
	  int H,W;
  public:
	  Rectangle(int,int,int,int);
	 void show()
	  {cout<<"x="<<x<<",y="<<y<<",H="<<H<<",W="<<W<<endl;}
};
Rectangle::Rectangle(int a,int b,int h,int w):Point(a,b)
	  {H=h;W=w;}

void main()
{
	Point a(1,2);
    Rectangle b(3,4,5,6);
	a.show();
    b.show();
	Point& ra=b;
	ra.show();
	Point* p=&b;
	p->show();
	Rectangle* pb=&b;
	pb->show();
	a=b;
	a.show();
}
















// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
class Point{
   private:
	   int x,y;
   public:
	   Point(int a,int b)
	   {x=a;y=b;}
	   void show()
	   {cout<<"x="<<x<<",y="<<y<<endl;}
};
class Rectangle:private Point
{
  private:
	  int H,W;
  public:
	  Rectangle(int,int,int,int);
	 void show()
	 {Point::show();cout<<"H="<<H<<",W="<<W<<endl;}
};
class Test:public Rectangle
{
 public:
	 Test(int a,int b,int h,int w):Rectangle(a,b,h,w){}
	 void show(){Rectangle::show;}

}


















// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
class A{
   private:
	   int a;
   public:
	   void setA(int x)
	   {a=x;}
	   void showA()
	   {cout<<"a="<<a<<endl;}
};
class B{
   private:
	   int b;
   public:
	   void setB(int x)
	   {b=x;}
	   void showB()
	   {cout<<"b="<<b<<endl;}
};
class C:public A,private B{
   private:
	   int c;
   public:
	   void setC(int x,int y)
	   {c=x;setB(y);}
	   void showC()
	   {showB();cout<<"c="<<c<<endl;}
};
void main()
{
	C obj;
	obj.setA(53);
	obj.showA();
	obj.setC(55,58);
	obj.showC();
}

















// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
class A{
     public:
		 void func()
		 {cout<<"a.func"<<endl;
		 }
};
class B{
   public:
	   void func()
	   {cout<<"b.func"<<endl;}
	   void gunc()
	   {cout<<"b.gunc"<<endl;}
};
class C:public A,public B{
   public:
	   void gunc()
	   {cout<<"c.gunc"<<endl;}
	 //  void hunc()  {func;}
	   void hun1(){A::func();}
	   void hun2(){A::func();}
};
void main()
{
	C obj;
	obj.A::func();
	obj.B::func();
	obj.B::gunc();
	obj.C::gunc();
	obj.gunc();
	obj.hun1();
	obj.hun2();
}






// *  *   *  *    *  *   *  *   *  *   *  *  
template <class T>
class TAnyTemp
{
	T x,y;
	public:
		TAnyTemp(T X,T Y):x(X),y(Y){}
		T getx() {return x;}
		T gety() {return y;}
};
















// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
template <class T>
class Max4
{
	T a,b,c,d;
	T Max(T a,T b){return(a>b)?a:b;}
	public:
		Max4(T, T, T, T);
		T Max(void);
};
template <class T>
Max4<T>::Max4(T x1,T x2,T x3,T x4):a(x1),b(x2),c(x3),d(x4){}
template <class T>
T Max4<T>::Max(void)
{return Max(Max(a,b),Max(c,d));}
void main()
{
	Max4<char>C('W','w','a','A');
	Max4<int>A(-25,-67,-66,-256);
	Max4<double>B(1.25,4.3,-8.6,3.5);
	cout<<C.Max()<<" "<<A.Max()<<" "<<B.Max()<<endl;
}











// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
template <class T,int size=4>
class Sum
{
	    T m[size];
	public:
		Sum(T a,T b,T c,T d)
		{m[0]=a;m[1]=b;m[2]=c;m[3]=d;}
		T S()
		{return m[0]+m[1]+m[2]+m[3];}
};

void main()
{
	Sum<int,4>num1(-23,5,8,-2);
	Sum<float,4>f1(3.5f,-8.5f,8.8f,9.7f);
	Sum<double,4>d1(355.4,253.8,456.7,-67.8);
	Sum<char,4>c1('W',-2,-1,-1);
	cout<<num1.S()<<","<<f1.S()<<","<<d1.S()<<","<<c1.S()<<endl;
}











// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
class Point
{
	    int x,y;
	public:
		Point(int a,int b)
		{x=a;y=b;}
		void display()
		{cout<<x<<","<<y<<endl;}
};
template <typename T>
class Line:public Point
{
	   T x2,y2;
     public:
		 Line(int a,int b,T c,T d):Point(a,b){x2=c;y2=d;}
		 void display()
		 {Point::display();cout<<x2<<","<<y2<<endl;}
};
void main()
{
	Point a(3,8);
	a.display();
	Line<int>ab(4,5,6,7);
	ab.display();
	Line<double>ad(4,5,6.5,7.8);
	ad.display();
}










// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
template <typename T>
class Point
{
	    T x,y;
	public:
		Point(T a,T b)
		{x=a;y=b;}
		void display()
		{cout<<x<<","<<y<<endl;}
};
template <typename T>
class Line:public Point<T>
{
	   T x2,y2;
     public:
		 Line(T a,T b,T c,T d):Point<T>(a,b){x2=c;y2=d;}
		 void display()
		 {Point<T>::display();cout<<x2<<","<<y2<<endl;}
};
void main()
{
	Point <double>a(3.5,8.8);
	a.display();
	Line<int>ab(4,5,6,7);
	ab.display();
	Line<double>ad(4.5,5.5,6.5,7.5);
	ad.display();
}













// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void main()
{
	double a[]={1.1,4.4,3.3,2.2};
	vector <double>va(a,a+4),vb(4);
	typedef vector<double>::iterator iterator;
	iterator first=va.begin();
	for(first;first<va.end();first++)
		cout<<*first<<" ";
	for(--first;first>va.begin()-1;first--)
		cout<<*first<<" ";
	copy(va.begin(),va.end(),ostream_iterator<double>(cout," "));

	cout<<endl;
	typedef vector<double>::reverse_iterator reverse_iterator;
	reverse_iterator last=va.rbegin();
	for(last;last<va.rend();last++)
		cout<<*last<<" ";
	for(--last;last>va.rbegin()-1;last--)
		cout<<*last<<" ";
	copy(va.rbegin(),va.rend(),ostream_iterator<double>(cout," "));
}











// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;
void main()
{
	double a[]={1.1,4.4,3.3,2.2};
	vector <double>va(a,a+4),vb(4);
	copy(va.begin(),va.end(),ostream_iterator<double>(cout," "));
	cout<<endl;
    reverse_copy(va.begin(),va.end(),ostream_iterator<double>(cout," "));
	cout<<endl;
	reverse_copy(va.begin(),va.end(),vb.begin());
	copy(vb.begin(),vb.end(),ostream_iterator<double>(cout," "));
	cout<<endl;
	sort(va.begin(),va.end());
	sort(vb.begin(),vb.end(),greater<double>());
    copy(va.begin(),va.end(),ostream_iterator<double>(cout," "));
    cout<<endl;
    copy(vb.begin(),vb.end(),ostream_iterator<double>(cout," "));
	cout<<endl;
	va.swap(vb);
	copy(va.begin(),va.end(),ostream_iterator<double>(cout," "));
    cout<<endl;
    copy(vb.begin(),vb.end(),ostream_iterator<double>(cout," "));
	cout<<endl;
	cout<<*find(va.begin(),va.end(),4.4);
}












// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
#include <complex>
#include <vector>
using namespace std;
struct st{
    int a,b;
}a[]={{2,5},{4,8}};
void main()
{
  complex<float>num[]={complex<float>(2,3),complex<float>(3.5,4.5)};
  vector<complex<float>*>vnum(2);
  vnum[0]=&num[0];
  vnum[1]=&num[1];
  for(int i=0;i<2;i++)
	  cout<<"real is "<<vnum[i]->real()<<",image is "
	    <<vnum[i]->imag()<<endl;
  vector<st*>cp(2);
  cp[0]=&a[0];
  cp[1]=&a[1];
  for(i=0;i<2;i++)
	  cout<<"a="<<cp[i]->a<<",b="<<cp[i]->b<<endl;
}
//ex9
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;
void main()
{
	vector <char>a(10),b(10);
	cout<<a.empty()<<","<<sizeof(a)<<",";
	for(char i='a',j=0;j<10;j++)
		a[j]=i+j;
	cout<<a.max_size()<<","<<a.capacity()
		<<","<<a.size()<<endl;
	for(j=0;j<10;j++)
		cout<<a[j]<<" ";
	cout<<endl;
	copy(a.begin(),a.end(),b.begin());
	copy(a.begin(),a.end(),ostream_iterator<double>(cout," "));
	cout<<endl;
	reverse_copy(a.begin(),a.end(),ostream_iterator<double>(cout," "));
	cout<<endl<<a.front()<<","<<a.back()<<","<<a.operator [](5)<<endl;
    sort(b.begin(),b.end(),greater<char>());
	copy(b.begin(),b.end(),ostream_iterator<char>(cout," "));

}

















// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void main()
{
	char st[11]="abcdefghij";
	vector <char>a(st,st+10);
	vector <char>::iterator  p;
    p=a.begin();
	a.insert(p+3,'X');
	copy(a.begin(),a.end(),ostream_iterator<char>(cout," "));
	cout<<endl;
	p=a.begin();
	a.insert(p,3,'A');
	copy(a.begin(),a.end(),ostream_iterator<char>(cout," "));
    cout<<endl;
	a.erase(p+8);
	copy(a.begin(),a.end(),ostream_iterator<char>(cout," "));
    cout<<endl;
}















// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
#include <vector>
using namespace std;
void main()
{
	char st[11]="abcdefghij";
	vector <char>a(st,st+10);
	vector <char>::iterator  p=a.begin();
	vector <char>::reverse_iterator ps;
    for(p=a.begin();p!=a.end();++p)
		cout<<*p<<" ";
	cout<<endl;
	for(p=a.end()-1;p!=a.begin()-1;--p)
		cout<<*p<<" ";
	cout<<endl;
	for(ps=a.rbegin();ps!=a.rend();++ps)
		cout<<*ps<<" ";
	cout<<endl;
	for(--ps;ps!=a.rbegin()-1;--ps)
		cout<<*ps<<" ";

}







// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
const double PI=3.14159;
class Point{
   private:
	   double x,y;
    public:
		Point(double i,double j)
		{x=i;y=j;}
	double area()
		 {return 0; }
};
class Circle:public Point{
  private:
	  double radius;
  public:
	  Circle(double a,double b,double r):Point(a,b)
	   {radius=r;}
	   double area()
	   {return PI*radius*radius;}
};

void main()
{
	Point a(1.5,6.7);
	Circle c(1.5,6.7,2.5);
	cout<<"area of Point is "<<a.area()<<endl;
	cout<<"area of Circle is "<<c.area()<<endl;
	Point *p=&c;
	cout<<"area of Circle of "<<p->area()<<endl;
	Point &rc=c;
	cout<<"area of Circle is "<<rc.area()<<endl;
}










// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
const double PI=3.14159;
class Point{
   private:
	   double x,y;
    public:
		Point(double i,double j)
		{x=i;y=j;}
	virtual double area()
		 {return 0; }
};
class Circle:public Point{
  private:
	  double radius;
  public:
	  Circle(double a,double b,double r):Point(a,b)
	   {radius=r;}
	   double area()
	   {return PI*radius*radius;}
};
void display(Point *p){cout<<p->area()<<endl;}
void display(Point& a){cout<<a.area()<<endl;}

void main()
{
	Point a(1.5,6.7);
	Circle c(1.5,6.7,2.5);
	Point *p=&c;
	Point &rc=c;
	display(a);
	display(p);	
	display(rc);
}













// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
class A{
     public:
		 A(){}
		 virtual void func()
		 {cout<<"constructing A"<<endl; }
		 ~A(){}
		 virtual void fund()
		 {cout<<"destrutor A"<<endl;}
};
class B:public A{
   public:
	   B(){ func();}
	   void fun(){cout<<"come here and go...";func();}
	   ~B()
	   {fund();}
};
class C:public B{
   public:
	   C(){}
	   void func(){cout<<"class C"<<endl;}
	   ~C(){fund();}
	   void fund(){cout<<"destructor c"<<endl;}
};
void main()
{
	C c;
	c.fun();
}














// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
class shape{
     public:
		 virtual double area()=0;
};
class square:public shape{
   protected:
	   double H;
   public:
	   square(double i){H=i;}
	   double area()
		 {return H*H; }
};
class circle:public square{
   public:
	   circle(double r):square(r){}
	   double area()
		 {return H*H*3.14159; }
};
class triangle:public square{
   protected:
	   double W;
   public:
	   triangle(double h,double w):square(h){W=w;}
	   double area()
		 {return H*W*0.5; }
};
class rectangle:public triangle{
   public:
	   rectangle(double h,double w):triangle(h,w){}
	   double area()
		 {return H*W; }
};
double total(shape *s[],int n)
{
	double sum=0.0;
	for(int i=0;i<n;i++)
		sum+=s[i]->area();
	return sum;
}
void main()
{
	shape *s[5];
	s[0]=new square(4);
	s[1]=new triangle(3,6);
	s[2]=new rectangle(3,6);
	s[3]=new square(6);
	s[4]=new circle(10);
	for(int i=0;i<5;i++)
		cout<<"s["<<i<<"]="<<s[i]->area()<<endl;
	double sum=total(s,5);
	cout<<"the total area is:"<<sum<<endl;
}















// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
class A{
     public:
		 virtual void f()
		 {cout<<"call A"<<endl; }
};
class B{
   public:
	   virtual void f()
		 {cout<<"call B"<<endl; }
};
class C:public A,public B{
   public:
	  virtual void f()
		 {cout<<"call C"<<endl; }
};
void main()
{
	A *pa;
	B *pb;
	C *pc,c;
	pa=&c;pb=&c;pc=&c;
	pa->f();
	pb->f();
	pc->f();
}










// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
class base{
     public:
		 virtual void print()
		 {cout<<"In Base"<<endl; }
};
class derived:public base{
   public:
	   void print(){cout<<"In Derived"<<endl;}
};
void display(base *pb,void(base::*pf)())
{(pb->*pf)();}
void main()
{
	derived d;
	base *pb=&d;
	void(base::*pf)();
	pf=base::print;
	display(pb,pf);
}








// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
#include <string>
using namespace std;
class str{
  private:
	  char *st;
  public:
	  str(char *s);
	  str(str& s);
	  str& operator=(str& a);
	  str& operator=(char *s);
	  void print(){cout<<st<<endl;}
	  ~str(){delete st;}
};
str::str(char *s)
{
	st=new char[strlen(s)+1];
	strcpy(st,s);
}
str::str(str& a)
{
	st=new char[strlen(a.st)+1];
	strcpy(st,a.st);
}
str& str::operator=(str& a)
{
	if(this==&a) return *this;
	delete st;
	st=new char[strlen(a.st)+1];
	strcpy(st,a.st);
	return *this;
}
str& str::operator=(char* s)
{
	delete st;
	st=new char[strlen(s)+1];
	strcpy(st,s);
	return *this;
}
void main()
{
	str s1("We"),s2("They"),s3(s1);
	s1.print();s2.print();s3.print();
	//s2=s1=s3;
	s2.operator =((s1).operator =(s3));
	s3="Go home!";
	//s3=s3;
	s3.operator=(s3);
	s1.print();s2.print();s3.print();
}









// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream.h>
class test{
  private:
	  int i;
	  float f;
	  char ch;
  public:
	  test(int a=0,float b=0,char c='\0')
	  {i=a;f=b;ch=c;}
	  friend ostream &operator<<(ostream &,test);
	  friend istream &operator>>(istream &,test &);
};
ostream &operator<<(ostream & stream,test obj)
{
	stream<<obj.i<<",";
	stream<<obj.f<<",";
	stream<<obj.ch<<endl;
	return stream;
}
istream &operator>>(istream & t_stream,test& obj)
{
	t_stream>>obj.i;
	t_stream>>obj.f;
	t_stream>>obj.ch;
	return t_stream;
}
void main()
{
	test A(45,8.5,'W');
	operator<<(cout,A);//cout<<A;
	test B,C;
	cout<<"Input as i f ch:";
	operator>>(cin,B);operator>>(cin,C);//cin>>B>>C;
	operator<<(cout,B);operator<<(cout,C);//cout<<B<<C;
}














// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
class  number{
  	  int num;
  public:
	  number(int i)
	  {num=i;}
	  int operator++();
	  int operator++(int);
	  void print()
	  {cout<<"num="<<num<<endl;}	  
};
int number::operator++()
{
	num++;
	return num;
}
int number::operator++(int)
{
	int i=num;
	num++;
	return i;
}

void main()
{
	number n(10);
	int i=++n;//int i=n.operator++();
	cout<<"i="<<i<<endl;
	n.print();
	i=n++;   //i=n.operator++(0);
	cout<<"i="<<i<<endl;
	n.print();
}












// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
class  number{
  	  int num;
  public:
	  number(int i)
	  {num=i;}
	  friend int operator++(number&);
	  friend int operator++(number&,int);
	  void print()
	  {cout<<"num="<<num<<endl;}	  
};
int operator++(number& a)
{
	a.num++;
	return a.num;
}
int operator++(number& a,int)
{
	int i=a.num++;
	return i;
}

void main()
{
	number n(10);
	int i=++n;//int i=n.operator++();
	cout<<"i="<<i<<endl;
	n.print();
	i=n++;   //i=n.operator++(0);
	cout<<"i="<<i<<endl;
	n.print();
}







// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream.h>
class  complex{
  private:  	  
	double real,imag;
  public:
	  complex(double r=0,double i=0)
	  {real=r;imag=i;}
	  friend complex operator+(complex,complex);
	  void show()
	  {cout<<real<<"+"<<imag<<"i";}	  
};
complex operator+(complex a,complex b)
{
	double r=a.real+b.real;
	double i=a.imag+b.imag;
	return complex(r,i);
}

void main()
{
	complex x(5,3),y;
	y=x+7;
	y=7+y;
	y.show();
}










// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
#include <iomanip>
using namespace std;
class  iArray{
      int _size;
	  int *data;
  public:
	  iArray(int);
	  int &operator[](int);
	  int size() const {return _size;}
	  ~iArray(){delete []data;}
};
iArray::iArray(int n)
{
	if(n<1){
		cout<<"Error dimension description";
		exit(1);
	}
	_size=n;
	data=new int[_size];
}
int &iArray::operator [](int i){
	if(i<0||i>_size-1){
		cout<<"\nSubscript out of range";
		delete[] data;
		exit(1);
	}
	return data[i];
}


void main()
{
	iArray a(10);
	cout<<"数组元素个数="<<a.size()<<endl;
	for(int i=0;i<a.size();i++)
		a[i]=10*(i+1);
	for(i=0;i<a.size();i++)
		cout<<setw(5)<<a[i];
}










// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
const double PI=3.141592;
void main()
{
	int a=15;bool it=1,not=0;
	cout<<showpoint<<123.0<<" "<<noshowpoint<<123.0<<" ";
	cout<<showbase;
	cout<<a<<" "<<uppercase<<hex<<a<<" "<<nouppercase
		<<hex<<a<<" "<<noshowbase<<a<<dec<<a<<endl;
	cout<<uppercase<<scientific<<PI<<" "<<nouppercase<<PI
		<<" "<<fixed<<PI<<endl;
	cout<<cout.precision()<<" "<<PI<<" ";
	cout.precision(4);
	cout<<cout.precision()<<" "<<PI<<endl;
	cout.width(10);
	cout<<showpos<<right<<a<<" "<<noshowpos<<PI<<" ";
	cout<<it<<" "<<not<<" "
		<<boolalpha<<it<<" "<<" "<<not<<" "
		<<noboolalpha<<" "<<it<<" "<<not<<endl;
	cout.width(10);
	cout<<left<<PI<<" "<<123<<" "<<cout.width()<<" ";
	cout<<123<<" "<<cout.width()<<endl;
}











// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
using namespace std;
const double PI=3.141592;
void main()
{
	int a=15;
    cout.setf(ios_base::showpoint);
	cout<<123.0<<" ";
	cout.unsetf(ios_base::showpoint);
	cout<<123.0<<endl;
	cout.setf(ios_base::showbase);
	cout.setf(ios_base::hex,ios_base::basefield);
    cout<<a<<" "<<uppercase<<hex<<a<<" "<<nouppercase
		<<hex<<a<<" "<<noshowbase<<a<<dec<<a<<endl;
    float c=23.56f,d=-101.22F;
	cout.width(20);
	cout.setf(ios_base::scientific|ios_base::right|ios_base::showpos,ios_base::floatfield);
	cout<<c<<"\t"<<d<<endl;
	cout<<cout.flags()<<" "<<123.0<<" ";
	cout.flags(513);
	cout<<123.0<<endl;
	cout.setf(ios_base::scientific);
	cout<<123.0<<endl;
	cout.width(8);
	cout<<cout.fill('*')<<123<<endl;

}













// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream>
#include <fstream>
using namespace std;
void main()
{
	char ch[15],*p="abcdefg";
	ofstream myFile;
	myFile.open("myText.txt");
	myFile<<p;
	myFile<<"GoodBye!";
	myFile.close();
	ifstream getText("myText.txt");\
	for(int i=0;i<strlen(p)+8;i++)
		getText>>ch[i];
	ch[i]='\0';
	getText.close();
	cout<<ch;
}













// *  *   *  *    *  *   *  *   *  *   *  *  
#include <iostream.h>
#include <fstream.h>
struct list{
  double salary;
  char name[20];
  friend ostream &operator<<(ostream &os,list &ob);
  friend istream &operator>>(istream &is,list &ob);
};
istream &operator>>(istream &is,list &ob)
{
	is>>ob.name;
	is>>ob.salary;
	return is;
}
ostream &operator<<(ostream &os,list &ob)
{
	os<<ob.name<<' ';
	os<<ob.salary<<' ';
	return os;
}

void main()
{
	list worker1[2]={{1256,"Liming"},{3467,"ZhangHong"}},worker2[2];
	ofstream out("pay.txt",ios::binary);
	if(!out){
		cout<<"没有正确建立文件，结束程序运行！"<<endl;
		return;
	}
	for(int i=0;i<2;i++)
		out<<worker1[i];
	out.close();
	ifstream in("pay.txt",ios::binary);
	if(!in){
		cout<<"没有正确建立文件，结束程序运行！"<<endl;
		return;
	}
	for(i=0;i<2;i++)
	{
		in>>worker2[i];
		cout<<worker2[i]<<endl;
	}
	in.close();
}



















