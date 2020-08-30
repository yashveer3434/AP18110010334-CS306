#include<iostream>

using namespace std;
int main()
{int state=0,i=0,j=1;
char current, input[20],const1,const2;
cout<<"Enter The String:";
cin>>input;
const1=input[0];
while(input[j]==const1)
{j++;}
const2=input[j];
while((current=input[i++])!='\0')
{if(state==0)
	{if (current==const1)
	state=1;
	else if(current==const2)
	state=3;
	else
	{cout<<"\nInavlid token";
	exit(0);}
	}
else if(state==1)
	{if (current==const1)
	state=0;
	else if(current==const2)
	state=2;
	else
	{
	cout<<"\nInavlid token";
	exit(0);}
	}
else if(state==2)
	{if (current==const1)
	state=3;
	else if(current==const2)
	state=1;
	else
	{
	cout<<"\nInavlid token";
	exit(0);}
	}
else if(state==3)
	{if (current==const1)
	state=2;
	else if(current==const2)
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


