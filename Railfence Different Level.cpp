#include <bits/stdc++.h>

using namespace std;


string decrypt2(string p,int n){
	vector<string>v;
	string temp="";
	for(int i=0;i<p.length();i++){
		if(p[i]==' '){
			v.push_back(temp);
			temp="";
		}
		else{
			temp+=p[i];
		}
	}
	v.push_back(temp);
	// for(auto it:v)cout<<it<<endl;
	int l=v.size();
    vector<vector<string>>t(n,vector<string>(l,"."));
    int f=0,r=0,c=0;
    for(int i=0;i<l;i++){
    	if(r==0)f=1;
    	if(r==n-1)f=0;
    	t[r][c]="*";
    	c++;
    	if(f==0)r--;
    	else r++;
    }
    int cnt=0;
    for(int i=0;i<n;i++){
    	for(int j=0;j<l;j++){
    		if(t[i][j]=="*"){
    			if(cnt<l)t[i][j]=v[cnt++];
    		}
    	}
    }
    // for(int i=0;i<n;i++){
    // 	for(int j=0;j<l;j++){
    // 		cout<<t[i][j]<<" ";
    // 	}
    // 	cout<<endl;
    // }
    string ans="";
    f=0,r=0,c=0;
    for(int i=0;i<l;i++){
    	if(r==0)f=1;
    	if(r==n-1)f=0;
    	if(t[r][c]!="*"&&t[r][c]!="."){
    		if(ans=="")ans+=t[r][c++];
    		else ans=ans+" "+t[r][c++];
    	}
    	if(f==0)r--;
    	else r++;
    }
    return ans;
}

string decrypt1(string p,int m){
	int l=p.length();
    vector<vector<char>>t(m,vector<char>(l,'.'));
    int f=0,r=0,c=0;
    for(int i=0;i<l;i++){
    	if(r==0)f=1;
    	if(r==m-1)f=0;
    	t[r][c]='*';
    	c++;
    	if(f==0)r--;
    	else r++;
    }
    int cnt=0;
    for(int i=0;i<m;i++){
    	for(int j=0;j<l;j++){
    		if(t[i][j]=='*'){
    			if(cnt<l)t[i][j]=p[cnt++];
    		}
    	}
    }
    string ans="";
    f=0,r=0,c=0;
    for(int i=0;i<l;i++){
    	if(r==0)f=1;
    	if(r==m-1)f=0;
    	if(t[r][c]!='*'&&t[r][c]!='.'){
    		ans.push_back(t[r][c++]);
    	}
    	if(f==0)r--;
    	else r++;
    }
    return ans;
}
int main()
{
    // Write your code here
    int N,n,M,m;
    string s="",p="";
    cin>>N>>n>>M>>m;
    cin>>s>>p;
    for(int i=0;i<M;i++){
    	p=decrypt1(p,m);
    }
    string x=p;
    vector<int>vi;
    int len=s.length();
    int i=0,j=0,l=p.length();
    while(j<l){
    	if(j-i+1==len){
    		if(p.substr(i,j-i+1)==s){
    			vi.push_back(i);
    		}
    		i++;
    	}
    	j++;
    }
    int cnt=0;
    for(i=0;i<vi.size();i++){
    	int f = vi[i]-cnt;
    	x.replace(f,len," ");
    	cnt+=len-1;
    }
    for(int i=0;i<N;i++){
    	x=decrypt2(x,n);
    }
    cout<<x<<endl;
    return 0;
}
