/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NICLODSKININSTANCE_H_
#define _NICLODSKININSTANCE_H_

#include "NiSkinInstance.h"
namespace Niflib {


//#include "../gen/obj_defines.h"

class NiClodSkinInstance;
typedef Ref<NiClodSkinInstance> NiClodSkinInstanceRef;

/*!
 * NiClodSkinInstance - A copy of NISkinInstance for use with NiClod
 * meshes.
 */

class NIFLIB_API NiClodSkinInstance : public NI_CLOD_SKIN_INSTANCE_PARENT {
public:
	NiClodSkinInstance();
	~NiClodSkinInstance();
	//Run-Time Type Information
	static const Type & TypeConst() { return TYPE; }
private:
	static const Type TYPE;
public:
	virtual void Read( istream& in, list<unsigned int> & link_stack, unsigned int version, unsigned int user_version );
	virtual void Write( ostream& out, const map<NiObjectRef,unsigned int> & link_map, unsigned int version, unsigned int user_version ) const;
	virtual string asString( bool verbose = false ) const;
	virtual void FixLinks( const map<unsigned int,NiObjectRef> & objects, list<unsigned int> & link_stack, unsigned int version, unsigned int user_version );
	virtual list<NiObjectRef> GetRefs() const;
	virtual const Type & GetType() const;

protected:
	NI_CLOD_SKIN_INSTANCE_MEMBERS
private:
	void InternalRead( istream& in, list<unsigned int> & link_stack, unsigned int version, unsigned int user_version );
	void InternalWrite( ostream& out, const map<NiObjectRef,unsigned int> & link_map, unsigned int version, unsigned int user_version ) const;
	string InternalAsString( bool verbose ) const;
	void InternalFixLinks( const map<unsigned int,NiObjectRef> & objects, list<unsigned int> & link_stack, unsigned int version, unsigned int user_version );
	list<NiObjectRef> InternalGetRefs() const;
};

}
#endif
