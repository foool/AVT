# AVT
Auto Vectorization Test by XOR two regions (4GB)

##Environment:
> GCC version 4.8.4 (Ubuntu 4.8.4-2ubuntu1~14.04) 

> CPU: Intel i7-4700K

##Result(seconds):
**no optimizaiton flags **

| raw   | 64    | 128   | 256   | 256-avx
|:------|:------|:------|:------|:-------
| 10.55 | 0.64  | 0.31  | 0.16  |: 0.40 (branchs are the bottleneck)

**-O1**

| raw   | 64    | 128   | 256   | 256-avx
|:------|:------|:------|:------|:-------
| 10.56 | 0.62  | 0.31  | 0.16  |: 0.40

**-O3 -g -Wall -Wextra -mmmx -msse -DINTEL_SSE -msse2 -DINTEL_SSE2 -msse3 -DINTEL_SSE3 -mssse3 -msse4.1 -DINTEL_SSE4 -msse4.2 -DINTEL_SSE4 -mavx -mavx2 -fPIC**

| raw   | 64    | 128   | 256   | 256-avx
|:------|:------|:------|:------|:-------
| 10.54 | 0.63  | 0.31  | 0.16  |: 0.40
