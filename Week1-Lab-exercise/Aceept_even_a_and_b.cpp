#include<iostream>

using namespace std;
int main()
{int state=0,i=0;
char current, input[20];
cout<<"Enter The String:";
cin>>input;
while((current=input[i++])!='\0')
{if(state==0)
	{if (current=='a')
	state=1;
	else if(current=='b')
	state=3;
	else
	{cout<<"\nInavlid token";
	exit(0);}
	}
else if(state==1)
	{if (current=='a')
	state=0;
	else if(current=='b')
	state=2;
	else
	{
	cout<<"\nInavlid token";
	exit(0);}
	}
else if(state==2)
	{if (current=='a')
	state=3;
	else if(current=='b')
	state=1;
	else
	{
	cout<<"\nInavlid token";
	exit(0);}
	}
else if(state==3)
	{if (current=='a')
	state=2;
	else if(current=='b')
	state=0;
	else
	{
	cout<<"\nInavlid token";
	exit(0);}
	}	
}
if(state==0)
cout<<"\nAccepted";
else
cout<<"\nNot Accepted";
return 0;
}


