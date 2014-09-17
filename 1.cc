#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int main(int argc, const char *argv[])
{
    int arr[10] = {0};
    srand(9090);
    for(int ix = 0; ix != 10; ++ix)
    {
        arr[ix] = rand() % 100;
    }
    
    sort(arr, arr + 10);

    for(int t : arr)
    {
        cout << t << " ";
    }
    cout << endl;
    return 0;
}
