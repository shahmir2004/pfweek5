#include <iostream>
using namespace std;

main()

{
    int vol;
    int flow1;
    int flow2;
    float hoursabsent;
    float totalflow;
    float percentfull;
    float pipe1percent;
    float pipe2percent;
    float fullvol;
    float overflow;


    cout<<"Enter volume of the pool: "<<endl;
    cin>>vol;

    cout<<"Enter flow rate of first pipe: "<<endl;
    cin>>flow1;
  
    cout<<"Enter flow rate of second pipe: "<<endl;
    cin>>flow2;

    cout<<"Enter the hours that the worker was absent: ";
    cin>> hoursabsent;

    fullvol=(flow1+flow2)*hoursabsent;

    if(fullvol<=vol)
    {
        
    
        totalflow=(flow1+flow2)*hoursabsent;
        percentfull=(totalflow/vol)*100;
    
        pipe1percent=((flow1*hoursabsent)/fullvol)*100;
        pipe2percent=((flow2*hoursabsent)/fullvol)*100;
        cout<<"The pool is: "<<percentfull<<"percent full, pipe 1: "<<pipe1percent<<", pipe 2: "<<pipe2percent;

    }
    
    if(fullvol>vol)
    {
         totalflow=(flow1+flow2)*hoursabsent;
         overflow=totalflow-vol;

        cout<<"for "<<hoursabsent<<" hours the pool has overflowed with "<<overflow<<" litres.";

    }

}


