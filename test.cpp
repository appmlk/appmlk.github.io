int function(int input) {
	int i, j, n = 1, m = 1;
	int sum = 0;
	for (i = 1; i <= input; i++) {
		for (j = 1; j <= i; j++) {
			if (j == i) {
				n = m * j;   m = n;
			}
		}
		sum += n;
	}
	return sum;
}
