/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "../../include/gen/Header.h"
using namespace Niflib;

//Constructor
Header::Header() : version((unsigned int)0x04000002), endianType((byte)1), userVersion((unsigned int)0), numBlocks((unsigned int)0), userVersion2((unsigned int)0), numBlockTypes((unsigned short)0), unknownInt2((unsigned int)0) {};

//Copy Constructor
Header::Header( const Header & src ) {
	*this = src;
};

//Copy Operator
Header & Header::operator=( const Header & src ) {
	this->headerString = src.headerString;
	this->copyright = src.copyright;
	this->version = src.version;
	this->endianType = src.endianType;
	this->userVersion = src.userVersion;
	this->numBlocks = src.numBlocks;
	this->userVersion2 = src.userVersion2;
	this->creator = src.creator;
	this->exportInfo1 = src.exportInfo1;
	this->exportInfo2 = src.exportInfo2;
	this->numBlockTypes = src.numBlockTypes;
	this->blockTypes = src.blockTypes;
	this->blockTypeIndex = src.blockTypeIndex;
	this->unknownInt2 = src.unknownInt2;
	return *this;
};

//Destructor
Header::~Header() {};
void Header::Read( istream& in ) {
	NifStream( headerString, in, version );
	if ( version <= 0x03010000 ) {
		for (unsigned int i2 = 0; i2 < 3; i2++) {
			NifStream( copyright[i2], in, version );
		};
	};
	if ( version >= 0x0303000D ) {
		NifStream( version, in, version );
	};
	if ( version >= 0x14000004 ) {
		NifStream( endianType, in, version );
	};
	if ( version >= 0x0A010000 ) {
		NifStream( userVersion, in, version );
	};
	if ( version >= 0x0303000D ) {
		NifStream( numBlocks, in, version );
	};
	if ( ( version >= 0x0A000102 ) && ( version <= 0x0A000102 ) ) {
		NifStream( userVersion, in, version );
	};
	if ( version >= 0x0A010000 ) {
		if ( (userVersion != 0) ) {
			NifStream( userVersion2, in, version );
		};
	};
	if ( version >= 0x0A000102 ) {
		if ( (userVersion != 0) ) {
			NifStream( creator, in, version );
			NifStream( exportInfo1, in, version );
			NifStream( exportInfo2, in, version );
		};
	};
	if ( version >= 0x0A000100 ) {
		NifStream( numBlockTypes, in, version );
		blockTypes.resize(numBlockTypes);
		for (unsigned int i2 = 0; i2 < blockTypes.size(); i2++) {
			NifStream( blockTypes[i2], in, version );
		};
		blockTypeIndex.resize(numBlocks);
		for (unsigned int i2 = 0; i2 < blockTypeIndex.size(); i2++) {
			NifStream( blockTypeIndex[i2], in, version );
		};
		NifStream( unknownInt2, in, version );
	};
}

void Header::Write( ostream& out ) const {
	numBlockTypes = unsigned short(blockTypes.size());
	numBlocks = unsigned int(blockTypeIndex.size());
	NifStream( headerString, out, version );
	if ( version <= 0x03010000 ) {
		for (unsigned int i2 = 0; i2 < 3; i2++) {
			NifStream( copyright[i2], out, version );
		};
	};
	if ( version >= 0x0303000D ) {
		NifStream( version, out, version );
	};
	if ( version >= 0x14000004 ) {
		NifStream( endianType, out, version );
	};
	if ( version >= 0x0A010000 ) {
		NifStream( userVersion, out, version );
	};
	if ( version >= 0x0303000D ) {
		NifStream( numBlocks, out, version );
	};
	if ( ( version >= 0x0A000102 ) && ( version <= 0x0A000102 ) ) {
		NifStream( userVersion, out, version );
	};
	if ( version >= 0x0A010000 ) {
		if ( (userVersion != 0) ) {
			NifStream( userVersion2, out, version );
		};
	};
	if ( version >= 0x0A000102 ) {
		if ( (userVersion != 0) ) {
			NifStream( creator, out, version );
			NifStream( exportInfo1, out, version );
			NifStream( exportInfo2, out, version );
		};
	};
	if ( version >= 0x0A000100 ) {
		NifStream( numBlockTypes, out, version );
		for (unsigned int i2 = 0; i2 < blockTypes.size(); i2++) {
			NifStream( blockTypes[i2], out, version );
		};
		for (unsigned int i2 = 0; i2 < blockTypeIndex.size(); i2++) {
			NifStream( blockTypeIndex[i2], out, version );
		};
		NifStream( unknownInt2, out, version );
	};
}

string Header::asString( bool verbose ) const {
	stringstream out;
	unsigned int array_output_count = 0;
	numBlockTypes = unsigned short(blockTypes.size());
	numBlocks = unsigned int(blockTypeIndex.size());
	out << "  Header String:  " << headerString << endl;
	array_output_count = 0;
	for (unsigned int i1 = 0; i1 < 3; i1++) {
		if ( !verbose && ( array_output_count > MAXARRAYDUMP ) ) {
			out << "<Data Truncated. Use verbose mode to see complete listing.>" << endl;
			break;
		};
		if ( !verbose && ( array_output_count > MAXARRAYDUMP ) ) {
			break;
		};
		out << "    Copyright[" << i1 << "]:  " << copyright[i1] << endl;
		array_output_count++;
	};
	out << "  Version:  " << version << endl;
	out << "  Endian Type:  " << endianType << endl;
	out << "  User Version:  " << userVersion << endl;
	out << "  Num Blocks:  " << numBlocks << endl;
	if ( (userVersion != 0) ) {
		out << "    User Version 2:  " << userVersion2 << endl;
		out << "    Creator:  " << creator << endl;
		out << "    Export Info 1:  " << exportInfo1 << endl;
		out << "    Export Info 2:  " << exportInfo2 << endl;
	};
	out << "  Num Block Types:  " << numBlockTypes << endl;
	array_output_count = 0;
	for (unsigned int i1 = 0; i1 < blockTypes.size(); i1++) {
		if ( !verbose && ( array_output_count > MAXARRAYDUMP ) ) {
			out << "<Data Truncated. Use verbose mode to see complete listing.>" << endl;
			break;
		};
		if ( !verbose && ( array_output_count > MAXARRAYDUMP ) ) {
			break;
		};
		out << "    Block Types[" << i1 << "]:  " << blockTypes[i1] << endl;
		array_output_count++;
	};
	array_output_count = 0;
	for (unsigned int i1 = 0; i1 < blockTypeIndex.size(); i1++) {
		if ( !verbose && ( array_output_count > MAXARRAYDUMP ) ) {
			out << "<Data Truncated. Use verbose mode to see complete listing.>" << endl;
			break;
		};
		if ( !verbose && ( array_output_count > MAXARRAYDUMP ) ) {
			break;
		};
		out << "    Block Type Index[" << i1 << "]:  " << blockTypeIndex[i1] << endl;
		array_output_count++;
	};
	out << "  Unknown Int 2:  " << unknownInt2 << endl;
	return out.str();
}
