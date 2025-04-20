#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    {
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }
    int maxCount = 0, maxElement = arr[0];
        for(int i = 0; i < n; i++)
        {
            int count = 0;
            {
                for(int j = 0; j < n; j++)
                {
                    if(arr[j] == arr[i])
                    {
                        count++;
                    }
                }
            }
            if(count > maxCount)
            {
                maxCount = count;
                maxElement = arr[i];
            }
        }
    cout << "Maximum occurring element: " << maxElement << " (count: " << maxCount << ")";
    return 0;
}