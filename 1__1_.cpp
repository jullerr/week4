#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Application {
public:
int run() {
string filename;

cout << "Введите имя файла: ";
cin >> filename;

ifstream file(filename);

if (!file) {
    cout << "Ошибка открытия файла" << endl;
return 1;
}

string line;
while (getline(file, line)) {
    cout << line << endl;
}

file.close();

return 0;
}

int main() {
Application application;
return application.run();
}
