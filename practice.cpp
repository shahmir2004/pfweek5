#include <iostream>
using namespace std;
int add(int x, int y);
float divide(float x, float y);

main()
{

float x;
float y;
int sum;
float division;

cout<<"Enter number 1"<<endl;
cin>>x;
cout<<"Enter number 2"<<endl;
cin>>y;
sum=add(x,y);

division=divide(x,y);

cout<<"sum is: "<<sum <<" and division is: " << division;

}


int add(int x, int y)
{
  int sum = x+y;
  return sum;
}

float divide(float x, float y)

{

 float division=x/y;
 return division; 

}