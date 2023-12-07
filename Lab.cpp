#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void File(string& s) {
    ifstream fin("1.txt");
    getline(fin, s);
}

string deleteBetween(string& s) {
    size_t start = s.find('(');
    size_t end = s.rfind(')');

    while (start != string::npos && end != string::npos && start < end) {
        s.erase(start, end - start + 1); // Erase everything between '(' and ')'

        // Find the next pair of parentheses
        start = s.find('(');
        end = s.rfind(')');
    }

    return s;
}

int main() {
    string str;

    File(str);

    cout << "Result: " << deleteBetween(str) << endl;
    return 0;
}
