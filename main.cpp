

#include <algorithm>
#include <iostream>
#include <string>
#include <stdio.h>
#include <memory.h>

namespace cc
{
using std::cin;
using std::cout;
using std::endl;
using std::move;
using std::sort;
using std::string;

int cmp(const string &a, const string &b)
{

    return a.length() < b.length();
}

const int N = 300;

void solve()
{
    int n;
    cin >> n;
    getchar();
    getchar();
    while (n--)
    {

        string strs[N];
        int total = 0;
        
        string s;
        int totalLength = 0;
        while (getline(cin, s))
        {
            if(s.length()==0)
            break;
            strs[total++] = s;
            totalLength += s.length();
        }
        sort(strs, strs + total, cmp);
        totalLength = totalLength / total*2;
        for (int i = 0;; i++)
        {
            int vis[N];
            memset(vis, 0, sizeof(vis));
            string temp = strs[i] + strs[total - 1];
            int count = 1;
            vis[i] = vis[total - 1] = 1;
            for (int j = 0; j < total; j++)
            {
                if(vis[j])
                continue;
                for (int k = 0; k < total && k!=j; k++)
                {
                    if (vis[k])
                        continue;
                    if (strs[j].length() + strs[k].length() != totalLength)
                        continue;
                    if (strs[j] + strs[k] == temp || strs[k] + strs[j] == temp)
                    {
                        vis[j] = vis[k] = 1;
                        
                        ++count;
                        break;
                    }
                }
            }
            if (count == total / 2)
            {
                cout << temp << endl;
                break;
            }
            else
            {
                memset(vis, 0, sizeof(vis));
                string temp = strs[total - 1] + strs[i];
                count = 1;
                vis[i] = vis[total - 1] = 1;
                for (int j = 0; j < total; j++)
                {
                    if (vis[j])
                        continue;
                    for (int k = 0; k < total && k != j; k++)
                    {
                        if (vis[j] || vis[k])
                            continue;
                        if (strs[j].length() + strs[k].length() != totalLength)
                            continue;
                        if (strs[j] + strs[k] == temp || strs[k] + strs[j] == temp)
                        {
                            vis[j] = vis[k] = 1;
                            ++count;
                            break;
                        }
                    }
                }
                if (count == total / 2)
                {
                    cout<<temp<<endl;
                    break;
                }
            }
        }
    }
}

} // namespace cc

int main()
{
#ifndef ONLINE_JUDGE
    freopen("/Users/caicai/in", "r", stdin);
#endif // !ONLINE_JUDGE

    cc::solve();

#ifndef ONLINE_JUDGE

    while (true)
        ;
#endif // !ONLINE_JUDGE
    return 0;
}