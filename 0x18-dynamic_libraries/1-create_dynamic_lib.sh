#!/bin/bash
gcc *.c -c -fPIC
cc *.o -shared -o liball.so

