#include"bits/stdc++.h"
using namespace std;

int main() {

    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--) {

        int n, m;
        cin >> n >> m;

        int x, y;
        cin >> x >> y;

        vector<vector<char>> a(n, vector<char> (m));

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        vector<int> ans(n, 0);

        for(int i = 0; i < n; i++) {
            int comp = 0, part = 0;
            for(int j = 0; j < m; j++) {
                if(a[i][j] == 'P') {
                    part++;
                }
                else if(a[i][j] == 'F') {
                    comp++;
                }
            }
            if(comp >= x || (comp == (x-1) && part >= y)) {
                ans[i] = 1;
            }
        }

        for(int i = 0; i < n; i++) {
            cout << ans[i];
        }
        cout << "\n";
    }

    return 0;
}
