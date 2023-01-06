#include<iostream>
using namespace std;

string isevenishoddish(int number);

main()
{

int number;
string result;

cout << "Please enter a five digit number"<<endl;
cin >> number;

result=isevenishoddish(number);

cout<<"The number is: " <<result;

}

string isevenishoddish(int number)

{

  int buffer1;
  int buffer2;
  int buffer3;
  int buffer4;
  int buffer5;
  int final;
  int test;

  buffer1=number%10;
  number=number/10;

  buffer2=number%10;
  number=number/10;
 
  buffer3=number%10;
  number=number/10;
 
  buffer4=number%10;
  number=number/10;

  buffer5=number%10;
  number=number/10;

  final=buffer1+buffer2+buffer3+buffer4+buffer5;
  
  test=final%2;

  if( test == 0)

  {
    return "evenish";
  }
   
  if(test!=0)
  {
    return "oddish";
  }

  return "0";

  
  
}

