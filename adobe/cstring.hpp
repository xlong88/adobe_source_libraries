/*
    Copyright 2005-2007 Adobe Systems Incorporated
    Distributed under the MIT License (see accompanying file LICENSE_1_0_0.txt
    or a copy at http://stlab.adobe.com/licenses.html)
*/

/*************************************************************************************************/

#ifndef ADOBE_CSTRING_HPP
#define ADOBE_CSTRING_HPP

/*************************************************************************************************/

#include <adobe/config.hpp>

/*************************************************************************************************/

namespace adobe {

/*************************************************************************************************/

inline int strcmp(const char* x, const char* y) {
    while (*x && *x == *y) {
        ++x;
        ++y;
    }
    return *x - *y;
}

/*************************************************************************************************/

} // namespace adobe

/*************************************************************************************************/

#endif

/*************************************************************************************************/