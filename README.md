# C++-New-Programming
C++ is an object-oriented programming language which gives a clear structure to programs and allows code to be reused, lowering development costs. C++ is portable and can be used to develop applications that can be adapted to multiple platforms. C++ is fun and easy to learn! Paradigms: Object-oriented programming Designed by: Bjarne Stroustrup
# BY VISHAL PANDEY

# Requirements

  * g++ v5.4 or newer
  * Boost 1.58.0 or newer
    * The `boost/multiprecision/float128.hpp` header must be available
  * Make

## Installed Boost Packages

For development the following boost packages were installed.

```
libboost-date-time1.58.0/xenial-updates,now 1.58.0+dfsg-5ubuntu3.1 amd64 [installed]
libboost-filesystem1.58.0/xenial-updates,now 1.58.0+dfsg-5ubuntu3.1 amd64 [installed]
libboost-iostreams1.58.0/xenial-updates,now 1.58.0+dfsg-5ubuntu3.1 amd64 [installed]
libboost-python1.58.0/xenial-updates,now 1.58.0+dfsg-5ubuntu3.1 amd64 [installed,automatic]
libboost-regex1.58.0/xenial-updates,now 1.58.0+dfsg-5ubuntu3.1 amd64 [installed,automatic]
libboost-system1.58.0/xenial-updates,now 1.58.0+dfsg-5ubuntu3.1 amd64 [installed]
libboost-test-dev/xenial,now 1.58.0.1ubuntu1 amd64 [installed]
libboost-test1.58-dev/xenial-updates,now 1.58.0+dfsg-5ubuntu3.1 amd64 [installed,automatic]
libboost-test1.58.0/xenial-updates,now 1.58.0+dfsg-5ubuntu3.1 amd64 [installed,automatic]
libboost1.58-dev/xenial-updates,now 1.58.0+dfsg-5ubuntu3.1 amd64 [installed,automatic]
libboost1.58-doc/xenial-updates,xenial-updates,now 1.58.0+dfsg-5ubuntu3.1 all [installed]
```

This listing was obtained by running `apt list --installed | grep boost`.


# Compilation

The code can be compiled with the provided makefile using the standard `make`
command.

If compiling the code manually, or integrating into a larger program, include
the following flags:

```
FLAGS=-std=c++17 -fsanitize=address -fuse-ld=gold -Wall -MMD \
      -fext-numeric-literals -lquadmath #-O3
```

Note that flag `-fuse-ld=gold` is only required on certain Ubuntu systems due
to a know bug with g++ 5.x.


# Sample Execution & Output

If run without command line arguments, using

```
./precisionEstimate
```

the following usage message will be displayed.

```
Usage: ./precisionEstimate numExecs
```

If run using 

```
./precisionEstimate 100000000
```

output *simliar* to

```
   0 secs | 1.19209e-07
   1 secs | 2.22045e-16
  17 secs | 1.92593e-34
```

will  be displayed. Note that the precision estimates will vary by
architecture/system.
