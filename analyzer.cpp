#include <iostream>

#include "StringData.h"


int linear_search(std::vector<std::string> data, std::string input) {
    for(int i=0; i<data.size(); i++) {
        if(data.at(i) == input) {
            return i;
        }
    }
    return -1;
}

int binary_search(std::vector<std::string> container, std::string input) {
    int low = 0;
    int high = container.size() - 1;
    int mid = 0;

    while (low <= high) {
        mid = (high + low);
        std::string new_string=container[mid];
        for(int i=0; i<new_string.size(); i++) {
            if (new_string[i] == input[i]) {
                if(i==4) {
                    return mid;
                }
                continue;
            }
            if (new_string[i] < input[i]) {
                low=mid+1;
                break;
            }
            if (new_string[i] > input[i]) {
                high=mid-1;
                break;
            }
        }
    }
    return -1;

}



int main(){
    std::vector<std::string> my_data=getStringData();
    long long time=systemTimeNanoseconds();
    std::cout << "Index of Linear Search for:'not_here'=" <<linear_search(my_data, "not-here") << std::endl;
    std::cout <<"That case took " <<time-systemTimeNanoseconds() <<" seconds"<< std::endl;

    time=systemTimeNanoseconds();
    std::cout << "Index of Binary Search for:'not-here'=" <<binary_search(my_data, "not-here") << std::endl;
    std::cout <<"That case took " <<time-systemTimeNanoseconds() <<" seconds"<< std::endl;

    time=systemTimeNanoseconds();
    std::cout << "Index of Linear Search for:'mzzzz'=" <<linear_search(my_data, "mzzzz") << std::endl;
    std::cout <<"That case took " <<time-systemTimeNanoseconds() <<" seconds"<< std::endl;

    time=systemTimeNanoseconds();
    std::cout << "Index of Binary Search for:'mzzzz'=" <<binary_search(my_data, "mzzzz") << std::endl;
    std::cout <<"That case took " <<time-systemTimeNanoseconds() <<" seconds"<< std::endl;

    time=systemTimeNanoseconds();
    std::cout << "Index of Linear Search for:'aaaaa'=" <<linear_search(my_data, "aaaaa") << std::endl;
    std::cout <<"That case took " <<time-systemTimeNanoseconds() <<" seconds"<< std::endl;

    time=systemTimeNanoseconds();
    std::cout << "Index of Binary Search for:'aaaaa'=" <<binary_search(my_data, "aaaaa") << std::endl;
    std::cout <<"That case took " <<time-systemTimeNanoseconds() <<" seconds"<< std::endl;


  return 0;
  }