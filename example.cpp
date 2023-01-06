#include<iostream>
using namespace std;
int isGreater(int x, int y);
int isMinimum(int x, int y);

int main()

{

int x;
int y;
int result1;
int result2;

cout<<"Enter number 1: "<<endl;
cin>>x;
cout<<"Enter number 2: "<<endl;
cin>>y;

result1=isGreater(x,y);
result2=isMinimum(x,y);

cout<<"The greater number is: " << result1 <<endl;
cout <<"The minimum number is: "<<result2;

return 0;

}


int isGreater(int x, int y)
{

  
  if(x>y)
  {
     return x;
  }
  
  if(x<y)
  {
    return y;
 
  }
return 0;
 
}  

int isMinimum(int x, int y)
{

  if(x<y)
  {
    return x;
  }
  return y;

}