#include <bits/stdc++.h>
using namespace std;

class loop{
public:

    int n;

    void input()
    {
        cout << "Input you  number: ";
        cin >> n;
    }

    void output()
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << i;
            }
            cout << endl;
        }
    }

};

int main()
{
    loop l1;

    l1.input();
    l1.output();

    cout << endl;
    return 0;
}
