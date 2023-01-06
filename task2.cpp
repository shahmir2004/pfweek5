#include<iostream>
#include<cmath>
using namespace std;


float posquadratic(int a, int b, int c);
float negquadratic(int a, int b, int c);



main()
{

int a;
int b;
int c;
float posresult;
float negresult;

cout <<"Enter a: "<<endl;
cin>>a;

cout <<"Enter b: "<<endl;00
cin>>b;

cout <<"Enter c: "<<endl;
cin>>c;

posresult=posquadratic(a, b, c);
negresult=negquadratic(a,b,c);


cout<<posresult <<endl;
cout<<negresult;


}



float posquadratic(int a, int b, int c)
{


float squareroot;
float buffer1;
float buffer2;
float result1;
float result2;


float power1=pow(b, 2);

buffer1 = 4*a*c;
buffer2 = power1-buffer1;

squareroot = sqrt(buffer2);

result1 = -b+squareroot;
result2 = result1/(2*a);

return result2;

}



float negquadratic(int a, int b, int c)
{


float squareroot;
float buffer1;
float buffer2;
float result1;
float result2;


float power1=pow(b, 2);

buffer1 = 4*a*c;
buffer2 = power1-buffer1;

squareroot = sqrt(buffer2);

result1 = -b-squareroot;
result2 = result1/(2*a);0

return result2;

}




