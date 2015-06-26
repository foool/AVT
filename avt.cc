#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>

int xor_raw(unsigned char *pt1, unsigned char *pt2, size_t size){
    size_t i;

    for(i = 0; i<size; i++){
        *(pt1+i) = (*(pt1+i))^(*(pt2+i));
    }

    return 0;
}

int xor_aligned_64(unsigned char *pt1, unsigned char *pt2, size_t size){
    size_t i;

    for(i = 0; i<(size/8); i=i+8){
        *(pt1+i) = (*(pt1+i))^(*(pt2+i));
        *(pt1+i+1) = (*(pt1+i+1))^(*(pt2+i+1));
        *(pt1+i+2) = (*(pt1+i+2))^(*(pt2+i+2));
        *(pt1+i+3) = (*(pt1+i+3))^(*(pt2+i+3));
        *(pt1+i+4) = (*(pt1+i+4))^(*(pt2+i+4));
        *(pt1+i+5) = (*(pt1+i+5))^(*(pt2+i+5));
        *(pt1+i+6) = (*(pt1+i+6))^(*(pt2+i+6));
        *(pt1+i+7) = (*(pt1+i+7))^(*(pt2+i+7));
    }

    return 0;
}

int xor_aligned_128(unsigned char *pt1, unsigned char *pt2, size_t size){
    size_t i;

    for(i = 0; i<(size/16); i=i+16){
        *(pt1+i) = (*(pt1+i))^(*(pt2+i));
        *(pt1+i+1) = (*(pt1+i+1))^(*(pt2+i+1));
        *(pt1+i+2) = (*(pt1+i+2))^(*(pt2+i+2));
        *(pt1+i+3) = (*(pt1+i+3))^(*(pt2+i+3));
        *(pt1+i+4) = (*(pt1+i+4))^(*(pt2+i+4));
        *(pt1+i+5) = (*(pt1+i+5))^(*(pt2+i+5));
        *(pt1+i+6) = (*(pt1+i+6))^(*(pt2+i+6));
        *(pt1+i+7) = (*(pt1+i+7))^(*(pt2+i+7));
        *(pt1+i+8) = (*(pt1+i+8))^(*(pt2+i+8));
        *(pt1+i+9) = (*(pt1+i+9))^(*(pt2+i+9));
        *(pt1+i+10) = (*(pt1+i+10))^(*(pt2+i+10));
        *(pt1+i+11) = (*(pt1+i+11))^(*(pt2+i+11));
        *(pt1+i+12) = (*(pt1+i+12))^(*(pt2+i+12));
        *(pt1+i+13) = (*(pt1+i+13))^(*(pt2+i+13));
        *(pt1+i+14) = (*(pt1+i+14))^(*(pt2+i+14));
        *(pt1+i+15) = (*(pt1+i+15))^(*(pt2+i+15));
    }

    return 0;
}

