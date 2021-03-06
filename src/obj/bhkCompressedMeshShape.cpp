/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//-----------------------------------NOTICE----------------------------------//
// Some of this file is automatically filled in by a Python script.  Only    //
// add custom code in the designated areas or it will be overwritten during  //
// the next update.                                                          //
//-----------------------------------NOTICE----------------------------------//

//--BEGIN FILE HEAD CUSTOM CODE--//

//--END CUSTOM CODE--//

#include "../../include/FixLink.h"
#include "../../include/ObjectRegistry.h"
#include "../../include/NIF_IO.h"
#include "../../include/obj/bhkCompressedMeshShape.h"
#include "../../include/obj/NiAVObject.h"
#include "../../include/obj/bhkCompressedMeshShapeData.h"
using namespace Niflib;

//Definition of TYPE constant
const Type bhkCompressedMeshShape::TYPE("bhkCompressedMeshShape", &bhkShape::TYPE );

bhkCompressedMeshShape::bhkCompressedMeshShape() : target(NULL), material((HavokMaterial)0), unknownFloat1(0.0f), data(NULL) {
	//--BEGIN CONSTRUCTOR CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

bhkCompressedMeshShape::~bhkCompressedMeshShape() {
	//--BEGIN DESTRUCTOR CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

const Type & bhkCompressedMeshShape::GetType() const {
	return TYPE;
}

NiObject * bhkCompressedMeshShape::Create() {
	return new bhkCompressedMeshShape;
}

void bhkCompressedMeshShape::Read( istream& in, list<unsigned int> & link_stack, const NifInfo & info ) {
	//--BEGIN PRE-READ CUSTOM CODE--//

	//--END CUSTOM CODE--//

	unsigned int block_num;
	bhkShape::Read( in, link_stack, info );
	NifStream( block_num, in, info );
	link_stack.push_back( block_num );
	NifStream( material, in, info );
	NifStream( unknownFloat1, in, info );
	for (unsigned int i1 = 0; i1 < 8; i1++) {
		NifStream( unknown8Bytes[i1], in, info );
	};
	for (unsigned int i1 = 0; i1 < 8; i1++) {
		NifStream( unknownFloats[i1], in, info );
	};
	NifStream( block_num, in, info );
	link_stack.push_back( block_num );

	//--BEGIN POST-READ CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

void bhkCompressedMeshShape::Write( ostream& out, const map<NiObjectRef,unsigned int> & link_map, list<NiObject *> & missing_link_stack, const NifInfo & info ) const {
	//--BEGIN PRE-WRITE CUSTOM CODE--//

	//--END CUSTOM CODE--//

	bhkShape::Write( out, link_map, missing_link_stack, info );
	if ( info.version < VER_3_3_0_13 ) {
		WritePtr32( &(*target), out );
	} else {
		if ( target != NULL ) {
			map<NiObjectRef,unsigned int>::const_iterator it = link_map.find( StaticCast<NiObject>(target) );
			if (it != link_map.end()) {
				NifStream( it->second, out, info );
				missing_link_stack.push_back( NULL );
			} else {
				NifStream( 0xFFFFFFFF, out, info );
				missing_link_stack.push_back( target );
			}
		} else {
			NifStream( 0xFFFFFFFF, out, info );
			missing_link_stack.push_back( NULL );
		}
	}
	NifStream( material, out, info );
	NifStream( unknownFloat1, out, info );
	for (unsigned int i1 = 0; i1 < 8; i1++) {
		NifStream( unknown8Bytes[i1], out, info );
	};
	for (unsigned int i1 = 0; i1 < 8; i1++) {
		NifStream( unknownFloats[i1], out, info );
	};
	if ( info.version < VER_3_3_0_13 ) {
		WritePtr32( &(*data), out );
	} else {
		if ( data != NULL ) {
			map<NiObjectRef,unsigned int>::const_iterator it = link_map.find( StaticCast<NiObject>(data) );
			if (it != link_map.end()) {
				NifStream( it->second, out, info );
				missing_link_stack.push_back( NULL );
			} else {
				NifStream( 0xFFFFFFFF, out, info );
				missing_link_stack.push_back( data );
			}
		} else {
			NifStream( 0xFFFFFFFF, out, info );
			missing_link_stack.push_back( NULL );
		}
	}

	//--BEGIN POST-WRITE CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

std::string bhkCompressedMeshShape::asString( bool verbose ) const {
	//--BEGIN PRE-STRING CUSTOM CODE--//

	//--END CUSTOM CODE--//

	stringstream out;
	unsigned int array_output_count = 0;
	out << bhkShape::asString();
	out << "  Target:  " << target << endl;
	out << "  Material:  " << material << endl;
	out << "  Unknown Float 1:  " << unknownFloat1 << endl;
	array_output_count = 0;
	for (unsigned int i1 = 0; i1 < 8; i1++) {
		if ( !verbose && ( array_output_count > MAXARRAYDUMP ) ) {
			out << "<Data Truncated. Use verbose mode to see complete listing.>" << endl;
			break;
		};
		if ( !verbose && ( array_output_count > MAXARRAYDUMP ) ) {
			break;
		};
		out << "    Unknown 8 Bytes[" << i1 << "]:  " << unknown8Bytes[i1] << endl;
		array_output_count++;
	};
	array_output_count = 0;
	for (unsigned int i1 = 0; i1 < 8; i1++) {
		if ( !verbose && ( array_output_count > MAXARRAYDUMP ) ) {
			out << "<Data Truncated. Use verbose mode to see complete listing.>" << endl;
			break;
		};
		if ( !verbose && ( array_output_count > MAXARRAYDUMP ) ) {
			break;
		};
		out << "    Unknown Floats[" << i1 << "]:  " << unknownFloats[i1] << endl;
		array_output_count++;
	};
	out << "  Data:  " << data << endl;
	return out.str();

	//--BEGIN POST-STRING CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

void bhkCompressedMeshShape::FixLinks( const map<unsigned int,NiObjectRef> & objects, list<unsigned int> & link_stack, list<NiObjectRef> & missing_link_stack, const NifInfo & info ) {
	//--BEGIN PRE-FIXLINKS CUSTOM CODE--//

	//--END CUSTOM CODE--//

	bhkShape::FixLinks( objects, link_stack, missing_link_stack, info );
	target = FixLink<NiAVObject>( objects, link_stack, missing_link_stack, info );
	data = FixLink<bhkCompressedMeshShapeData>( objects, link_stack, missing_link_stack, info );

	//--BEGIN POST-FIXLINKS CUSTOM CODE--//

	//--END CUSTOM CODE--//
}

std::list<NiObjectRef> bhkCompressedMeshShape::GetRefs() const {
	list<Ref<NiObject> > refs;
	refs = bhkShape::GetRefs();
	if ( data != NULL )
		refs.push_back(StaticCast<NiObject>(data));
	return refs;
}

std::list<NiObject *> bhkCompressedMeshShape::GetPtrs() const {
	list<NiObject *> ptrs;
	ptrs = bhkShape::GetPtrs();
	if ( target != NULL )
		ptrs.push_back((NiObject *)(target));
	return ptrs;
}

//--BEGIN MISC CUSTOM CODE--//

//--END CUSTOM CODE--//
