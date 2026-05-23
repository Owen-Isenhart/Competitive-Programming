#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        // we want biggest number in a, then all next biggest in b without changing size
        // actually there could be a case where we wouldn't want the biggest to be swapped
        // if the biggest is in b, but the alternative on the same index in a is small, we don't want to swap
        // ignore this im braindead

        int n;
        cin >> n;
        vector<int> a = {};
        vector<int> b = {};

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            b.push_back(temp);
        }

        // assuming was overflow or tle idk
        long long sum = 0;
        int max_of_mins = 0;
        for (int i = 0; i < n; i++)
        {
            int max_i = max(a[i], b[i]);
            int min_i = min(a[i], b[i]);
            sum += max_i;
            max_of_mins = max(max_of_mins, min_i);
            // put all the big nums in b and max in a is just whatever's left

        }
        sum += max_of_mins;
        cout << sum << "\n";
    }

    return 0;
}