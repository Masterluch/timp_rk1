## Travis
[![Build Status](https://travis-ci.com/Masterluch/timp_rk1.svg?branch=master)](https://travis-ci.com/Masterluch/timp_rk1)

## Build
'''
- cmake -H. -B_build -DCMAKE_INSTALL_PREFIX=_install -DBUILD_TESTS=ON
'''
## Test
'''
- cmake --build _build --target test -- ARGS=--verbose
'''
