#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

void PrintSorted(vector<int> sorted, int size)
{
    int i;
    for (i = 0; i < (sorted.size() - 1); i++)
    {
        cout << sorted.at(i) << ";";
    }
    cout << "\n";
}

vector<int> Insert(int val, vector<int> sorted)
{
    int i = 0;
    while (val > sorted.at(i)) 
    {
        if (i == (sorted.size() - 1)) // SO DOESN'T GO OUT OF BOUNDS
        { 
            break;
        }
        else
        {
            i++;
        }
    }

    sorted.emplace((sorted.begin() + i), val); // INSERT VALUE INTO SORTED VECTOR AT CORRECT INDEX

    return sorted;
}

void InsertionSort(vector<int> unsorted, int size)
{
    int i;
    int val;

    vector<int> sorted(1); // DECLARE VECTOR OF SIZE "1" TO HOLD NEW SORTED VALUES
    sorted.emplace(sorted.begin(), unsorted[0]); // INSERT 1ST VALUE FROM UNSORTED VECTOR 
                                                 // IN THE 1ST INDEX OF THE SORTED VECTOR 
    for (i = 1; i < size; i++)
    {
        val = unsorted.at(i);
        sorted = Insert(val, sorted);
        PrintSorted(sorted, size);
    }
}

int main()
{
    int size;
    cin >> size;

    vector<int> unsorted(size); // DECLARE VECTOR WITH SIZE FROM INPUT

    // FILL VECTOR W/ UNSORTED VALUES
     int i;
    for (i = 0; i < size; i++)
    {
        cin >> unsorted.at(i);
    }

    InsertionSort(unsorted, size);
}