int xor_aligned_256(unsigned char *pt1, unsigned char *pt2, size_t size){
    size_t i;

    for(i = 0; i<(size/32); i=i+16){
        *(pt1+i) = (*(pt1+i))^(*(pt2+i));
        *(pt1+i+1) = (*(pt1+i+1))^(*(pt2+i+1));
        *(pt1+i+2) = (*(pt1+i+2))^(*(pt2+i+2));
        *(pt1+i+3) = (*(pt1+i+3))^(*(pt2+i+3));
        *(pt1+i+4) = (*(pt1+i+4))^(*(pt2+i+4));
        *(pt1+i+5) = (*(pt1+i+5))^(*(pt2+i+5));
        *(pt1+i+6) = (*(pt1+i+6))^(*(pt2+i+6));
        *(pt1+i+7) = (*(pt1+i+7))^(*(pt2+i+7));
        *(pt1+i+8) = (*(pt1+i+8))^(*(pt2+i+8));
        *(pt1+i+9) = (*(pt1+i+9))^(*(pt2+i+9));
        *(pt1+i+10) = (*(pt1+i+10))^(*(pt2+i+10));
        *(pt1+i+11) = (*(pt1+i+11))^(*(pt2+i+11));
        *(pt1+i+12) = (*(pt1+i+12))^(*(pt2+i+12));
        *(pt1+i+13) = (*(pt1+i+13))^(*(pt2+i+13));
        *(pt1+i+14) = (*(pt1+i+14))^(*(pt2+i+14));
        *(pt1+i+15) = (*(pt1+i+15))^(*(pt2+i+15));
        *(pt1+i+16) = (*(pt1+i+16))^(*(pt2+i+16));
        *(pt1+i+17) = (*(pt1+i+17))^(*(pt2+i+17));
        *(pt1+i+18) = (*(pt1+i+18))^(*(pt2+i+18));
        *(pt1+i+19) = (*(pt1+i+19))^(*(pt2+i+19));
        *(pt1+i+20) = (*(pt1+i+20))^(*(pt2+i+20));
        *(pt1+i+21) = (*(pt1+i+21))^(*(pt2+i+21));
        *(pt1+i+22) = (*(pt1+i+22))^(*(pt2+i+22));
        *(pt1+i+23) = (*(pt1+i+23))^(*(pt2+i+23));
        *(pt1+i+24) = (*(pt1+i+24))^(*(pt2+i+24));
        *(pt1+i+25) = (*(pt1+i+25))^(*(pt2+i+25));
        *(pt1+i+26) = (*(pt1+i+26))^(*(pt2+i+26));
        *(pt1+i+27) = (*(pt1+i+27))^(*(pt2+i+27));
        *(pt1+i+28) = (*(pt1+i+28))^(*(pt2+i+28));
        *(pt1+i+29) = (*(pt1+i+29))^(*(pt2+i+29));
        *(pt1+i+30) = (*(pt1+i+30))^(*(pt2+i+30));
    }

    return 0;
}




int main(void){
    unsigned char  * ptr1, * ptr2;
    int i,j;
    int times;
    size_t buf_size;
    struct timeval begin, end;
    
    ptr1 = (unsigned char*)malloc((size_t)1024*1024*1024UL);
    ptr2 = (unsigned char*)malloc((size_t)1024*1024*1024UL);

    buf_size = 1024;
    printf("size\traw\t64\t128\t256\n");
    for(i = 0; i < 20; i++){
        if(buf_size > 1024*1024){
            printf("%dMB\t",buf_size/(1048576UL));
        }else{
            printf("%dKB\t",buf_size/(1024));
        }
        times = ((size_t)4*1024*1024*1024UL)/buf_size;
        gettimeofday(&begin, NULL);
        for(j = 0; j < times; ++j){
            xor_raw(ptr1, ptr2, buf_size);
        }
        gettimeofday(&end, NULL);
        printf("%.2f\t",end.tv_sec-begin.tv_sec+(end.tv_usec-begin.tv_usec)/(1000.0*1000.0));

        gettimeofday(&begin, NULL);
        for(j = 0; j < times; ++j){
            xor_aligned_64(ptr1, ptr2, buf_size);
        }
        gettimeofday(&end, NULL);
        printf("%.2f\t",end.tv_sec-begin.tv_sec+(end.tv_usec-begin.tv_usec)/(1000.0*1000.0));

        gettimeofday(&begin, NULL);
        for(j = 0; j < times; ++j){
            xor_aligned_128(ptr1, ptr2, buf_size);
        }
        gettimeofday(&end, NULL);
        printf("%.2f\t",end.tv_sec-begin.tv_sec+(end.tv_usec-begin.tv_usec)/(1000.0*1000.0));

        gettimeofday(&begin, NULL);
        for(j = 0; j < times; ++j){
            xor_aligned_256(ptr1, ptr2, buf_size);
        }
        gettimeofday(&end, NULL);
        printf("%.2f\t",end.tv_sec-begin.tv_sec+(end.tv_usec-begin.tv_usec)/(1000.0*1000.0));

        printf("\n");

        buf_size *=2;
    }

    return 0;
}
