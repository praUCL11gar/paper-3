#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

//Q2. Program for array rotation.
// time complexity:O(n*r)=O(n), here we shift array by one position and put element at first position -this is done r times.
//prasanna garole

void fn(int a[], int n)
{
    int temp=a[0]; //first array position

    for(int i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=temp;
}


int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;

    int a[n],i;

    cout<<"Enter array elements:\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Enter no.of rot'ns:";
    int r;
    cin>>r;
    r=r%n; //if r>n basecase


    for(i=0;i<r;i++)
    {
        fn(a,n);
    }


     cout<<"After rotation array is:\n";
     for(i=0;i<n;i++)
     {
         cout<<a[i]<<" ";
     }

    return 0;
}

