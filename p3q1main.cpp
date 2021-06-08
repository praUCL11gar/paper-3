#include <iostream>
using namespace std;

//Q1. Union and Intersection of two sorted arrays.
//here we take 2 arrays with distinct elements each & create 2 fns for union ,intersection each
//prasanna garole

void ufn(int a1[],int a2[],int n1,int n2)
{
    int i = 0, j = 0;

    while (i<n1 && j<n2)
    {
        if (a1[i]<a2[j])
        {
            cout <<a1[i]<<" ";
            i++;
        }
        else if (a2[j]<a1[i])
        {
            cout<<a2[j]<<" ";
            j++;
        }
         else
        {
            cout<<a2[j]<<" ";
            j++;
            i++;
        }
    }

    while(i<n1)
    {
        cout<<a1[i]<<" ";
        i++;
    }


    while(j<n2)
    {
        cout <<a2[j]<<" ";
        j++;
    }

}


void ifn(int a1[],int a2[],int n1,int n2)
{
    int i=0,j=0;

        while (i<n1 && j<n2)
        {
            if (a1[i]<a2[j])
            {
                i++;
            }
            else if (a2[j]<a1[i])
            {
                j++;
            }
            else
            {
                cout << a2[j] <<" ";
                i++;
                j++;
            }
        }
}


int main()
{

    int n1,n2;
    cout<<"Enter array1 size:";
    cin>>n1;

    int a1[n1]={0};

    cout<<"Enter array1 elements:\n";
    for(int i=0;i<n1;i++)
    {
        cin>>a1[i];
    }

    cout<<"Enter array2 size:";
    cin>>n2;

    int a2[n2]={0};


    cout<<"Enter array2 elements:\n";
    for(int i=0;i<n2;i++)
    {
        cin>>a2[i];
    }

    cout<<"\nUnion:";
    ufn(a1,a2,n1,n2);
    cout<<endl<<"\nIntersection:";
    ifn(a1,a2,n1,n2);


    return 0;
}
