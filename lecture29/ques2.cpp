#include <iostream>
#include <vector>
using namespace std;
// Largest sum in continuous subarray

void approach1(vector<int> v)
{
    // brute force approach

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    int maxi = INT32_MIN;
    for (int i = 0; i < v.size(); i++)
    {
        int prefix = 0;

        for (int j = i; j < v.size(); j++)
        {
            prefix += v[j];
            maxi = max(prefix, maxi);
        }
    }

    cout << "largest sum is " << maxi;
}

void approach2(vector<int> v)
{
    // Kadane's algorithm
    int maxi = INT32_MIN;
    int prefix = 0;

    for (int i = 0; i < v.size(); i++)
    {
        prefix += v[i];
        if (prefix < 0)
            prefix = 0;

        maxi = max(maxi, prefix);
    }

    cout <<endl<< "largest sum is " << maxi;
}
int main()
{

    vector<int> v = {4, -6, 2, 8,12};
    approach1(v);
    approach2(v);
}