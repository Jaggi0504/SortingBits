#include<bits/stdc++.h>
using namespace std;

int countSetBits(int number) {
	return bitset<32>(number).count();
}

bool comparator(int count1, int count2) {
	if(countSetBits(count1) > countSetBits(count2)) {
		return true;
	} 
	return false;
}

void sorting(int *input, int n) {
	stable_sort(input, input+n, comparator);
}

int main() {
	int n, input[100];
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>input[i];
	}
	sorting(input, n);
	for(int i=0;i<n;i++) {
		cout<<input[i]<<" ";
	}
	return 0;
}
