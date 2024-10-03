#include<iostream> 
using namespace std;
int main()
{
	int number,remainder,revNumber=0;
	cout<<"Enter an Integer"<<endl;
	cin>>number;
	
	while(number>0)
	{
		remainder=number%10;
		number=number/10;
		revNumber=(revNumber*10)+remainder;
	}
	cout<<"reverse number is"<<revNumber;
	return 0;
}