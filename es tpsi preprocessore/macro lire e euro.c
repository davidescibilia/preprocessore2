#include <stdio.h>
#define TASSO_DI_CONVERSIONE 1936.26
#define EURO(x) ((x) * TASSO_DI_CONVERSIONE)
#define LIRE(y) ((y) / TASSO_DI_CONVERSIONE)
int main (){
printf("%.2f\n",EURO(100.0));
printf("%.2f\n",LIRE(1000.0));
return 0;
}
