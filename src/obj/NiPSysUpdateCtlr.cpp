/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "../../include/obj/NiPSysUpdateCtlr.h"
using namespace Niflib;

//Definition of TYPE constant
const Type NiPSysUpdateCtlr::TYPE("NiPSysUpdateCtlr", &NI_P_SYS_UPDATE_CTLR_PARENT::TypeConst() );

NiPSysUpdateCtlr::NiPSysUpdateCtlr() NI_P_SYS_UPDATE_CTLR_CONSTRUCT {}

NiPSysUpdateCtlr::~NiPSysUpdateCtlr() {}

void NiPSysUpdateCtlr::Read( istream& in, list<unsigned int> & link_stack, unsigned int version, unsigned int user_version ) {
	InternalRead( in, link_stack, version, user_version );
}

void NiPSysUpdateCtlr::Write( ostream& out, const map<NiObjectRef,unsigned int> & link_map, unsigned int version, unsigned int user_version ) const {
	InternalWrite( out, link_map, version, user_version );
}

string NiPSysUpdateCtlr::asString( bool verbose ) const {
	return InternalAsString( verbose );
}

void NiPSysUpdateCtlr::FixLinks( const map<unsigned int,NiObjectRef> & objects, list<unsigned int> & link_stack, unsigned int version, unsigned int user_version ) {
	InternalFixLinks( objects, link_stack, version, user_version );
}

list<NiObjectRef> NiPSysUpdateCtlr::GetRefs() const {
	return InternalGetRefs();
}

const Type & NiPSysUpdateCtlr::GetType() const {
	return TYPE;
};

