#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    int a,b;
    string s="",p="";
    cin>>s;
    cin>>a>>b;
    cin>>p;
    int cnt=0;
    // cout<<a<<" "<<b<<endl;
    vector<vector<char>>t(3,vector<char>(10,'.'));
    for(int i=0;i<10;i++){
        if(i==a || i==b)continue;
        t[0][i]=s[cnt++];
    }
    for(int j=1;j<3;j++){
        for(int i=0;i<10;i++){
            if(cnt<s.length())t[j][i]=s[cnt++];
        }
    }
    string ans="";
    for(int i=0;i<p.length();i++){
        if(p[i]-'0'==a){
            int k = p[i+1]-'0';
            char c = t[1][k];
            ans.push_back(c);
            i++;
        }
        else if(p[i]-'0'==b){
            int k = p[i+1]-'0';
            char c = t[2][k];
            ans.push_back(c);
            i++;
        }
        else{
            int k = p[i]-'0';
            char c = t[0][k];
            ans.push_back(c);
        }
    }
    cout<<ans<<endl;
    return 0;
}