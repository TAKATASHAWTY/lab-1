#define PR(x) printf("x=%u\t*x=%d\t&x=%u\n",x,*x,&x)
#define CH(y) printf("y=%u\t*y=%c\t&y=%u\n",y,*y,&y)
#define FL(z) printf("z=%u\t*z=%.2f\t&z=%u\n",z,*z,&z)
#include "Pointer.h"
using namespace std;

void pointer(void)
{
	int mas[] = { 100, 200, 300 };
	int* ptr1, * ptr2;
	ptr1 = mas;
	ptr2 = &mas[2];
	PR(ptr1);
	ptr1++;
	PR(ptr1);
	PR(ptr2);
	++ptr2;
	printf("ptr2 - ptr1 = %u\n", ptr2 - ptr1);
	cout << "\n";

	char chr[] = { '$','!','?' };
	char* ptrc1, * ptrc2;
	ptrc1 = chr;
	ptrc2 = &chr[2];
	CH(ptrc1);
	ptrc1++;
	CH(ptrc1);
	CH(ptrc2);
	++ptrc2;
	printf("ptrc2 - ptrc1 = %u\n", ptrc2 - ptrc1);
	cout << "\n";

	float flou[] = { 1.11, 2.22, 3.33 };
	float* ptrf1, * ptrf2;
	ptrf1 = flou;
	ptrf2 = &flou[2];
	FL(ptrf1);
	ptrf1++;
	FL(ptrf1);
	FL(ptrf2);
	++ptrf2;
	printf("ptrf2 - ptrf1 = %u\n", ptrf2 - ptrf1);
};