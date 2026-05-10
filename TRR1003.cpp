#include <bits/stdc++.h>
using namespace std;
main()
{
    freopen("DT.INP","r",stdin);
    freopen("DT.OUT","w",stdout);
    int t; cin >> t;
    int n; cin >> n;
    int deg[101] = {0};
    vector<pair<int,int>> v;
    vector<vector<int>> a(n+1,vector<int>(n+1,0));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin >> a[i][j];
            if(a[i][j]==1)
            {
                deg[i]++;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(a[i][j]==1)
            {
                v.push_back({i,j});
            }
        }
    }
    int m = v.size();
    if(t==1)
    {
        for(int i=1;i<=n;i++)
        {
            cout << deg[i] << " ";
        }
    }
    else if(t==2)
    {
        int m = v.size();
        cout << n << " " << m << endl;
        vector<vector<int>> c(n+1,vector<int>(m,0));
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==v[j].first || i==v[j].second) c[i][j] = 1;
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    }
}
