#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Write your code here
    int n;
    string s="";
    cin>>n>>s;
    int p=s.length();
    int h=p/n;
    vector<vector<char>>t(h,vector<char>(n,'Z'));
    int i=0,j=0,cnt=0;
    while(cnt<p){
        t[i][j]=s[cnt];
        cnt++;
        if(i==h-1){
            i=0;
            int y=1;
            while(t[i][y]!='Z')y++;
            j=y;
        }
        else{
            i++;
            j=(j+2)%n;
        } 
    }
    string ans="";
    // for(int i=0;i<h;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<t[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    for(int i=0;i<h;i++){
        for(int j=0;j<n;j++){
            ans+=t[i][j];
        }
    }
    cout<<ans<<endl;
    return 0;
}