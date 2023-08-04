# C CPP Binary Packaging

This is a small repo to explore the different possibilities for how to package binary files.

Refer to the makefile for recipes

## Why?

For desktop environments, C and C++ projects have the opportunity to use dynamic linking to reduce the size of the original binary.

```
sudo apt-get install python-dev
```

Will install a global library for packages to use to interact with the python library. For packages that
are integral to the operating system. This reduces duplication. Allows for packages to use the system specific defaults.

## What is here?

* ./makefile - the most interesting part. Flags needed to compile
* /bin - has example of objdump and other utilities
* ./src basic c and C++ files to compile
* ./lib the output folder
