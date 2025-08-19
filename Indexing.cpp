#include <bits/stdc++.h>
#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define T int T; cin >> T; while(T--)
using namespace std;
using vec = vector<int>; using mat = vector<vec>;
template<typename Q> istream& operator>>(istream& is, vector<Q>& v) { for(auto& x : v) is >> x; return is; }


signed main() {
    fastio
    
    vec v = {1,2,3,4,5,6,7,8,9,10}; // 10 elements, indices 0-9
    int n = v.size();cout<<n<<endl;
    
    // 1. 5th element from beginning (0-based)
    cout << "5th element from beginning: " << v[4] << endl; // Index 4
    
    // 2. 5th element from end
    cout << "5th element from end: " << v[n-5] << endl; // Index n-5
    
    // 3. Loop conditions till 5th element
    // Inclusive (0,1,2,3,4):
    for(int i=0; i<=4; i++) cout << v[i] << " ";
    cout << endl;
    // Exclusive (0,1,2,3):
    for(int i=0; i<4; i++) cout << v[i] << " ";
    cout << endl;
    
    // 4. Mid element
    int mid_even = n/2;        // For even n: right middle
    int mid_odd = n/2;         // For odd n: exact middle
    cout << "Mid (even/odd): " << v[mid_even] << endl;
    
    // Alternative: left middle for even
    int left_mid = (n-1)/2;
    cout << "Left mid: " << v[left_mid] << endl;
    
    // 5. 5th element in front and back of mid
    int mid = n/2;
    if(mid-5 >= 0) cout << "5th before mid: " << v[mid-5] << endl;
    if(mid+5 < n) cout << "5th after mid: " << v[mid+5] << endl;
        
}