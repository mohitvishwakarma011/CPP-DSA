#include <iostream>

using namespace std;

int main()
{

    int arr[] = {6, 4, 5, -3, 2, 8};

    int prefixSum[6];

    prefixSum[5] = arr[5];

    for (int i = 4; i >= 0; i--)
    {

        prefixSum[i] = prefixSum[i + 1] + arr[i];
    }

    for (int i = 0; i < 6; i++)
    {
        cout << prefixSum[i] << " ";
    }
    return 0;
}