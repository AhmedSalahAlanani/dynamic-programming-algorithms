# Longest Increasing Subsequence (LIS)
## Description
**LIS:** is a dynamic programming algorithm where for a given sequence a1, a2, ..., an, find the length of the longest increasing subsequence ai1, ai2, ..., aik
##### Constraints:
* i1< i2 < ... < ik
* ai1 < ai2 < ... < aik

## 
In this repo, I run two examples to show how this algorithm works.
* LIS [3 1 8 2 5]
* LIS [3 1 8 2 5]

## Project structure
<pre>
.
├── src               # the main source folder
│   ├── lis           # LIS dynamic programming algorithm implementation
│   ├── node          # Node implementation used for the algorithm
│   └── main.cpp      # project main file
├── README.md
└── CMakeLists.txt
</pre>

All sources and header files are located in `src`, examples are run from `main.cpp`.

## Building
- Run the following commands in bash:<br />
$ cd 1-lis <br />
$ mkdir build && cd build <br />
$ cmake .. <br />
$ make -j <br />

## Specific libraries
No