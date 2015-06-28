# AVT
Auto Vectorization Test by XOR two regions (4GB)

##Environment:
> GCC version 4.8.4 (Ubuntu 4.8.4-2ubuntu1~14.04) 

> CPU: Intel i7-4700K

##Result(seconds):
**1. Method** XOR two regions of data with size of 4GB. The minimum unit to XOR are 1Byte(raw), 8Bytes(64), 16Bytes(128), 32Bytes(256) and 32Bytes in the help of Intel AVX2 instruction. 
> **no optimizaiton flags**

| raw   | 64    | 128   | 256   | 256-avx
|:------|:------|:------|:------|:-------
| 10.55 | 0.64  | 0.31  | 0.16  | 0.40 (branchs are the bottleneck)

> **-O1**

| raw   | 64    | 128   | 256   | 256-avx
|:------|:------|:------|:------|:-------
| 10.56 | 0.62  | 0.31  | 0.16  | 0.40

> **-O3 -g -Wall -Wextra -mmmx -msse -DINTEL_SSE -msse2 -DINTEL_SSE2 -msse3 -DINTEL_SSE3 -mssse3 -msse4.1 -DINTEL_SSE4 -msse4.2 -DINTEL_SSE4 -mavx -mavx2 -fPIC**

| raw   | 64    | 128   | 256   | 256-avx
|:------|:------|:------|:------|:-------
| 10.54 | 0.63  | 0.31  | 0.16  | 0.40

**2. Method** XOR two regions of data with size from 4KB to 512MB, and the minimum unit to XOR is 4KB.
> **-O3 -g -Wall -Wextra -mmmx -msse -DINTEL_SSE -msse2 -DINTEL_SSE2 -msse3 -DINTEL_SSE3 -mssse3 -msse4.1 -DINTEL_SSE4 -msse4.2 -DINTEL_SSE4 -mavx -mavx2 -fPIC**

| size  | raw	  | avx
|:------|:------|:------
| 4KB	  | 0.692	| 0.034	
| 8KB	  | 0.342	| 0.017	
| 16KB	| 0.171	| 0.016	
| 32KB	| 0.085	| 0.016	
| 64KB	| 0.043	| 0.016	
| 128KB	| 0.021	| 0.016	
| 256KB	| 0.011	| 0.015	
| 512KB	| 0.011	| 0.017	
| 1MB	  | 0.011	| 0.017	
| 2MB	  | 0.011	| 0.017	
| 4MB	  | 0.011	| 0.018	
| 8MB	  | 0.011	| 0.019	
| 16MB	| 0.011	| 0.019	
| 32MB	| 0.011	| 0.020	
| 64MB	| 0.011	| 0.020	
| 128MB	| 0.011	| 0.024	
| 256MB	| 0.011	| 0.028	
| 512MB	| 0.011	| 0.030
