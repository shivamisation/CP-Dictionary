#include<bits/stdc++.h>
using namespace std;
void selection(int *a,int n)
{
    int k;
    for(int i=0;i<n;i++)
    {
        int f=0;
        int mi = a[i];
        for(int j=i;j<n;j++)
        {
            if(a[j]<mi)
            {
                mi=a[j];
                k=j;
                f=1;
            }
        }
        if(f==1)
        {
            a[k]=a[i];
            a[i]=mi;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int *a;
    a = new int[n];
 	for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }   
    selection(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return  0; 
}
