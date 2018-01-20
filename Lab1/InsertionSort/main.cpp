#include<bits/stdc++.h>

using namespace std;

void insertionsort(float a[],int size)
{
    int i,j;
    float temp;
    for(i=1;i<size;i++)
    {
        temp=a[i];
        j=i-1;
        while( a[j]>temp && j>=0 )
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}

int main(int argc, char *argv[])
{
    float x,in[40];
    int n,i=0;

    ifstream ifile;
    ifile.open(argv[1]);

    ofstream ofile;
    ofile.open(argv[2]);

    while(ifile >> x)
    {
        in[i]=x;
        i++;
    }
    ifile.close();
    n=i;
    
    insertionsort(in,n);
    
    for(i=0;i<n;i++)
    {
        ofile << in[i] << " ";
    }
    return 0;
}