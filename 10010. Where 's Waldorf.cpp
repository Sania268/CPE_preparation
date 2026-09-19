#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int rows, cols;
        cin >> rows >> cols;

        vector<string> grid(rows);

        // Read the grid
        for (int row = 0; row < rows; row++) {
            cin >> grid[row];

            // Convert the row to lowercase
            for (int col = 0; col < cols; col++) {
                grid[row][col] = tolower(grid[row][col]);
            }
        }

        int wordCount;
        cin >> wordCount;

        // 8 possible directions
        int dr[8] = {
            -1, -1, -1,
             0,  0,
             1,  1,  1
        };

        int dc[8] = {
            -1,  0,  1,
            -1,  1,
            -1,  0,  1
        };

        // Search for every word
        for (int w = 0; w < wordCount; w++) {
            string word;
            cin >> word;

            // Convert word to lowercase
            for (int i = 0; i < word.length(); i++) {
                word[i] = tolower(word[i]);
            }

            bool found = false;

            // Search every cell
            for (int row = 0; row < rows && !found; row++) {
                for (int col = 0; col < cols && !found; col++) {

                    // Is this a possible starting point?
                    if (grid[row][col] != word[0]) {
                        continue;
                    }

                    // Try all 8 directions
                    for (int d = 0; d < 8 && !found; d++) {

                        bool matches = true;

                        // Check the rest of the word
                        for (int k = 1; k < word.length(); k++) {

                            int newRow = row + dr[d] * k;
                            int newCol = col + dc[d] * k;

                            // Check if we went outside the grid
                            if (newRow < 0 || newRow >= rows ||
                                newCol < 0 || newCol >= cols) {
                                matches = false;
                                break;
                            }

                            // Check if the letter matches
                            if (grid[newRow][newCol] != word[k]) {
                                matches = false;
                                break;
                            }
                        }

                        // Entire word matched
                        if (matches) {
                            cout << row + 1 << " " << col + 1 << endl;
                            found = true;
                        }
                    }
                }
            }
        }
    }

    return 0;
}
