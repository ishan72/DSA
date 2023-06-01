#include <iostream>

int main(){
    int rows;
    int cols;
    std::cout << "Enter the number of rows:...";
    std::cin >> rows;
    std::cout << "Enter the number of cols:...";
    std::cin >> cols;
    //rectangle pattern
    /*
    for(int i = 0; i < cols; i++){
        for(int j = 0; j < rows; j++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    */
   //hollow rectangle
   /*
   
    for(int i =0; i <rows; i++){
        for(int j=0; j < cols; j++){
            if(i == 0 || i == rows -1){
                std::cout << "*";
            }
            else{
                if(j== 0 || j == cols-1){
                    std::cout << "*";
                }else{
                    std::cout << " ";
                }
            }
        }
        std::cout << std::endl;
    }
   */
  //inverted half pyramid
  /*
  for(int i = 0; i < rows; i++){
    for(int j = 5; j > i; j--){
        std::cout << "*";
    }
    std::cout << std::endl;
  }
  */

 //half pyramid after 180 rotation problem
/*
for(int i = 1; i <= cols; i++){
    for(int j = 1; j <= cols; j++){
        if(cols - i < j){
            std::cout << "*";
        }
        else{
            std::cout<<" ";
        }
    }
    std::cout << std::endl;
} 
*/

//half pyramid using number
/*
for(int i = 1; i <= cols; i++){
    for(int j = 1; j <= i; j++){
            std::cout<< i;
    }
    std::cout<< std::endl;
}
*/

//floyd's triangle
/*
int count = 1;
for(int i = 1; i <= cols; i++){
    for(int j = 0; j <= i; j++){
        std::cout << count ;
        count++;
    }
    std::cout<<std::endl;
}
*/
//butterfly pattern
for(int i = 1; i <= cols; i++){
    for(int j = 1; j <= i; j++){
        std::cout<< "*";
    }
    int space = 2*cols - 2*i;
    for(int j=1;j <= space; j++){
        std::cout << " ";
    }
    for(int j =1; j <= i; j++){
        std::cout << "*";
    }
    std::cout<< std::endl;
}
for(int i = cols; i > 0; i--){
    for(int j = i; j > 0; j--){
        std::cout<< "*";
    }
    int space = 2*cols - 2*i;
    for(int j=space;j > 0; j--){
        std::cout << " ";
    }
    for(int j =i ; j > 0; j--){
        std::cout << "*";
    }
    std::cout<< std::endl;
}

    return 0;
}