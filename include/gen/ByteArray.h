/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _BYTEARRAY_H_
#define _BYTEARRAY_H_

#include "../NIF_IO.h"

namespace Niflib {


/*!
 * An array of bytes.
 */
struct NIFLIB_API ByteArray {
	/*! Default Constructor */
	ByteArray();
	/*! Copy Constructor */
	ByteArray( const ByteArray & src );
	/*! Copy Operator */
	ByteArray & operator=( const ByteArray & src );
	/*! Default Destructor */
	~ByteArray();
	/*!
	 * The number of bytes in this array
	 */
	mutable unsigned int dataSize;
	/*!
	 * The bytes which make up the array
	 */
	vector<byte > data;
};

}
#endif
