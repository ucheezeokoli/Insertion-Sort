#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

void PrintSorted(vector<int> sorted, int size){
    int i;
    for (i = 0; i < (sorted.size()-1); i++){
        // if (sorted.at(i) != 0){
            cout << "sorted: "<< sorted.at(i)<< "; ";
        // }
    }
    cout << "\n";
}

vector<int> Insert(int val, vector<int> sorted){
    int i = 0;
    while (val > sorted.at(i)){
        if(i == (sorted.size() - 1)){ //SO DOESN'T GO OUT OF BOUNDS
            cout << "size: "<< sorted.size()<<endl;
            break;
        }
        else{
            cout << "size: "<< sorted.size()<<endl;

            i++;
        }
    }

    cout << "index: " << i << " " << endl;
    // sorted.at(i) = val;

    sorted.emplace((sorted.begin() + i),val);
    // sorted.pop_back();

    return sorted;
}

void InsertionSort(vector<int> nums, int size){
    int i;
    int val;

    vector<int> sorted(1);
    sorted.emplace(sorted.begin(),nums[0]);
    cout << sorted.size()<<endl;

    // sorted.pop_back();
    // sorted.push_back(nums[0]);
    // cout << "sorted at last index: " <<sorted.at(size)<< "\n";
    cout << sorted.size()<<endl;

    for (i = 1; i < size; i++){
        val = nums.at(i);
        cout << "val: " << val << "\n";
        sorted = Insert(val,sorted);
        PrintSorted(sorted,size);
    }
}

int main(){
    // int* nums;
    int size;
    cin >> size;

    vector<int> nums(size);
    
    int i;
    // TO FILL ARRAY W/ UNSORTED VALUES
    for (i = 0; i < size; i++){
        cin >> nums.at(i);
    }

    InsertionSort(nums, size);


    // FOR TESTING!
    //_____________________________
    // for (i = 0; i < size; i++){
    //     cout << nums.at(i) << ";";
    // }

    // cout << endl;

    // vector<int> sorted;
    // sorted.push_back(nums[0]);
    
    // cout << sorted[0]<< endl;
    // cout << sorted.at(0)<< endl;
    

}
