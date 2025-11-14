#include <iostream>
#include <cstdlib>
#include "mamaLang.h"
using namespace std;

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main() {
    int choice;

    while (true) {
        cout << "=================================\n";
        cout << "        mamaLang Console         \n";
        cout << "=================================\n";
        cout << "Select an Operation (1-25)\n";
        cout << "---------------------------------\n";
        cout << " 1. Jog Koro\n";
        cout << " 2. Biyog Koro\n";
        cout << " 3. Gun Koro\n";
        cout << " 4. Vag Koro\n";
        cout << " 5. Vagsesh Neo\n";
        cout << " 6. Goro Maddho\n";
        cout << " 7. Ghat Koro\n";
        cout << " 8. Gunfol Neo (Factorial)\n";
        cout << " 9. Mul (Square Root)\n";
        cout << "10. Boro Neo\n";
        cout << "11. Chhoto Neo\n";
        cout << "12. Nishchoit Neo (Absolute)\n";
        cout << "13. Jog/Bijog Ki (Even/Odd)\n";
        cout << "14. Moulik Ki (Prime)\n";
        cout << "15. Uloto Koro (Reverse String)\n";
        cout << "16. Boro Koto (String Length)\n";
        cout << "17. Palindrome Ki\n";
        cout << "18. Swar Gonona\n";
        cout << "19. Array Jog Koro\n";
        cout << "20. Boro Element\n";
        cout << "21. Chhoto Element\n";
        cout << "22. Uloto Songkha\n";
        cout << "23. Tapman Poriborton\n";
        cout << "24. Fibonacci Dao\n";
        cout << "25. Binimoy Koro (Swap)\n";
        cout << "---------------------------------\n";
        cout << " 0. Exit\n";
        cout << "---------------------------------\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        clearScreen();

        if (choice == 0) {
            cout << "Exiting mamaLang. Thank you!\n";
            break;
        }

        int a, b, n, size;

        // ---------- IF/ELSE IMPLEMENTATION ----------
        if (choice == 1) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << jog_koro(a, b) << endl;
        }
        else if (choice == 2) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << biyog_koro(a, b) << endl;
        }
        else if (choice == 3) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << gun_koro(a, b) << endl;
        }
        else if (choice == 4) {
            float x, y;
            cout << "Enter two numbers: ";
            cin >> x >> y;
            cout << vag_koro(x, y) << endl;
        }
        else if (choice == 5) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << vagsesh_neo(a, b) << endl;
        }
        else if (choice == 6) {
            float x, y;
            cout << "Enter two numbers: ";
            cin >> x >> y;
            cout << goro_maddho(x, y) << endl;
        }
        else if (choice == 7) {
            double x, y;
            cout << "Enter base & power: ";
            cin >> x >> y;
            cout << ghat_koro(x, y) << endl;
        }
        else if (choice == 8) {
            cout << "Enter number: ";
            cin >> n;
            cout << gunfol_neo(n) << endl;
        }
        else if (choice == 9) {
            double x;
            cout << "Enter number: ";
            cin >> x;
            cout << mul_neo(x) << endl;
        }
        else if (choice == 10) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << boro_neo(a, b) << endl;
        }
        else if (choice == 11) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << chhoto_neo(a, b) << endl;
        }
        else if (choice == 12) {
            cout << "Enter number: ";
            cin >> a;
            cout << nishchoit_neo(a) << endl;
        }
        else if (choice == 13) {
            cout << "Enter number: ";
            cin >> n;
            cout << jogbaijog_ki(n) << endl;
        }
        else if (choice == 14) {
            cout << "Enter number: ";
            cin >> n;
            cout << (moulik_ki(n) ? "Moulik" : "Moulik na") << endl;
        }
        else if (choice == 15) {
            string s;
            cout << "Enter string: ";
            cin >> s;
            cout << uloto_koro(s) << endl;
        }
        else if (choice == 16) {
            string s;
            cout << "Enter string: ";
            cin >> s;
            cout << boro_koto(s) << endl;
        }
        else if (choice == 17) {
            string s;
            cout << "Enter string: ";
            cin >> s;
            cout << (palindrome_ki(s) ? "Palindrome" : "Palindrome na") << endl;
        }
        else if (choice == 18) {
            string s;
            cout << "Enter string: ";
            cin >> s;
            cout << swar_gonona(s) << endl;
        }
        else if (choice == 19) {
            cout << "Enter array size: ";
            cin >> size;
            int arr[size];
            cout << "Enter elements: ";
            for (int i = 0; i < size; i++) cin >> arr[i];
            cout << array_jog_koro(arr, size) << endl;
        }
        else if (choice == 20) {
            cout << "Enter array size: ";
            cin >> size;
            int arr2[size];
            cout << "Enter elements: ";
            for (int i = 0; i < size; i++) cin >> arr2[i];
            cout << boro_element(arr2, size) << endl;
        }
        else if (choice == 21) {
            cout << "Enter array size: ";
            cin >> size;
            int arr3[size];
            cout << "Enter elements: ";
            for (int i = 0; i < size; i++) cin >> arr3[i];
            cout << chhoto_element(arr3, size) << endl;
        }
        else if (choice == 22) {
            cout << "Enter number: ";
            cin >> n;
            cout << uloto_songkha(n) << endl;
        }
        else if (choice == 23) {
            float t;
            char type;
            cout << "Enter temperature & type (C/F): ";
            cin >> t >> type;
            cout << tapman_poriborton(t, type) << endl;
        }
        else if (choice == 24) {
            cout << "Enter terms: ";
            cin >> n;
            fibonacci_dao(n);
        }
        else if (choice == 25) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
            binimoy_koro(a, b);
            cout << "After Swap: " << a << " " << b << endl;
        }
        else {
            cout << "Invalid option! Try again.\n";
        }

        cout << "\nPress Enter to continue...";
        cin.ignore();
        cin.get();
        clearScreen();
    }

    return 0;
}
