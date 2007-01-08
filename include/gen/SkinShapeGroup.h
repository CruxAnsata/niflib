/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _SKINSHAPEGROUP_H_
#define _SKINSHAPEGROUP_H_

#include "../NIF_IO.h"

// Include structures
#include "SkinShape.h"
namespace Niflib {


/*!
 * Unknown.
 */
struct NIFLIB_API SkinShapeGroup {
	/*! Default Constructor */
	SkinShapeGroup();
	/*! Copy Constructor */
	SkinShapeGroup( const SkinShapeGroup & src );
	/*! Copy Operator */
	SkinShapeGroup & operator=( const SkinShapeGroup & src );
	/*! Default Destructor */
	~SkinShapeGroup();
	/*!
	 * Counts unknown.
	 */
	mutable unsigned int numLinkPairs;
	/*!
	 * First link is a NiTriShape object.             Second link is a
	 * NiSkinInstance object.
	 */
	vector<SkinShape > linkPairs;
};

}
#endif
