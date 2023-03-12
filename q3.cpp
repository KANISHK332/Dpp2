    /* ॐ नमः शिवाय */
    //By-> dark_knight_48
    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define pb push_back
    #define pf push_front
    #define l "\n"
    #define all(v) v.begin(),v.end()
    #define rall(v) v.rbegin(),v.rend()
    #define fn(i,a,b) for (int i = a; i < b; i++)
    #define fd(i,b,a) for(int i=b;i>=a;i--)
    #define yes cout<<"Yes"<<l
    #define no  cout<<"No"<<l
    #define fast ios_base::sync_with_stdio(0);cin.tie(0)
    vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
    const ll mod= 1e9+7;
    const ll N= 1<<18;
    // ll a[mod]={0};
    ll setbit(ll m){
        ll cnt=0;
        while(m>0){
            m=(m&(m-1)); cnt++;
        }

     return cnt;
     }
     ll smofnatural(ll n){
        return ((n%mod*(n+1)%mod)%mod)/2;
     }
     bool palin(string p){
             string k= p;
             reverse(p.begin(),p.end());
             if(k==p){
                 return true;
             }
             return false;
      }
       ll comp(pair<ll,ll> a,pair<ll,ll> b){
           
            return ((a.second)>(b.second));
    }

        ll bpow(ll x,ll n,ll mod1){
            if(n==0)
                return 1;
            ll temp= bpow(x,n/2,mod1);
            temp%=mod1;
            temp=((temp%mod1)*(temp%mod1))%mod1;
            if(n%2==0)
                return temp%mod1;
            else
                 return ((temp%mod1)*(x%mod1))%mod1;
          }
      
      ll prime(ll n){
        for(int i=n/2;i>=2;i--){
            if(n%i==0){
                return i;
            }
        }
      }
 
  ll calc(string s){
    vector<ll> v;
    ll x=0;
      fn(i,0,s.size()){
        if(s[i]=='L') x+=i;
        else{ x+=(s.size()-1-i);}  
      }
      return x;
  }

  vector<ll> lol(vector<ll> v){
      ll n= v.size();
      map<ll,ll> mp;
      fn(i,0,n) mp[v[i]]++;
      fn(i,0,n) v[i]= mp[v[i]];

      return v;
  }

  ll kadane(vector<ll> v,ll n){
    ll res=v[0];
    ll med= v[0];

    fn(i,1,n){
        med= max(med+v[i],v[i]);
        res= max(res,med);
    }

    return res;
  }
   
   
vector<ll> help(vector<ll> v1,ll n){
    vector<ll> vn;
    for(int i=0;i<n;i+=2){
        vn.pb(v1[i]);
    }

    return vn;
}

  ll check(ll n){ 
    ll c=0;
     while(n%2==0){
        c++;
        n/=2;
     }
    // if(c==0) return 1;
     return c;

  }
  ll latob(ll a,ll b)
{
    return log2(a) / log2(b);
}

 ll gcdvec(vector<ll> v){
    ll x=v[0];
    fn(i,1,v.size()) x= __gcd(x,v[i]);

    return x;
 }

 ll gcdsel(vector<ll> v,ll i){
    ll x=v[0];
    fn(j,1,v.size()){
        if(j!=i){
          x=__gcd(x,v[i]);
        }
    }
    return x;
 }
 bool isPrime(ll n)
{
    // Corner cases
    if (n <= 1)
        return false;
  //suppose n=7 that is prime and its pair are (1,7)
  //so if a no. is prime then it can be check by numbers smaller than square root
  // of the n
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
       
void r90(vector<vector<ll>> &a){
 
    // Traverse each cycle
    ll N= a.size();
    for (ll i = 0; i < N / 2; i++) {
        for (ll j = i; j < N - i - 1; j++) {
 
            // Swap elements of each cycle
            // in clockwise direction
            ll temp = a[i][j];
            a[i][j] = a[N - 1 - j][i];
            a[N - 1 - j][i] = a[N - 1 - i][N - 1 - j];
            a[N - 1 - i][N - 1 - j] = a[j][N - 1 - i];
            a[j][N - 1 - i] = temp;
        }
    }
}

 set<vector<ll>> st;
void printSubsequences(vector<ll> arr, ll index,
                       vector<ll> &subarr,ll n)
{
    // Print the subsequence when reach
    // the leaf of recursion tree
    if (index == n)
    {
       if(subarr.size()>1) st.insert(subarr);
          return;
    }
    else
    {
       //pick the current index into the subsequence.
        subarr.push_back(arr[index]);
       
 
         printSubsequences(arr, index + 1, subarr,n);
 
         
        subarr.pop_back();
       
      //not picking the element into the subsequence.
        printSubsequences(arr, index + 1, subarr,n);
    }
    
}

  bool cmp(pair<ll,ll> &a,pair<ll,ll> &b){
        
         return (a.second<b.second);
}

 void solve(){
    string s; cin>>s;
    ll n= s.size();
    map<char,ll> mp;
   mp['A']=2;
    mp['B']=22;
    mp['C']=222;
    mp['D']=3;
    mp['E']=33;
    mp['F']=333;
    mp['G']=4;
    mp['H']=44;
    mp['I']=444;
    mp['J']=5;
    mp['K']=55;
    mp['L']=555;
    mp['M']=6;
    mp['N']=66;
    mp['O']=666;
    mp['P']=7;
    mp['Q']=77;
    mp['R']=777;
    mp['S']=7777;
    mp['T']=8;
    mp['U']=88;
    mp['V']=888;
    mp['W']=9;
    mp['X']=99;
    mp['Y']=999;
    mp['Z']=9999;

    fn(i,0,n){
        cout<<mp[s[i]]<<" ";
    }
   cout<<l;
   }

    int main(){
       
        fast;
        ll t=1;
         cin>>t;
        while(t--){
           solve();
        }  
        return 0;
    }
