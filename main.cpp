

#include <algorithm>
#include <iostream>

namespace cc
{
using std::cin;
using std::cout;
using std::endl;
using std::move;
using std::qsort;
const int N = 1000;
class Node
{
  public:
    int fee;
    int day;
    int index;
    Node(int fee, int day, int index) : day(day), fee(fee), index(index)
    {
    }
    Node() = default;
};

int cmp(const void *a, const void *b)
{
    Node *n1 = (Node *)(a);
    Node *n2 = (Node *)(b);
    int total1 = n1->fee * n2->day;
    int total2 = n2->fee * n1->day;
    if (total1 == total2)
    {
        return n1->index - n2->index;
    }
    if (total1 < total2)
        return 1;
    return -1;
}

void solve()
{
    int n;
    cin >> n;
    int t = 0;
    while (n--)
    {
        if(t!=0)
        cout<<endl;
        ++t;
        int k;
        cin >> k;
        int fee, day;
        int total = 0;
        Node nodes[N];
        for (int i = 0; i < k; i++)
        {
            cin >> day >> fee;
            Node node(fee, day, i + 1);
            nodes[total++] = node;
        }
        qsort(nodes, total, sizeof(Node), cmp);

        cout << nodes[0].index;
        for (int i = 1; i < total; i++)
            cout << " " << nodes[i].index;
        cout << endl;
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