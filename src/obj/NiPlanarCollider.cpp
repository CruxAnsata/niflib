/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "../../include/obj/NiPlanarCollider.h"
using namespace Niflib;

//Definition of TYPE constant
const Type NiPlanarCollider::TYPE("NiPlanarCollider", &NI_PLANAR_COLLIDER_PARENT::TypeConst() );

NiPlanarCollider::NiPlanarCollider() NI_PLANAR_COLLIDER_CONSTRUCT {}

NiPlanarCollider::~NiPlanarCollider() {}

void NiPlanarCollider::Read( istream& in, list<unsigned int> & link_stack, unsigned int version, unsigned int user_version ) {
	InternalRead( in, link_stack, version, user_version );
}

void NiPlanarCollider::Write( ostream& out, const map<NiObjectRef,unsigned int> & link_map, unsigned int version, unsigned int user_version ) const {
	InternalWrite( out, link_map, version, user_version );
}

string NiPlanarCollider::asString( bool verbose ) const {
	return InternalAsString( verbose );
}

void NiPlanarCollider::FixLinks( const map<unsigned int,NiObjectRef> & objects, list<unsigned int> & link_stack, unsigned int version, unsigned int user_version ) {
	InternalFixLinks( objects, link_stack, version, user_version );
}

list<NiObjectRef> NiPlanarCollider::GetRefs() const {
	return InternalGetRefs();
}

const Type & NiPlanarCollider::GetType() const {
	return TYPE;
};

