#include<iostream>
#include<cmath>

using namespace std;
bool isSymmetric(int number);


main()

{

int number;
bool symmetric;

cout <<"Enter three digit number"<<endl;
cin>> number;

symmetric = isSymmetric(number);

cout << symmetric;


}





bool isSymmetric(int number)

{

int buffer1;
int buffer2;
int buffer3;


  buffer1=number%10;
  number=number/10;

  buffer2=number%10;
  number=number/10;

  buffer3=number%10;

  if (buffer1==buffer3)
  {
    return true;
  }
  if(buffer1!=buffer3)
  {
    return false;
  }
  return 0;
}




