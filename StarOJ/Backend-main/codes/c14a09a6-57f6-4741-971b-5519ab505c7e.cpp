#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
    int n , s;
    cin >> n >> s;
    unordered_map < int,int > frq;
        for(int i = 0;i<n;++i) {
            int a;
            cin >> a;
            ++frq[a];
            if(frq[s - a]) {
                cout << s - a << ' ' << a << endl;
                
            }
            
        }
    }
    return 0;
}