﻿#include "a_star.h"

int main() {
    
    bool viz = false;
    cout << "With visualization - 1" << endl << "Testing system - 0" << endl << "Your choice: ";
    cin >> viz;
    system("cls");

    if (viz) {
        ifstream fin("input.txt");
        unsigned long int row, col, start_x, start_y, end_x, end_y;
        fin >> row >> col >> start_x >> start_y >> end_x >> end_y;

        Pair start(start_y, start_x);
        Pair end(end_y, end_x);

        vector< vector <int> > grid(row, vector<int>(col));
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                fin >> grid[i][j];
            }
        }
        visualization(A_star(grid, start, end, true), grid, start, end);
        fin.close();
    }
    else
        test();

}

