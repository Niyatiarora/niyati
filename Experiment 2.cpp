#include<iostream>
using namespace std;
int main()
{
int a[20],n,i,e,flag=0;
cout<<"Size of array  ";
cin>>n;
for(i=0;i<n;i++)
{
    cin>>a[i];
}
for(i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}

cout<<endl;
cout<<"\nEnter the element to search  ";
cin>>e;
for(i=0;i<n;i++)
{
    if(a[i]==e)
    {
        cout<<"\nPosition of "<<e<<" is "<<i+1;
        flag=1;
        break;
    }
}
if(flag==0)
    cout<<"\nElement not found\n";
return 0;
}
