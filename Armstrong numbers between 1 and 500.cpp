#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
int num, temp, rem=0, sum=0, i;
float cube;
num = 1;
temp = 0;
cout<<"---------------------------Armstrong Numbers between 1 and 500-----------------------------"<<endl;
for(i=1;i<=500;i++)
{
while(num!=0)
{
rem = num%10;
cube = pow(rem,3);
sum = sum + cube;
num = num/10;
} 
if(sum == temp)
cout<<temp<<endl;
rem = 0;
sum = 0;
cube = 0;
temp = i+1;
num = i+1;
}
return 0;
}
