#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int d, h, m;
    cin >> d >> h >> m;

    auto t = 24 * 60 * (d - 11) + 60 * (h - 11) + (m - 11);
    if (t < 0) {
        cout << -1;
        return 0;
    }

    cout << t;

    return 0;
}