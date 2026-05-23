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
        int a, n;
        cin >> a >> n;

        vector<int> d;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            d.push_back(temp);
        }

        // check every digit of a, if digit is in set then move on, if not select closest digit
        int a_copy = a;
        vector<int> b;

        if (a == 0)
        {
            cout << d[0] << endl;
        }
        else
        {
            while (a > 0)
            {
                int digit = a % 10;
                a /= 10;
                auto it = find(d.begin(), d.end(), digit);
                if (it != d.end())
                {
                    b.push_back(digit);
                }
                else
                {
                    int left = d[0];
                    int right = d[0];
                    for (int i = 0; i < n; i++)
                    {
                        if (d[i] > digit)
                        {
                            right = d[i];
                            break;
                        }
                        left = d[i];
                    }

                    if (abs(digit - left) < abs(digit - right))
                    {
                        b.push_back(left);
                    }
                    else
                        b.push_back(right);
                }
            }

            // reverse(b.begin(), b.end());
            int joined = 0;
            for (int i = 0; i < b.size(); i++)
            {
                joined += (b[i] * pow(10, i));
            }
            cout << b.size() << " " << joined;
            int res = abs(a_copy - joined);
            cout << res << endl;
        }
    }

    return 0;
}