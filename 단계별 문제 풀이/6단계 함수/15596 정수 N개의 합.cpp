#include <iostream>
#include <vector>

using namespace std;

int long long sum(std::vector<int> &a);

int main(void) {
	int a[1000000], n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[n];
	long long sum(a);
	return 0;
}

long long sum(std::vector<int> &a) {
	long long ans = 0;
    for (int i = 0; i < a.size(); i++){
        ans += a[i];
    }
	return ans;
}

