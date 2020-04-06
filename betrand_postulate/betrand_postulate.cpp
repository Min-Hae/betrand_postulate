#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int n, count;

	while(cin >> n){

		if(n==0)
			break;
		count = 0;
	for(int i =n+1;i<=2*n;i++){

		if(n+1 <= 1){
			count++;
			continue;
		}

		else{
		for(int j=2;j<=sqrt(i);j++){

			if(i%j == 0){
				count++;
				break;
			}
		}
		}
	}
	cout << n-count <<endl;
	}
	return 0;
}



