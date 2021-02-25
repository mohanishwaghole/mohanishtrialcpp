#include<iostream>
#include<string>
using namespace std;

int main()
{
	string a;
	string b;
	int c;
	int d;
	int a1 ,a2;
    int sum;
    int sum1;
    int sum2;
	cout<<"Regular pragramming\n";
	cout<<"What is ur name\n";
	cin>>a;
	
	cout<<"What is your fathers name\n";
	cin>>b;
	
	cout<<"ur age\n";
	cin>>c;
	
	cout<<"ur fathers age\n";
	cin>>d;
	
	/*------------------------------*/
	
	cout<<"what is value of a1 ====";
	cin>>a1;
	cout<<"what is value of a2 =====";
	cin>>a2;
	
	sum = a1 + a2;
	sum1 = a1 - a2;
	sum2 = a1 * a2;
	
	cout<<"The additon is ------->"<<sum<<"\n";
	cout<<"The subtraction  is ------->"<<sum1<<"\n";
	cout<<"The multiplication is ------->"<<sum2<<"\n";

	cout<<"\n\n\n\n\n";
	
	cout<<"ur name is----->"<<a<<"  \n\n";
	cout<<"What is your fathers name------->"<<b<"  \n\n";
	cout<<"ur age------->"<<c<<" \n\n";
	cout<<"ur fathers age--------->"<<d<<"  \n\n";
return 0;
}
