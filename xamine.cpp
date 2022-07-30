#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int N;
        cin >> N;

        for(int i = 1; i <= N ; i++)
        {
            int j;
            for(j =1; j <= i; j++)
            {
                cout << j;
            }
          /*  for(int x = j-2; x >= 1; x--)
            {
                cout << x;
            }
            cout << " ";*/
        }
        cout << endl;
    }
    return 0;
}
