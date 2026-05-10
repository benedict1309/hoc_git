#include <bits/stdc++.h>
using namespace std;
main()
{
    freopen("DT.INP","r",stdin);
    freopen("DT.OUT","w",stdout);
    int t,n; cin >> t >> n;
    int a[n+1][n+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin >> a[i][j];
        }
    }
    if(t==1)
    {
        for(int i=1;i<=n;i++)
        {
            int dem = 0;
            for(int j=1;j<=n;j++)
            {
                if(a[i][j]==1) dem++;
            }
            cout << dem << " ";
        }
    }
    else{
        queue<int> q;
        cout << n << endl;
        for(int i=1;i<=n;i++)
        {
            int dem = 0;
            for(int j=1;j<=n;j++)
            {
                if(a[i][j]==1)
                {
                    dem++;
                    q.push(j);
                }
            }
           cout << dem << " ";
           while(q.empty()==0){
            cout << q.front() << " ";
            q.pop();
           }
           cout << endl;
        }
    }
}
