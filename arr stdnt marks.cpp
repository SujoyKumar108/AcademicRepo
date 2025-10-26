#include <iostream>
using namespace std;
int main()
{

    double marks[40],sum=0,avg, count=0;

    cout<<"Input mid-term marks: (valid marks range:0 - 100) : ";

    for (int i=0; i<40; i++)
    {
        cin>>marks[i];

        if(marks[i]<50)
        {
            count+=1;
        }

        sum+=marks[i];
    }

    avg=(sum/40);

    cout<<endl;

    if (avg>=80)
    {
        cout<<"Excellent Performance.";
    }
    else if (avg>=60 && avg<=79)
    {
        cout<<"Moderate Performance.";
    }
    else if (avg<60)
    {
        cout<<"Below Average Performance.";
    }

    cout<<endl<<"The Total Number of Students who scored below 50: "<<count;

}
