int DemChuSo(int n) {
	int dem = 0;
	while (n > 0) {
		n /= 10;
		dem++;
	}
	return dem;
}
int UCLN(int a, int b) {
	while (a != b) {
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a;
}
