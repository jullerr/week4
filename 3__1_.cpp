#include <iostream>
#include <exception>
#include <string>
using namespace std;

class noDataException : public exception {
    string message_;
    public:
    noDataException(const string& message) : message_(message) {}

const char* what() const throw () { 
    return message_.c_str();
}
};

void calculateAverageTemperature(double data_array[], int size) {

if (count > 0) {
    double average = sum / count;
    cout << fixed << setprecision(1) << average << endl;
} else {
    throw noDataException("N/A");
}
}

int main() {

try {
    if (sortBySensorId) {

} else {

    catch (const noDataException& ex) {
    cout << ex.what() << endl;
}

}
