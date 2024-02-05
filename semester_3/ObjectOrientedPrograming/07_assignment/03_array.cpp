#include <iostream>

using namespace std;

class ArrayDemo
{
public:
    void arrayFunc(int a[], int n, int target)
    {
        int i, j;
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (a[i] + a[j] == target)
                    cout << "Pair: " << i << ", " << j << endl;
            }
        }
    }
    void arrayFunc(int a1[], int size1, int a2[], int size2)
    {
        int arr[100], i, j;
        for (i = 0;  i < size1; i++)
        {
            arr[i] = a1[i];
        }
        for (j = 0; j < size2; j++)
        {
            arr[i++] = a2[j];
        }
        for (int j = 0; j < i; j++)
        {
            for (int k = j+1; k < i; k++)
            {
                if (arr[j] == arr[k])
                {
                    arr[k] = arr[i - 1];
                    i--;
                    j--;
                }
            }
        }

        for (j = 0; j < i; j++)
            cout  << arr[j] << " ";
        cout << endl;
    }
};

int main()
{
    ArrayDemo ob;
    int a[] = {10, 20, 10, 40, 50, 60, 70};
    int a2[] = {10, 11, 12, 23};
    ob.arrayFunc(a, 7, a2, 4);

    return 0;
}
