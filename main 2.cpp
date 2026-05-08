#include <iostream>
using namespace std;

const int SIZE = 10;   // size of pixel art

// Function to print pixel matrix
void printPixel(int arr[][SIZE], int rows, int cols) {
    cout << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == 1)
                cout << "#";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {

    // Pixel Art Shapes
    int heart[SIZE][SIZE] = {
        {0,1,1,0,0,0,1,1,0,0},
        {1,1,1,1,0,1,1,1,1,0},
        {1,1,1,1,1,1,1,1,1,0},
        {1,1,1,1,1,1,1,1,1,0},
        {0,1,1,1,1,1,1,1,0,0},
        {0,0,1,1,1,1,1,0,0,0},
        {0,0,0,1,1,1,0,0,0,0},
        {0,0,0,0,1,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };

    int smile[SIZE][SIZE] = {
        {0,0,1,1,1,1,1,0,0,0},
        {0,1,0,0,0,0,0,1,0,0},
        {1,0,1,0,0,0,1,0,1,0},
        {1,0,0,0,0,0,0,0,1,0},
        {1,0,0,1,0,0,1,0,1,0},
        {1,0,0,0,1,1,0,0,1,0},
        {1,0,0,0,0,0,0,0,1,0},
        {0,1,0,1,1,1,1,0,1,0},
        {0,0,1,0,0,0,0,1,0,0},
        {0,0,0,1,1,1,1,0,0,0}
    };

    int letterM[SIZE][SIZE] = {
        {1,0,0,0,0,0,0,0,0,1},
        {1,1,0,0,0,0,0,0,1,1},
        {1,0,1,0,0,0,0,1,0,1},
        {1,0,0,1,0,0,1,0,0,1},
        {1,0,0,0,1,1,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,1}
    };

    int choice;
    char again;

    do {
        cout << "Choose a Pixel Art shape:\n";
        cout << "1 - Heart\n";
        cout << "2 - Smiley Face\n";
        cout << "3 - Letter M\n";
        cout << "4 - Exit\n";
        cout << "Enter your choice: ";

        while (!(cin >> choice)) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input. Enter a number: ";
        }

        while (choice < 1 || choice > 4) {
            cout << "Invalid choice. Enter number between 1-4: ";
            cin >> choice;
        }

        switch (choice) {
        case 1: printPixel(heart, SIZE, SIZE); break;
        case 2: printPixel(smile, SIZE, SIZE); break;
        case 3: printPixel(letterM, SIZE, SIZE); break;
        case 4:
            cout << "Exiting Program.\n";
            return 0;
        }

        cout << "Do you want to pick another shape? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    cout << "Thank you for using the program.\n";
    return 0;
}