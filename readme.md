# Pre-analysis program for DT5702 raw file (no time info.)

Meng Lyu (2024.6.20)

This simple program is designed for pre-processing raw file from DT5702, but it
discards the time information.

### How to use it
Compile the program as usual (cmake first, then make), then an executable `preAna_nt`
should show up (nt means no time information). Then run:
```
./preAna_nt mppc_xxx.root
```
A file with name `mppcjpnt_xxx.root` will appear in the same directory as the `mppc_xxx.root`,
which is the output file for further analysis.

### How to analysis the output file
We provide here a simple analysis script `simpAna.C`. Please follow this script to develop 
your own analysis code.