#include <iostream>
#include <cmath>
using namespace std;

float calculateHeight(float distance, float degrees);

main()
{

float base;
float degrees;
float result;

cout<<"Enter distance from base: "<<endl;
cin>>base;

cout<<"Enter angle of elevation: "<<endl;
cin>>degrees;

result= calculateHeight(base, degrees);
cout<<result;



}

float calculateHeight(float distance, float degrees)

{

  float radian;
  float radians;
  float angle;
  float height;
 
  radian = 57.2985;
  radians = degrees/radian;
  angle = tan(radians);
  height = angle*distance;
  return height;
}
