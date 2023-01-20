#include <iostream>
using namespace std;

int main()
{
    char *a = new char[15];
    int count = 0;
    for (int k = 1; k <= 5; k++) {
        cin >> a;
        int i = 0;
        while (a[i]) {
            i++;
        }
        bool flag = true;
        int j = 0;
        while (j< (i/2) && flag == true) {
            if (a[j] != a[i - j - 1]) {
                flag = false;
            }
            j++;
        }
        if (flag == true) {
            count++;
        }
    }
    cout << count << endl;
}





