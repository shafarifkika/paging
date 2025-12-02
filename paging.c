#include <stdio.h>

int main() {
    double mem_access = 200;   
    double hit_rate = 0.75;  

    double paging_no_tlb = 2 * mem_access;
    double eat = (hit_rate * mem_access) + 
                 ((1 - hit_rate) * (2 * mem_access));

    printf(" PAGING TANPA TLB \n");
    printf("Waktu akses = %.0f ns\n\n", paging_no_tlb);

    printf(" PAGING DENGAN TLB \n");
    printf("Hit rate     = %.2f\n", hit_rate);
    printf("Effective Access Time = %.2f ns\n", eat);

    return 0;
}
