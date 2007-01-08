/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "../../include/obj/NiLightDimmerController.h"
#include "../../include/obj/NiInterpolator.h"
using namespace Niflib;

//Definition of TYPE constant
const Type NiLightDimmerController::TYPE("NiLightDimmerController", &NI_LIGHT_DIMMER_CONTROLLER_PARENT::TypeConst() );

NiLightDimmerController::NiLightDimmerController() NI_LIGHT_DIMMER_CONTROLLER_CONSTRUCT {}

NiLightDimmerController::~NiLightDimmerController() {}

void NiLightDimmerController::Read( istream& in, list<unsigned int> & link_stack, unsigned int version, unsigned int user_version ) {
	InternalRead( in, link_stack, version, user_version );
}

void NiLightDimmerController::Write( ostream& out, const map<NiObjectRef,unsigned int> & link_map, unsigned int version, unsigned int user_version ) const {
	InternalWrite( out, link_map, version, user_version );
}

string NiLightDimmerController::asString( bool verbose ) const {
	return InternalAsString( verbose );
}

void NiLightDimmerController::FixLinks( const map<unsigned int,NiObjectRef> & objects, list<unsigned int> & link_stack, unsigned int version, unsigned int user_version ) {
	InternalFixLinks( objects, link_stack, version, user_version );
}

list<NiObjectRef> NiLightDimmerController::GetRefs() const {
	return InternalGetRefs();
}

const Type & NiLightDimmerController::GetType() const {
	return TYPE;
};

