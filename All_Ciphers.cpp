// FCAI – Programming 1 – 2022 - Assignment 2
// Program Name: All_ciphers.cpp
// Program Description: implement all the ten algorithms in task 2
// Last Modification Date: 27/03/2022
// Author1 and ID and Group: Shawky Ebrahim Ahmed - 20210184 - S4
// Author2 and ID and Group: Sara Walid farouk Mohamed - 20210495 - S10
// Author3 and ID and Group: Khadija Ayman Elsayed Eshra - 20210540 - S10
// Teaching Assistant: Nesma
// Purpose: use the 10 cipher and decipher that in task 2
#include <bits/stdc++.h>
#include "headers/AffineCipher.h"
#include "headers/CaesarCipher.h"
#include "headers/AtbashCipher.h"
#include "headers/VignereCipher.h"
#include "headers/BaconianCipher.h"
#include "headers/SimpleSubstitutionCipher.h"
#include "headers/PolybiusSquareCipher.h"
#include "headers/Morce_Code.h"
#include "headers/XorCipher.h"
#include "headers/RailFenceCipher.h"
using namespace std;

void n_choice_cipher(){
    int n_choice;
    cout << "Which ciphered and deciphered programme you want to start?\n";
    cout << "0- Affine Cipher\n";
    cout << "1- Caesar Cipher\n";
    cout << "2- Atbash Cipher\n";
    cout << "3- Vignere Cipher\n";
    cout << "4- Baconian Cipher\n";
    cout << "5- Simple Substitution Cipher\n";
    cout << "6- Polybius Square Cipher\n";
    cout << "7- Morse Code\n";
    cout << "8- XOR Cipher\n";
    cout << "9- Rail-fence Cipher\n";
    cin >> n_choice;
    while (n_choice<0 || n_choice>9){
        cout << "Enter correct n_choice.\n";
        cin >> n_choice;
    }
    switch (n_choice) {
            case 0:
                start_Affine_cipher();
                break;
            case 1:
                start_Caesar_cipher();
                break;
            case 2:
                start_Atbash_cipher();
                break;
            case 3:
                start_Vignere_cipher();
                break;
            case 4:
                create_cipher_characters_BaconianCipher();
                start_Baconian_cipher();
                break;
            case 5:
                start_Simple_Substitution_cipher();
                break;
            case 6:
                start_Polybius_Square_cipher();
                break;
            case 7:
                start_Morce_code();
                break;
            case 8:
                start_Xor_cipher();
                break;
            case 9:
                start_Rail_Fence_cipher();
                break;
    }
}

bool check_state(){
    bool check = true;
    int tmp;
    cout<<"What do you want to do else?\n";
    cout<<"1- Continue\n";
    cout<<"2- exit\n";
    cin>>tmp;
    while (tmp!=1 && tmp!=2){
        cout<<"Please enter correct n_choice.\n";
        check_state();
    }
    if(tmp == 2){
        check = false;
    }
    return check;
}

void start(){
    n_choice_cipher();
    if(check_state()){
        start();
    }
}

int main() {
    start();
}
