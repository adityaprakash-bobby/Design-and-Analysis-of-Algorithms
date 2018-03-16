#include<bits/stdc++.h>

using namespace std;

void printbracket(int i, int j, int n,
                      int *bracket, char &name)
{
    if (i == j)
    {
        cout << name++;
        return;
    }
 
    cout << "(";
 
    printbracket(i, *((bracket+i*n)+j), n,
                     bracket, name);
 
    printbracket(*((bracket+i*n)+j) + 1, j,
                     n, bracket, name);
    cout << ")";
}
 
void mcm(int p[], int n)
{
    int m[n][n];
    int bracket[n][n];
    int i,L,j,k,q;

    for(i=1;i<n;i++)
        m[i][i] = 0;
 
    for(L=2;L<n;L++)
    {
        for(i=1;i<n-L+1;i++)
        {
            j = i+L-1;
            m[i][j] = INT_MAX;
            for(k=i;k<=j-1;k++)
            {
                q = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
                if(q < m[i][j])
                {
                    m[i][j] = q;
                    bracket[i][j] = k;
                }
            }
        }
    }
    char name = 'A';
 
    cout<<"Parenthesization = ";
    printbracket(1,n-1,n,(int *)bracket,name);
    cout<<"\nCost = "<<m[1][n-1]<<endl;
}
 
int main()
{
    int arr[] = {40, 20, 30, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    mcm(arr, n);
    return 0;
}