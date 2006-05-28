/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "NiPSysColorModifier.h"
#include "NiNode.h"
#include "NiColorData.h"

//Definition of TYPE constant
const Type NiPSysColorModifier::TYPE("NiPSysColorModifier", &NI_P_SYS_COLOR_MODIFIER_PARENT::TYPE );

NiPSysColorModifier::NiPSysColorModifier() NI_P_SYS_COLOR_MODIFIER_CONSTRUCT {}

NiPSysColorModifier::~NiPSysColorModifier() {}

void NiPSysColorModifier::Read( istream& in, list<uint> link_stack, unsigned int version ) {
	NI_P_SYS_COLOR_MODIFIER_READ
}

void NiPSysColorModifier::Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const {
	NI_P_SYS_COLOR_MODIFIER_WRITE
}

string NiPSysColorModifier::asString( bool verbose ) const {
	NI_P_SYS_COLOR_MODIFIER_STRING
}

void NiPSysColorModifier::FixLinks( const vector<NiObjectRef> & objects, list<uint> link_stack, unsigned int version ) {
	NI_P_SYS_COLOR_MODIFIER_FIXLINKS
}
