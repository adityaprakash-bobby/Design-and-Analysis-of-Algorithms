#include<bits/stdc++.h>

using namespace std;


int binsearch(int a[], int m, int n)
{
    int beg=0;
    int last=m,mid;int flag=0;
    mid=(beg+last)/2;
    while (beg<=last)
    {
        if(a[mid]==n)
            return mid;
        else if(n>a[mid])
            beg=mid+1;
        else
            last=mid-1;
        mid = (beg+last)/2;
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
        //cout<<x<<"\t";
        i++;
    }
    ifile.close();
    n=i;
    //cout << endl;
    while(ifile2 >> x)
    {
        //cout<<x<<"\t"<<binsearch(in,n,x)<<endl;
        ofile  << binsearch(in,n,x)  <<  endl;
    }

    ifile2.close();
    
    ofile.close();

    return 0;
}

