#include<iostream>
#include<vector>
#include <iomanip>

using namespace std;

void plusMinus(vector<int> array);

int main() {
    int arraysize = 0;
    cin>>arraysize;
    vector<int> array;
    int number = 0;

    for(int i = 0; i < arraysize; i++){
        cin>>number;
        array.push_back(number);
    }

    plusMinus(array);
   
    return 0;
}

void plusMinus(vector<int> array) {
    double pos = 0.00000;
    double neg = 0.00000;
    double zer = 0.00000;
    double size = array.size() * 1.00000;

    for(int i = 0; i < size; i++) {
        if(array[i] > 0){
            pos++;
        } else if (array[i] == 0) {
            zer++;
        } else {
            neg++;
        }
    }

    pos /= size;
    neg /= size;
    zer /= size;

    cout<<fixed<<setprecision(6)<<pos<<endl<<neg<<endl<<zer<<endl;
}