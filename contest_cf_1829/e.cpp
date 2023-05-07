#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
#include <string>
typedef int64_t ll;
#include <string>
#define loop0(i, n) for (ll i = 0; i < n; i++)
#define loop1(i, n) for (ll i = 1; i <= n; i++)

struct Node
{
    bool visited;
    int component_value;
    vector<int> adcacency;
    Node()
    {
        visited=false;
    }
};
class graph
{
    Node *G;
    int size;
    int n_c;

public:
    graph(int **a, int n, int m)
    {
        n_c=1;
        size=m*n;
        G = new Node[m * n];
        loop0(j, n)
        {
            loop0(l, m)
            {
                if (j > 0)
                {
                    if (a[j - 1][l] > 0 && a[j][l] > 0)
                    {
                        G[j * m + l].adcacency.push_back((j - 1) * m + l);
                    }
                }
                if (j < n - 1)
                {
                    if (a[j][l] > 0 && a[j + 1][l] > 0)
                    {
                        G[j * m + l].adcacency.push_back((j + 1) * m + l);
                    }
                }
                if (l > 0)
                {
                    if (a[j][l - 1] > 0 && a[j][l] > 0)
                    {
                        G[j * m + l].adcacency.push_back(j * m + l - 1);
                    }
                }
                if (l < m - 1)
                {
                    if (a[j][l + 1] > 0 && a[j][l] > 0)
                    {
                    G[j*m+l].adcacency.push_back(j*m+l+1);
                    }
                }
            }
        }

    }

    int do_bfs(){
        for (int i=0;i<size;i++){
            if (G[i].visited==false){
                visit(i,n_c);
                n_c++;
            }
            
        }
    }
    int visit(int i,int c){
        G[i].visited=true;
        G[i].component_value=c;
        for (int j=0;j<G[i].adcacency.size();j++){
            if (G[G[i].adcacency[j]].visited==false){
                 visit(G[i].adcacency[j],c);
            }
        }
    }
    int calculate(int**a,int m){
        int score[n_c];
        for (int i=0;i<n_c;i++){
            score[i]=0;
        }
        loop0(j,size){
            score[G[j].component_value]+= a[j/m][j%m];
        }
        int mmax=0;
        loop0(j,n_c){
            mmax=max(mmax,score[j]);
        }
        return mmax;
    }


};
void precomp()
{
}

void solve()
{
    int n, m;
    cin >> n >> m;
    int **a;
    a = new int *[n];
    loop0(j, n)
    {
        a[j] = new int[m];
        loop0(l, m)
        {
            cin >> a[j][l];
        }
    }
    graph g(a, n, m);
    g.do_bfs();
    cout << g.calculate(a,m)<<"\n";
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll T;

    cin >> T;

    precomp();

    loop1(I, T)
    {

        solve();
        // cout<<"Case #"<<I<<": "<<ans<<"\n";
    }
}