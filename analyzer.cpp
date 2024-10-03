#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include "StringData.h"

using namespace std;

int linear_search(vector<string> container, string element) {
    vector<string> arr1 = container;
    string goal = element;
    int i=0;
    while (i<arr1.size()) {
        if (arr1[i] == goal) {
            return i;
        }
        i++;
    }
    return -1;
}


int binary_search(vector<string> container, string element) {
    vector<string> arr1 = container;
    string goal = element;

    int bound1 = 0, bound2 = arr1.size()-1;

    while (bound1<=bound2) {
        int mid = (bound1+bound2)/2;

        if (container[mid] == goal) {
            return mid;
        } else if (container[mid] < goal) {
            bound1 = mid+1;
        } else {
            bound2 = mid-1;
        }
    }
    return -1;
}





int main() {

    //gets the data to search through
    vector<string> data_set = getStringData();

    cout << "----------" << endl;
    cout << "Searching for \"not_here\"..." << endl;

    auto start_linear = chrono::system_clock::now();
    int found1 = linear_search(data_set, "not_here");
    auto end_linear = chrono::system_clock::now();

    auto time_taken_linear = (end_linear - start_linear).count();

    auto start_binary = chrono::system_clock::now();
    int found2 = binary_search(data_set, "not_here");
    auto end_binary = chrono::system_clock::now();

    auto time_taken_binary = (end_binary - start_binary).count();

    cout << "Found \"not_here\" at " << found1 << endl;
    cout << "This took " << time_taken_linear << " milliseconds using Linear Search" << endl;
    cout << "This took " << time_taken_binary << " milliseconds using Binary Search" << endl;

    cout << "----------" << endl;
    cout << endl;










    cout << "----------" << endl;
    cout << "Searching for \"mzzzz\"..." << endl;

    start_linear = chrono::system_clock::now();
    found1 = linear_search(data_set, "mzzzz");
    end_linear = chrono::system_clock::now();

    time_taken_linear = (end_linear - start_linear).count();

    start_binary = chrono::system_clock::now();
    found2 = binary_search(data_set, "mzzzz");
    end_binary = chrono::system_clock::now();

    time_taken_binary = (end_binary - start_binary).count();

    cout << "Found \"mzzzz\" at " << found1 << endl;
    cout << "This took " << time_taken_linear << " milliseconds using Linear Search" << endl;
    cout << "This took " << time_taken_binary << " milliseconds using Binary Search" << endl;

    cout << "----------" << endl;
    cout << endl;








    cout << "----------" << endl;
    cout << "Searching for \"aaaaa\"..." << endl;

    start_linear = chrono::system_clock::now();
    found1 = linear_search(data_set, "aaaaa");
    end_linear = chrono::system_clock::now();

    time_taken_linear = (end_linear - start_linear).count();

    start_binary = chrono::system_clock::now();
    found2 = binary_search(data_set, "aaaaa");
    end_binary = chrono::system_clock::now();

    time_taken_binary = (end_binary - start_binary).count();

    cout << "Found \"aaaaa\" at " << found1 << endl;
    cout << "This took " << time_taken_linear << " milliseconds using Linear Search" << endl;
    cout << "This took " << time_taken_binary << " milliseconds using Binary Search" << endl;

    cout << "----------" << endl;

    return 0;




}