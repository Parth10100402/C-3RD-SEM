#include <iostream>
using namespace std;

void merge(int a[], int l, int m, int h)
{
    int t[100], i=l, j=m+1, k=0;

    while(i<=m && j<=h)
        t[k++]=(a[i]<a[j])?a[i++]:a[j++];

    while(i<=m) t[k++]=a[i++];
    while(j<=h) t[k++]=a[j++];

    for(i=l,k=0;i<=h;i++,k++)
        a[i]=t[k];
}

void mergeSort(int a[], int l, int h)
{
    if(l<h)
    {
        int m=(l+h)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,h);
        merge(a,l,m,h);
    }
}

int main()
{
    int n,a[100];
    cin>>n;

    for(int i=0;i<n;i++) cin>>a[i];

    mergeSort(a,0,n-1);

    for(int i=0;i<n;i++) cout<<a[i]<<" ";

    return 0;
}