#include<bits/stdc++.h>

using namespace std;

void bubblesort(float a[],int n)
{
	int i,j;
	float temp;
	for(i=0;i<n;i++)
	for(j=0;j<n-i-1;j++)
	if(a[j]>a[j+1])
	{
		temp=a[j];
		a[j]=a[j+1];
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
    
    bubblesort(in,n);
    
    for(i=0;i<n;i++)
    {
    	ofile << in[i] << " ";
    }
    return 0;
}