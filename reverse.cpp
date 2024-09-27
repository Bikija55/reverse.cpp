#include<iostream>
using namespace std:

int main()
{
int num,revnum=0,rem;

 cout>>"enter a number:";
 cin>>num;

while(num!=0)
{
    rem = num % 10;
revnum=revnum * 10+rem;
num /= 10;
}
cout<<"revnum:"<<revnum<<endl;

return 0;
}
