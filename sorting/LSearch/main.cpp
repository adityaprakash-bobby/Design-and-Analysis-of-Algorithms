#include<bits/stdc++.h>

using namespace std;

int lsearch(int a[],int size, int temp)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(a[i]==temp)
			return i;
	}
	return -1;
}

int main(int argc, char *argv[])
{
	int x,in[40],n,i=0;

    ifstream ifile;
    ifile.open(argv[1]);

    ifstream ifile2;
    ifile2.open(argv[2]);

    ofstream ofile;
    ofile.open(argv[3]);

    while(ifile >> x)
    {
        in[i]=x;
        i++;
    }
    ifile.close();
    n=i;

    while(ifile2 >> x)
    {
        ofile  << lsearch(in,n,x)  <<  endl;
    }

    ifile2.close();
    ofile.close();

    return 0;
}