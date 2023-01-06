#include<iostream>
using namespace std;
string one(int char1);
string two(int char2);

main()
{

	int number;
	int buffer1=0;
	int buffer2=0;
	string result1=" ";
	string result2=" ";
	cout<<"Enter digit: "<<endl;
	cin >>number;

	buffer2=number%10;
	number=number/10;

	buffer1=number%10;
 
     if(buffer2==0)
     {
		result1=one(buffer1);
		cout<<result1;
	}

    
     


      if(buffer1!=0)
     {
     		

		result1=one(buffer1);
		result2=two(buffer2);
		cout<<result1<<" "<<result2;
	}

     if(buffer1==0)
	{
		result2=two(buffer2);
		cout<<result2;

	}

     

}




string two(int char2)

{
  if(char2==1)
  {
    return "one";

  }

  if(char2==2)
  {
    return "two";
  }

  if(char2==3)
  {
    return "three";
  }
  if(char2==4)
  {
    return "four";
  }
  if(char2==5)
  {
    return "five";
  }
  if(char2==6)
  {
    return "six";
  }

  if(char2==7)
  {
    return "seven";
  }
  if(char2==8)
  {
    return "eight";
  }
  if(char2==9)
  {
    return "nine";
  }

  if(char2==0)
  {
    return 0;
  }
  return 0;
}
  
string one(int char1)

{
  
  if(char1==2)
  {
    return "twenty";
  }
  if(char1==3)
  {
    return "thirty";
  }
   if(char1==4)
  {
    return "forty";
  }
   if(char1==5)
  {
    return "fifty";
  }
 if(char1==6)
  {
    return "sixty";
  }
 
  if(char1==7)
  {
    return "seventy";
  }
   if(char1==8)
  {
    return "eighty";
  }
   if(char1==9)
  {
    return "ninety";
  }
 
  return 0;
  

}