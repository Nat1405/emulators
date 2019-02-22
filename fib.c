int fib(int n){
	/* Calculate the nth fibonaci number */
	int a, b, i, tmp;
	a = 1;
	b = 1;
	if (n==1 || n==2) return 1;
	for (i=2; i<n; i++){
		tmp = b;
		b = a+b;
		a = tmp;
	}
	return b;
}


int main(){
	int n = 3;
	fib(3);
	return 0;

}
