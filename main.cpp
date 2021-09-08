#include <iostream>

void evenDigits(long long bN, long long &ans){
    if(bN > 0){
        if(bN % 2 == 0) ans++;
        evenDigits(bN/10,ans);
    }

}

int main() {
    long long bigNumber;
    long long ans = 0;
    std::cout << "Input big number!" << std::endl;
    std::cin >> bigNumber;
    evenDigits( bigNumber, ans);
    std::cout << ans;
    return 0;
}
