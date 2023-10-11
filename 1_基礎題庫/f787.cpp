#include <bits/stdc++.h>
using namespace std;

struct player{
	string name;
	int hp;
	int loss;
	vector<string> item;
	int next;
};

int main(){
    

    int N,S;
    player p[10010];
	cin>>N>>S;
	for(int i=1;i<=N;i++){
		cin>>p[i].name>>p[i].hp>>p[i].loss;
		for(int j=0;j<p[i].hp;j++){
			string s;
			cin>>s;
			p[i].item.push_back(s);			
		}
		cin>>p[i].next;		
	} 
	bool hit[10010]={0};
	int ptr = S;
	while(1){
		if(hit[ptr])
		   break;
		hit[ptr] = true;
		p[ptr].hp -= p[ptr].loss;
		if(p[ptr].hp <= 0){
		   cout<<p[ptr].name<<" dead."<<'\n';		   		 		
	    }else{
	    	cout<<p[ptr].name<<" "<<p[ptr].hp<<" ";
	    	for(int i=0;i<p[ptr].hp;i++) 
	    	   cout<<p[ptr].item[i]<<" ";
	    	cout<<'\n';	    	
		}
		ptr = p[ptr].next; 
	}
    return 0;
}