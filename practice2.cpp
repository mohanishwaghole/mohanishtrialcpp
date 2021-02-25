#include<iostream>
#include<string>
using namespace std;

int main ()
{
	float f1 = 35e3;
    double d1 = 12E4;
    bool a1 = true;
    bool a2 = false;
    char a = 65, b = 66, c = 67;
    string z1 = "mohanish";
    int z2 = 500;
    int z3 = 300;
    int sum , sum1 ,sum2 ,sum3;
    int x = 150;
        x >>= 5;
    int y = 10 , y1 = 20 , y2 = 30;
    string m1 = "mohanish1" ;
	string m2 = "waghole";
	string sum11= m1 + m2 ;
    cout << f1 <<"\n";
    cout << d1<<"\n";
    cout<<a1<<"\n";
    cout<<a2<<"\n";
    cout<<a<<"\n";
    cout<<b<<"\n";
    cout<<c<<"\n";
    cout<<z1<<"\n";
    sum = z2 + z3;
    sum1 = z2 - z3;
    sum2 = z2 * z3;
    sum3 = z2 % z3;
    cout<<sum<<"\n";
    cout<<sum1<<"\n";
    cout<<sum2<<"\n";
    cout<<sum3<<"\n";
    cout<<x<<"\n";
    cout<<(y1>y)<<"\n";
    cout<<(y1!=y)<<"\n";
    cout<<(y1>y&&y2>y1)<<"\n";
    cout<<!(y1>y&&y2>y1)<<"\n";
    cout<<sum11 <<"\n";
    return 0;
}
