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




int main(){
    std::vector<std::string> my_data=getStringData();
    std::cout << linear_search(my_data, "mzzzz");


  return 0;
  }