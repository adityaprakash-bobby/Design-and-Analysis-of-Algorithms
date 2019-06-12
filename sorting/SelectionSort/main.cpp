#include<bits/stdc++.h>

using namespace std;

void selectionsort(float a[],int n)
{
	int i,j;
	float temp;
	float small;
	small=a[0];
	for(i=0;i<n;i++)
	for(j=i;j<n;j++)
	{
		small=a[i];
		if(small>a[j])
		{
			a[i]=a[j];
			a[j]=small;
		}
	}
}

/*void display(float a[],int n)
{

	int i;
	cout<<"\nThe array : ";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";

}*/

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
    //display(in,n);
    //cout<<endl;
    selectionsort(in,n);
    //display(in,n);
    //cout<<endl;
    
    for(i=0;i<n;i++)
    {
    	ofile << in[i] << " ";
    }
    return 0;
}