/**
 * Printing the array.
*/
#include <iostream>

int main(){
    int array[3][2] = {{1, 2}, {3,4},{5,6}};
    for(int i =0; i < 3; i++){    //accessing the row
        for(int j = 0; j < 2; j++){  //accessing the column
            std::cout << (array[i][j]);
            std::cout << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}