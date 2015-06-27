#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
#include <sys/time.h>
#include <emmintrin.h>
#include <immintrin.h>

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

    for(i = 0; i<(size/32); i=i+32){
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
        *(pt1+i+31) = (*(pt1+i+31))^(*(pt2+i+31));
    }

    return 0;
}

int region_xor_avx(void *dst, void *src, size_t len){
    long unsigned int k;
    long unsigned int len256 = len/32;

    __m256i *_buf1 = (__m256i *)src;
    __m256i *_buf2 = (__m256i *)dst;

    for(k = 0; k < len256; ++k){
        _buf2[k] = _mm256_xor_si256(_buf1[k], _buf2[k]);
    }

    return 1;
}


int main(void){
    unsigned char  * ptr1, * ptr2;
    void  * ptr1v, * ptr2v;
    int i,j;
    int times;
    size_t buf_size;
    struct timeval begin, end;
    
    ptr1 = (unsigned char*)malloc((size_t)512*1024*1024UL);
    ptr2 = (unsigned char*)malloc((size_t)512*1024*1024UL);

    if(posix_memalign(&ptr1v, 256, (size_t)512*1024*1024UL) != 0){
        printf("Fail to alloc aligned memory!\n");
        return 0;
    }
    if(posix_memalign(&ptr2v, 256, (size_t)512*1024*1024UL) != 0){
        printf("Fail to alloc aligned memory!\n");
        return 0;
    }

    buf_size = 1024;
    printf("size\traw\t64\t128\t256\t256-avx\n");
    for(i = 0; i < 20; i++){
        if(buf_size > 1024*1024){
            printf("%luMB\t",buf_size/(1048576UL));
        }else{
            printf("%luKB\t",buf_size/(1024));
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

        gettimeofday(&begin, NULL);
        for(j = 0; j < times; ++j){
            region_xor_avx(ptr1v, ptr2v, buf_size);
        }
        gettimeofday(&end, NULL);
        printf("%.2f\t",end.tv_sec-begin.tv_sec+(end.tv_usec-begin.tv_usec)/(1000.0*1000.0));
        
        printf("\n");

        buf_size *=2;
    }

    free(ptr1);
    free(ptr2);
    free(ptr1v);
    free(ptr2v);
    return 0;
}
