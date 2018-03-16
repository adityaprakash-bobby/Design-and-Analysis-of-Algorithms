#include<bits/stdc++.h>

using namespace std;

class DisjointUnionSets
{
    int *rank, *parent;
    int n;
 
    public:
        DisjointUnionSets(int n)
        {
            rank = new int[n];
            parent = new int[n];
            this->n = n;
            makeSet();
        }
 
        void makeSet()
        {
            for (int i=0; i<n; i++)
            {
                parent[i] = i;
            }
        }
     
        int find(int x)
        {
            if (parent[x]!=x)
            {
                parent[x] = find(parent[x]);     
            }
    
            return parent[x];
        }
     
        void union_(int x, int y)
        {
            int xRoot = find(x), yRoot = find(y);
     
            if (xRoot == yRoot)
                return;
            if (rank[xRoot] < rank[yRoot])     
                parent[xRoot] = yRoot;
            else if (rank[yRoot] < rank[xRoot])
                parent[yRoot] = xRoot;
            else
            {
                parent[yRoot] = xRoot;
                rank[xRoot] = rank[xRoot] + 1;
            }
        }
};
 
int main()
{
    int n = 5;

    DisjointUnionSets *dus = new DisjointUnionSets(n);
 
    dus->union_(0, 2);

    dus->union_(4, 2);

    dus->union_(3, 1);

    if (dus->find(4) == dus->find(0))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    if (dus->find(1) == dus->find(0))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}
