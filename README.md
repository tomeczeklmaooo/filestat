# filestat
A simple program to show basic information about a file.

## Installation
1. Get the source code (either `git clone` or download the `.zip`)
2. Compile using the included bash script:
```
make.sh
```
or if you don't like bash scripts:
```
gcc src/*.c -o bin/filestat -Wall -Werror -Wextra -std=c23
```
> Make sure the `bin` directory exists before compiling

## Usage
```
filestat [filename]
```
Substitute `[filename]` with the name of the file you want to check.