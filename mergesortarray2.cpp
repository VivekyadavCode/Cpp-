#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &num1, int m, vector<int> &num2, int n)
{
    // int i = 3, j = 0;
    // int k = 0;
    // while (i < m && j < n)
    // {
    //     if (num1[i] <= num2[j])
    //     {
    //         num1[k++] = num1[j++];
    //     }
    //     else
    //     {
    //         num1[k++] = num2[j++];
    //     }
    // }
    // while (i < m)
    // {
    //     num1[k++] = num1[i++];
    // }
    // while (j < n)
    // {
    //     num1[k++] = num2[j++];
    // }

    int i = m - 1, j = n - 1, k = m + n - 1;
    while (i >= 0 && j >= 0)
    {
        if (num1[i] < num2[j])
        {
            num1[k--] = num2[j--];
        }
        else
        {
            num1[k--] = num1[i--];
        }
    }
    while (j >= 0)
    {
        num1[k--] = num2[j--];
    }
}
void print(vector<int> num1, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << num1[i] << " ";
    }
    cout << endl;
}

int main()
{
    // int num1[6] = {1,2,3,0,0,0};
    // int num2[3] = {2,5,6};
    vector<int> num1;
    num1.push_back(1);
    num1.push_back(2);
    num1.push_back(3);
    num1.push_back(0);
    num1.push_back(0);
    num1.push_back(0);
    vector<int> num2;
    num2.push_back(2);
    num2.push_back(5);
    num2.push_back(6);
    // vector<int> num1;
    // num1.push_back(0);

    // merge(num1, 6, num2, 3);
    merge(num1, 6, num2, 3);

    cout << "merge sorted array"
         << " " << endl;
    print(num1, 6);

    return 0;
}