#include <iostream>
#include <math.h>
using namespace std;
int bishop(int r1, int c1, int r2, int c2){
	int num;
	if((c2 - c1) == 0 || (r2 - r1) == 0) return 0;
	else
		num = abs((c2 - c1)/(r2 - r1));
		return num;
}
int rook(int r1, int c1, int r2, int c2){
	if(r2 == r1 && c2 == c1) return 0;
	if(r2 == r1 && c2 != c1 || c2 == c1 && r2 != r1) return 1;
	else return 2;
}
int king(int r1, int c1, int r2, int c2){
	int num = max(abs(r2 - r1), abs(c2 - c1));
	return num;
}
int main(){
	int r1, c1, r2, c2;
	cin>>r1 >>c1 >>r2 >>c2;
	/* Print rook, bishop & king results */
	printf("%d %d %d\n", rook(r1, c1, r2, c2), bishop(r1, c1, r2, c2), king(r1, c1, r2, c2));
	return 0;
}
