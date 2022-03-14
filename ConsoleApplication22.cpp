
#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int size1;
    cin >> size1;
    int* arr = new int[size];
    int* arr1 = new int[size1];
    for (int i = 0; i < size; i++)
    {
        *(arr + i) = 1 + rand() % 10;
        cout << *(arr + i) << " ";
    }
    cout << endl;
    for (int i = 0; i < size1; i++)
    {
        *(arr1 + i) = 1 + rand() % 10;
        cout << *(arr1 + i) << " ";
    }
    cout << endl;
    int size2 = size;
    int* arr3 = new int[size2];
    int tmp = 0;
    for (int i = 0; i < size; i++)
    {
        int count = *(arr + i);
        bool count1 = false;
        for (int j = 0; j < size1; j++)
        {
            
            if (count == *(arr1 + j))
            {
                count1 = true;
                break;
            }
        }
        if (count1 == false)
        {
            bool count2 = false;
            for (int k = 0; k < size2; k++)
            {
                if (count == *(arr3 + k))
                {
                    count2 = true;
                    break;
                }


            }
            if (count2 == false)
            {
                *(arr3 + tmp) = count;
                tmp++;

            }

        }

    }
    int* ptr = new int[tmp];
    for (int i = 0; i < tmp; i++)
    {
        *(ptr + i) = *(arr3 + i);
    }
    delete[] arr3;
    arr3 = ptr;
    ptr = nullptr;
    size2 = tmp;
    for (int i = 0; i < size2; i++)
    {
        cout << *(arr3 + i) << " ";
    }
}

