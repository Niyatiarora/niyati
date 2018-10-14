#include<iostream>
using namespace std;
int main()
{
int a[20],n,i,j,e,flag=0,temp;
int mid,min,max;
cout<<"Size of array ";
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"Entered Array is \n";
for(i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
cout<<endl;
for(i=0;i<n;i++)
{
    for(j=0;j<n-1;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
cout<<"\nSorted array \n";
for(i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
cout<<endl;
cout<<"\nElement to search ";
cin>>e;
min=0;
max=n-1;
mid=(min+max)/2;
if(min<max)
{
    for(i=0;i<n;i++)
    {
        if(a[mid]==e)
        {
            cout<<"Position of "<<e<<" is "<<mid+1;
            flag=1;
            break;
        }
        else if(a[mid]>e)
        {
            max=mid-1;
        }
        else if(a[mid]<e)
        {
            min=mid+1;
        }
        mid=(min+max)/2;
    }
}
if(flag==0)
    cout<<"Element not found ";
return 0;
}
