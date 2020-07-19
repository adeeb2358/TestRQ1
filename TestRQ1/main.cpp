//
//  main.cpp
//  TestRQ1
//
//  Created by adeeb mohammed on 19/07/20.
//  Copyright © 2020 adeeb mohammed. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>

int solution(std::vector<int> &A) {
    if(A.empty()){
        return 0;
    }
    
    //int previous = A[0];
    int operations = 0;
    for(int i = 1; i < A.size()-1; i= i+2){
        if(A[i] == A[i-1] || A[i] == A[i+1]){
            operations++;
        }else if((A[i] < A[i-1]) && (A[i] > A[i+1])){
            operations++;
        }else if(A[i] > A[i-1] && A[i] < A[i+1]){
            operations++;
        }
    }
    return operations;
}


int main(int argc, const char * argv[]) {
    std::vector<int> input = {5,4,3,2,6};
    auto result = solution(input);
    std::cout << result;
    return 0;
}
