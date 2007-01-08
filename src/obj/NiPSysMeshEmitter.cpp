/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "../../include/obj/NiPSysMeshEmitter.h"
#include "../../include/obj/NiTriBasedGeom.h"
using namespace Niflib;

//Definition of TYPE constant
const Type NiPSysMeshEmitter::TYPE("NiPSysMeshEmitter", &NI_P_SYS_MESH_EMITTER_PARENT::TypeConst() );

NiPSysMeshEmitter::NiPSysMeshEmitter() NI_P_SYS_MESH_EMITTER_CONSTRUCT {}

NiPSysMeshEmitter::~NiPSysMeshEmitter() {}

void NiPSysMeshEmitter::Read( istream& in, list<unsigned int> & link_stack, unsigned int version, unsigned int user_version ) {
	InternalRead( in, link_stack, version, user_version );
}

void NiPSysMeshEmitter::Write( ostream& out, const map<NiObjectRef,unsigned int> & link_map, unsigned int version, unsigned int user_version ) const {
	InternalWrite( out, link_map, version, user_version );
}

string NiPSysMeshEmitter::asString( bool verbose ) const {
	return InternalAsString( verbose );
}

void NiPSysMeshEmitter::FixLinks( const map<unsigned int,NiObjectRef> & objects, list<unsigned int> & link_stack, unsigned int version, unsigned int user_version ) {
	InternalFixLinks( objects, link_stack, version, user_version );
}

list<NiObjectRef> NiPSysMeshEmitter::GetRefs() const {
	return InternalGetRefs();
}

const Type & NiPSysMeshEmitter::GetType() const {
	return TYPE;
};

