void upper_trimatrix_solver(double *A, double *x, double *y, int n) {

	int i, j;
	double *pta;
	double tmp;

	pta = A + n*(n+1) / 2 - 1;  
	
	for(i=n-1; i>=0; i--) {
		tmp = 0.0;
		for(j=n-1; j > i; j-- ) { 
			tmp += *pta * x[j];
			pta--;
		}

		x[i] = (y[i] - tmp) / *pta;
		pta--;
	}
}