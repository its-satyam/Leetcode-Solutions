class Solution {
typedef long long ll;
#define vi(x) vector<x>
public:
    class dsu{
    public:
        vi(ll)par, size;
        dsu(ll n){
            par.assign(n, 0), size.assign(n, 1);
            iota(begin(par), end(par), 0);
        }
        ll find(ll n){
            if(par[n]==n){
                return n;
            }
            return (par[n]=find(par[n]));
        }
        void merge(ll a, ll b){
            a=find(a), b=find(b);
            if(a==b){
                return;
            }
            if(size[a]<size[b]){
                a+=b, b=a-b, a-=b;
            }
            par[b]=a;
            size[a]+=size[b];
        }
    };
    int maxNumEdgesToRemove(int n, vector<vector<int>>&e) {
        dsu alice(n), bob(n);
        ll ans=0;
        for(auto&edge:e){
            ll type=edge[0], u=--edge[1], v=--edge[2];
            if(type==3 && alice.find(u)!=alice.find(v)){
                    ++ans, alice.merge(u, v), bob.merge(u, v);
            }
        }
        for(const auto&edge:e){
            ll type=edge[0], u=edge[1], v=edge[2];
            if(type==1 && alice.find(u)!=alice.find(v)){
                ++ans, alice.merge(u, v);
            }
            if(type==2 && bob.find(u)!=bob.find(v)){
                ++ans, bob.merge(u, v);
            }
        }
        ans=e.size()-ans;
        ll aCnt=0, bCnt=0;
        for(ll i=0;i<n;++i){
            if(alice.find(i)==i){
                ++aCnt;
            }
            if(bob.find(i)==i){
                ++bCnt;
            }
        }
        if(aCnt!=1 || bCnt!=1){
            ans=-1;
        }
        return  ans;
    }
};