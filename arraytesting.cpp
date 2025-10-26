#include <iostream>
using namespace std;
int main()
{
    int i;
    int a[10];
    cout<<"Enter 10 integers: ";
    for (i=0; i<10; i++)
    {
        cin>>a[i];
    }
    cout<<"Modified array: ";

    for (i=0; i<10; i++)
    {
        if (a[i]<0)
        {
            a[i]=-1;
        }
        else
        {
            if (a[i]%2==0)
            {
                a[i]=0;
            }
            else
            {
                a[i]=1;
            }
        }

        cout<<a[i]<<" ";
    }
}
