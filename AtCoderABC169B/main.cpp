#include <iostream>
#include <cmath>

long long MAX = std::pow(10, 18);

int main(int argc, const char * argv[]) {
    long long N = 0;
    scanf("%lld", &N);

    long long ans = 0;
    scanf("%lld", &ans);

    for(int i=1; i<N; i++) {
        long long num = 0;
        scanf("%lld", &num);

        if(ans == -1 && num == 0) {
            ans = 0;
        } else if(ans == -1 && num > 0) {
            ans = -1;
        } else if(MAX/ans < num) {
            ans = -1;
        } else {
            ans *= num;
        }

        if(ans == 0) {
            break;
        }
    }

    std::cout << ans;

    return 0;
}

