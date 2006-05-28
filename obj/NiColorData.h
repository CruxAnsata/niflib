/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NICOLORDATA_H_
#define _NICOLORDATA_H_

#include "xml_extract.h"
#include NI_COLOR_DATA_INCLUDE

/*
 * NiColorData
 */

class NiColorData;
typedef Ref<NiColorData> NiColorDataRef;

class NiColorData : public NI_COLOR_DATA_PARENT {
public:
	NiColorData();
	~NiColorData();
	//Run-Time Type Information
	static const Type TYPE;
	virtual void Read( istream& in, list<uint> link_stack, unsigned int version );
	virtual void Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const;
	virtual string asString( bool verbose = false ) const;
	virtual void FixLinks( const vector<NiObjectRef> & objects, list<uint> link_stack, unsigned int version );
private:
	NI_COLOR_DATA_MEMBERS
};
#endif