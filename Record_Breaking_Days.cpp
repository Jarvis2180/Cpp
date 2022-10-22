// WAP To Calculate Record-Breaking Days As Per User's Condition.
// Problem Statement:
//             Isyana is given the number of visitors at her local theme park on N consecutive days. 
// The number of visitors on the i-th day is V. A day is record breaking if it satisfies both 
// of the following conditions:

//  1. The number of visitors on the day is strictly larger than the number of 
//     visitors on each of the previous days.
//  2. Either it is the last day, or the number of visitors on the day is strictly 
//     larger than the number of visitors on the following day.

// Note that the very first day could be a record breaking day!


#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter The Numbers of Visitors:-";
    cin>>n;

    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int Max=A[0];
    int i=1;
    int days=1;     //Note that the very first day could be a record breaking day!
    while(i<n)
    {
        if(i!=n)
        {
            if(Max<A[i] && A[i+1]<A[i])
            {
                days++;
            }
        }
        else {
        if(Max<A[i])
            {
            days++;
            }}
        Max=max(Max,A[i]);
        i++;
    }
  cout<<"Total Number Of Record Breaking Days:-"<<days;
  return 0;
}