#include <bits/stdc++.h>
using namespace std;

struct Edge{
    int u,v,w;
};

bool cmp(Edge a, Edge b){
    return a.w < b.w;
}

int parent[105];

int findSet(int x){
    if(parent[x]==x) return x;
    return parent[x]=findSet(parent[x]);
}

void unionSet(int a,int b){
    a=findSet(a);
    b=findSet(b);
    parent[a]=b;
}

int main(){

    int V,E;
    cin>>V>>E;

    vector<Edge> e(E);

    for(int i=0;i<E;i++)
        cin>>e[i].u>>e[i].v>>e[i].w;

    sort(e.begin(),e.end(),cmp);

    for(int i=0;i<V;i++)
        parent[i]=i;

    int cost=0;

    for(int i=0;i<E;i++){

        int u=e[i].u;
        int v=e[i].v;
        int w=e[i].w;

        if(findSet(u)!=findSet(v)){

            cout<<u<<" "<<v<<" "<<w<<endl;

            cost+=w;
            unionSet(u,v);
        }
    }

    cout<<cost;
}



#include<bits/stdc++.h>
using namespace std;

int p[100];

int f(int x){
    return p[x]==x?x:p[x]=f(p[x]);
}

int main(){
    int n,e,u,v,w,c=0;
    cin>>n>>e;

    vector<vector<int>> a;

    while(e--){
        cin>>u>>v>>w;
        a.push_back({w,u,v});
    }

    sort(a.begin(),a.end());

    for(int i=0;i<n;i++) p[i]=i;

    for(auto i:a){
        if(f(i[1])!=f(i[2])){
            p[f(i[1])]=f(i[2]);
            cout<<i[1]<<" "<<i[2]<<" "<<i[0]<<endl;
            c+=i[0];
        }
    }

    cout<<c;
}