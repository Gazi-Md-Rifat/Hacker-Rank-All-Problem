#include <iostream>
using namespace std;

// Hacker Rank Question Link : https://www.hackerrank.com/challenges/electronics-shop/problem?isFullScreen=true

int main (){

    int budget, number_of_keyboard, number_of_USB, expensive_price = 0;
    cin >> budget >> number_of_keyboard >> number_of_USB;
    int keyboard_price[number_of_keyboard], USB_price[number_of_USB];
   // input data...
    for (int i = 0; i < number_of_keyboard; i++){
        cin >> keyboard_price[i];
    }
    for (int i = 0; i < number_of_USB; i++){
        cin >> USB_price[i];
    }
    // algorithm..
    for (int i = 0; i < number_of_keyboard; i++){
        for (int j = 0; j < number_of_USB; j++){
            if(keyboard_price[i] + USB_price[j] <= budget){
                if (keyboard_price[i] + USB_price[j] > expensive_price){
                    expensive_price = keyboard_price[i] + USB_price[j];
                }
                else{
                    expensive_price = keyboard_price[i] + USB_price[j];
                }
            }
        }
    }
    if (expensive_price == 0){
        cout << "-1";
    }
    else{
        cout << expensive_price;
    }



    return 0;
}
