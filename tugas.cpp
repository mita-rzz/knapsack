/*
Apa ya jangan aku lagi Kelas D
1. D1041241040_Charles Oktavianus (KETUA)
2. D1041241029_Raihan Fadhillah
3. D1041241037_Gideon Mangatas Chandra Panjaitan
4. D1041241055_Jhon Wiranto
*/





#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int n;
	int ttl=0;
	cin >> n;
	int a = n/10;
	n=n%10;
	ttl+=a;
	int b =(n/5);
	n=(n%5);
	ttl+=b;
	int c= (n/2);
	ttl+=c;
	cout << ttl << '\n';
	cout << a << ' '<< b << ' ' << c << '\n';
}
