#include<iostream>
using namespace std;

int main() {
    uint16_t value[] = {0b0000000000000000, 0b1010000011001101, 0b1111111111111111, 0b0000000011111111, 0b1000001000000100};
    //cout << "counts are : ";
    short int count ;
    for(int i = 0; i < 5; i++) {
        count = 0;
        uint16_t temp = value[i];
        
        while(temp) {
            count += temp & 0b0000000000000001;
            temp >>= 1;
        }
        cout << count << "  ";
    }

    return 0;
}