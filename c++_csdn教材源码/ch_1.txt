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
