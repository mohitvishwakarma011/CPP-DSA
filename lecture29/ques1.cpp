#include <iostream>
#include <vector>

using namespace std;

// divide array in two subarray that their sum is equal -rteurn true if it is possible else return false

bool apprach1()
{

    vector<int> v = {3, 4, -2, 5, 8, 20, -10, 8};

    // Brute force approach
    for (int i = 0; i < v.size() - 1; i++)
    {

        int sum1 = 0, sum2 = 0;

        for (int j = 0; j <= i; j++)
        {
            sum1 += v[j];
        }
        for (int j = i + 1; j < v.size(); j++)
        {
            sum2 += v[j];
        }

        if (sum1 == sum2)
            return true;
    }

    return false;
}

bool apprach2()
{
    // using prefix sum

    vector<int> v = {3, 4, -2, 5, 8, 20, -10, 8};
    int total_sum=0;
    int prefix=0;
    for(int i=0;i<v.size();i++)
    {
        total_sum+=v[i];
    }

    for(int i=0;i<v.size()-1;i++)
    {
        prefix+=v[i];
        if(total_sum-prefix==prefix)return true;
    }

    return false;
    //T.C = O(n)

}
int main()
{

    cout << apprach1()<<endl;
    cout << apprach2();
}