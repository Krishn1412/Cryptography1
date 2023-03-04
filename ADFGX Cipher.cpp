#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Write your code here
    string a="",b="",c="";
    cin>>a>>b>>c;
    vector<vector<char>>t(5,vector<char>(5,'x'));
    vector<char>d={'A','D','F','G','X'};
    int cnt=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            t[i][j]=b[cnt];
            cnt++;
        }
    }
    string p="";
    for(long unsigned int i=0;i<c.length();i++){
        for(int j=0;j<5;j++){
            for(int k=0;k<5;k++){
                if(t[j][k]==c[i]){
                    p.push_back(d[j]);
                    p.push_back(d[k]);
                }
            }
        }
    }
    cnt=0;
    int f = p.length(),g = a.length(),h=f/g;
    vector<vector<char>>m(h,vector<char>(g,'x'));
    for(int i=0;i<h;i++){
        for(int j=0;j<g;j++){
            m[i][j]=p[cnt];
            cnt++;
        }
    }
    vector<pair<int,int>>q;
    for(int i=0;i<g;i++){
        q.push_back({a[i]-'0',i});
    }
    sort(q.begin(),q.end());
    string ans="";
    for(int i=0;i<g;i++){
        int v = q[i].second;
        for(int j=0;j<h;j++){
            ans+=m[j][v];
        }
    }
    cout<<ans<<endl;
    return 0;
}
