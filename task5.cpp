#include <iostream>
using namespace std;


main()
{

  int hours;
  int minutes;
  int minutesafter;
  int hoursafter;


  cout<<"Please enter the hours"<<endl;
  cin>>hours;

  cout<<"Please enter the minutes"<<endl;
  cin>>minutes;

  
  if (minutes<45)
  {
    minutesafter=minutes+15;
    hoursafter=hours;
    cout<<"Time after 15 minutes will be "<<hoursafter<<":"<<minutesafter;    

  }

  if (minutes>=45)
  {
     minutesafter=minutes-45;
     hoursafter=hours+1;	     
   
    if(hours>=23)
    {
      hoursafter=0;
    }
    cout<<"Time after 15 minutes will be "<<hoursafter<<":"<<minutesafter;    


  }

  




}

