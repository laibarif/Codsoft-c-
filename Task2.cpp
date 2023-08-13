#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filePath;

    cout << "Enter the full file path: ";
    getline(cin, filePath);

    fstream newfile;
    newfile.open(filePath, std::ios::in);

    if (!newfile) {
        cout << "Error opening the file." <<endl;
        return 1; // Return an error code
    }

    int wordCount = 0;
    string word;

    while (newfile >> word) {
        ++wordCount;
    }

    newfile.close();

    cout << "Total word count: " << wordCount <<endl;

    return 0;
}
