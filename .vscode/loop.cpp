#include <iostream>

using namespace std;

int main(){

    //For 기본 예제
    /*
    for(int i = 0; i < 10; i++){
        cout << i << " ";
    }
    cout << endl;
    */

    /*
    int my_array[] = {1, 2, 3 ,4 ,5 ,4, 3, 2, 1};

    for(int i = 0; i < sizeof(my_array) / sizeof(int); i++){

        if(my_array[i] < my_array[i - 1])
            break;

        cout << my_array[i] << endl;
    }
    */

    /*
    char my_string[] = "Hello, World!";

    for(int i = 0; my_string[i] != '\0'; i++){
        cout << my_string[i];
    }
    cout << endl;
    // Segmentation fault 
    // 메모리가 잘못되었다.

    */

    //while

    /*
    int i = 0;
    while (true){
        
        cout << i << " ";
        cout << endl;
        i++;

        if (i > 9)
        break;
    }
    */

    char my_string[] = "Hello\0, World!";

    int i = 0;

    while(my_string[i] != '\0'){
        cout << my_string[i];

        i++;
    }
    cout << endl;
    return 0;
}