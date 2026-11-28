#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string bookTitle;

    
    ofstream file("borrowed_books.txt", ios::app);

    if (!file)
    {
        cout << "Error opening file!" << endl;
        return 1;
    }

    cout << "Enter book title: ";
    getline(cin, bookTitle);


    file << bookTitle << endl;

    cout << "Book title successfully stored!" << endl;

    file.close();

    return 0;
}
