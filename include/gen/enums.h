/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */
#ifndef _NIF_ENUMS_H_
#define _NIF_ENUMS_H_

//---THIS FILE WAS AUTOMATICALLY GENERATED.  DO NOT EDIT---//

//To change this file, alter the niftools/docsys/gen_niflib.py Python script.

#include <iostream>
using namespace std;

namespace Niflib {

/*! The type of force?  May be more valid values. */
enum ForceType {
	FORCE_PLANAR = 0, /*!< FORCE_PLANAR */
	FORCE_SPHERICAL = 1, /*!< FORCE_SPHERICAL */
	FORCE_UNKNOWN = 2, /*!< FORCE_UNKNOWN */
};

ostream & operator<<( ostream & out, ForceType const & val );

enum CollisionMode {
	CM_USE_OBB = 0, /*!< Use Bounding Box */
	CM_USE_TRI = 1, /*!< Use Triangles */
	CM_USE_ABV = 2, /*!< Use Alternate Bounding Volumes */
	CM_NOTEST = 3, /*!< No Test */
	CM_USE_NIBOUND = 4, /*!< Use NiBound */
};

ostream & operator<<( ostream & out, CollisionMode const & val );

enum DeactivatorType {
	DEACTIVATOR_INVALID = 0, /*!< Invalid */
	DEACTIVATOR_NEVER = 1, /*!< This will force the rigid body to never deactivate. */
	DEACTIVATOR_SPATIAL = 2, /*!< Tells Havok to use a spatial deactivation scheme. This makes use of high and low frequencies of positional motion to determine when deactivation should occur. */
};

ostream & operator<<( ostream & out, DeactivatorType const & val );

enum hkResponseType {
	RESPONSE_INVALID = 0, /*!< Invalid Response */
	RESPONSE_SIMPLE_CONTACT = 1, /*!< Do normal collision resolution */
	RESPONSE_REPORTING = 2, /*!< No collision resolution is performed but listeners are called */
	RESPONSE_NONE = 3, /*!< Do nothing, ignore all the results. */
};

ostream & operator<<( ostream & out, hkResponseType const & val );

/*! Determines how a NiTextureTransformController animates the UV coordinates. */
enum TexTransform {
	TT_TRANSLATE_U = 0, /*!< Means this controller moves the U texture cooridnates. */
	TT_TRANSLATE_V = 1, /*!< Means this controller moves the V texture cooridnates. */
	TT_ROTATE = 2, /*!< Means this controller roates the UV texture cooridnates. */
	TT_SCALE_U = 3, /*!< Means this controller scales the U texture cooridnates. */
	TT_SCALE_V = 4, /*!< Means this controller scales the V texture cooridnates. */
};

ostream & operator<<( ostream & out, TexTransform const & val );

/*! A material, used by havok shape objects. */
enum HavokMaterial {
	HAV_MAT_STONE = 0, /*!< Stone */
	HAV_MAT_CLOTH = 1, /*!< Cloth */
	HAV_MAT_DIRT = 2, /*!< Dirt */
	HAV_MAT_GLASS = 3, /*!< Glass */
	HAV_MAT_GRASS = 4, /*!< Grass */
	HAV_MAT_METAL = 5, /*!< Metal */
	HAV_MAT_ORGANIC = 6, /*!< Organic */
	HAV_MAT_SKIN = 7, /*!< Skin */
	HAV_MAT_WATER = 8, /*!< Water */
	HAV_MAT_WOOD = 9, /*!< Wood */
	HAV_MAT_HEAVY_STONE = 10, /*!< Heavy Stone */
	HAV_MAT_HEAVY_METAL = 11, /*!< Heavy Metal */
	HAV_MAT_HEAVY_WOOD = 12, /*!< Heavy Wood */
	HAV_MAT_CHAIN = 13, /*!< Chain */
	HAV_MAT_SNOW = 14, /*!< Snow */
	HAV_MAT_STONE_STAIRS = 15, /*!< Stone Stairs */
	HAV_MAT_CLOTH_STAIRS = 16, /*!< Cloth Stairs */
	HAV_MAT_DIRT_STAIRS = 17, /*!< Dirt Stairs */
	HAV_MAT_GLASS_STAIRS = 18, /*!< Glass Stairs */
	HAV_MAT_GRASS_STAIRS = 19, /*!< Grass Stairs */
	HAV_MAT_METAL_STAIRS = 20, /*!< Metal Stairs */
	HAV_MAT_ORGANIC_STAIRS = 21, /*!< Organic Stairs */
	HAV_MAT_SKIN_STAIRS = 22, /*!< Skin Stairs */
	HAV_MAT_WATER_STAIRS = 23, /*!< Water Stairs */
	HAV_MAT_WOOD_STAIRS = 24, /*!< Wood Stairs */
	HAV_MAT_HEAVY_STONE_STAIRS = 25, /*!< Heavy Stone Stairs */
	HAV_MAT_HEAVY_METAL_STAIRS = 26, /*!< Heavy Metal Stairs */
	HAV_MAT_HEAVY_WOOD_STAIRS = 27, /*!< Heavy Wood Stairs */
	HAV_MAT_CHAIN_STAIRS = 28, /*!< Chain Stairs */
	HAV_MAT_SNOW_STAIRS = 29, /*!< Snow Stairs */
	HAV_MAT_ELEVATOR = 30, /*!< Elevator */
	HAV_MAT_RUBBER = 31, /*!< Rubber */
};

ostream & operator<<( ostream & out, HavokMaterial const & val );

enum EndianType {
	ENDIAN_BIG = 0, /*!< The numbers are stored in big endian format, such as those used by PowerPC Mac processors. */
	ENDIAN_LITTLE = 1, /*!< The numbers are stored in little endian format, such as those used by Intel and AMD x86 processors. */
};

ostream & operator<<( ostream & out, EndianType const & val );

/*!
 * Controls the way the a particle mesh emitter determines the starting speed and
 * direction of the particles that are emitted.
 */
enum VelocityType {
	VELOCITY_USE_NORMALS = 0, /*!< Uses the normals of the meshes to determine staring velocity. */
	VELOCITY_USE_RANDOM = 1, /*!< Starts particles with a random velocity. */
	VELOCITY_USE_DIRECTION = 2, /*!< Uses the emission axis to determine initial particle direction? */
};

ostream & operator<<( ostream & out, VelocityType const & val );

/*! Determines how a data stream is used? */
enum DataStreamUsage {
	USAGE_VERTEX_INDEX = 0, /*!< USAGE_VERTEX_INDEX */
	USAGE_VERTEX = 1, /*!< USAGE_VERTEX */
	USAGE_SHADER_CONSTANT = 2, /*!< USAGE_SHADER_CONSTANT */
	USAGE_USER = 3, /*!< USAGE_USER */
};

ostream & operator<<( ostream & out, DataStreamUsage const & val );

/*! This enum contains the options for doing stencil buffer tests. */
enum StencilCompareMode {
	TEST_NEVER = 0, /*!< Test will allways return false. Nothing is drawn at all. */
	TEST_LESS = 1, /*!< The test will only succeed if the pixel is nearer than the previous pixel. */
	TEST_EQUAL = 2, /*!< Test will only succeed if the z value of the pixel to be drawn is equal to the value of the previous drawn pixel. */
	TEST_LESS_EQUAL = 3, /*!< Test will succeed if the z value of the pixel to be drawn is smaller than or equal to the value in the Stencil Buffer. */
	TEST_GREATER = 4, /*!< Opposite of TEST_LESS. */
	TEST_NOT_EQUAL = 5, /*!< Test will succeed if the z value of the pixel to be drawn is NOT equal to the value of the previously drawn pixel. */
	TEST_GREATER_EQUAL = 6, /*!< Opposite of TEST_LESS_EQUAL. */
	TEST_ALWAYS = 7, /*!< Test will allways succeed. The Stencil Buffer value is ignored. */
};

ostream & operator<<( ostream & out, StencilCompareMode const & val );

/*!
 * Specifies the availiable texture filter modes.  That is, the way pixels within a
 * texture are blended together when textures are displayed on the screen at a size
 * other than their original dimentions.
 */
enum TexFilterMode {
	FILTER_NEAREST = 0, /*!< Simply uses the nearest pixel.  Very grainy. */
	FILTER_BILERP = 1, /*!< Uses bilinear filtering. */
	FILTER_TRILERP = 2, /*!< Uses trilinear filtering. */
	FILTER_NEAREST_MIPNEAREST = 3, /*!< Uses the nearest pixel from the mipmap that is closest to the display size. */
	FILTER_NEAREST_MIPLERP = 4, /*!< Blends the two mipmaps closest to the display size linearly, and then uses the nearest pixel from the result. */
	FILTER_BILERP_MIPNEAREST = 5, /*!< Uses the closest mipmap to the display size and then uses bilinear filtering on the pixels. */
};

ostream & operator<<( ostream & out, TexFilterMode const & val );

/*! Determines symetry type used by NiPSysBombModifier. */
enum SymmetryType {
	SPHERICAL_SYMMETRY = 0, /*!< Spherical Symmetry. */
	CYLINDRICAL_SYMMETRY = 1, /*!< Cylindrical Symmetry. */
	PLANAR_SYMMETRY = 2, /*!< Planar Symmetry. */
};

ostream & operator<<( ostream & out, SymmetryType const & val );

/*! An unsigned 32-bit integer, describing how vertex colors influence lighting. */
enum LightMode {
	LIGHT_MODE_EMISSIVE = 0, /*!< Emissive. */
	LIGHT_MODE_EMI_AMB_DIF = 1, /*!< Emissive + Ambient + Diffuse. (Default) */
};

ostream & operator<<( ostream & out, LightMode const & val );

/*! An unsigned 32-bit integer, describing how mipmaps are handled in a texture. */
enum MipMapFormat {
	MIP_FMT_NO = 0, /*!< Texture does not use mip maps. */
	MIP_FMT_YES = 1, /*!< Texture uses mip maps. */
	MIP_FMT_DEFAULT = 2, /*!< Use default setting. */
};

ostream & operator<<( ostream & out, MipMapFormat const & val );

/*!
 * This enum defines the various actions used in conjunction with the stencil
 * buffer.
 *         For a detailed description of the individual options please refer to the
 * OpenGL docs.
 */
enum StencilAction {
	ACTION_KEEP = 0, /*!< ACTION_KEEP */
	ACTION_ZERO = 1, /*!< ACTION_ZERO */
	ACTION_REPLACE = 2, /*!< ACTION_REPLACE */
	ACTION_INCREMENT = 3, /*!< ACTION_INCREMENT */
	ACTION_DECREMENT = 4, /*!< ACTION_DECREMENT */
	ACTION_INVERT = 5, /*!< ACTION_INVERT */
};

ostream & operator<<( ostream & out, StencilAction const & val );

/*! Specifies the time when an application must syncronize for some reason. */
enum SyncPoint {
	SYNC_ANY = 0x8000, /*!< Value used when no specific sync point is desired. */
	SYNC_UPDATE = 0x8010, /*!< Synchronize when an object is updated. */
	SYNC_POST_UPDATE = 0x8020, /*!< Synchronize when an entire scene graph has been updated. */
	SYNC_VISIBLE = 0x8030, /*!< Synchronize when an object is determined to be potentially visible. */
	SYNC_RENDER = 0x8040, /*!< Synchronize when an object is rendered. */
	SYNC_PHYSICS_SIMULATE = 0x8050, /*!< Synchronize when a physics simulation step is about to begin. */
	SYNC_PHYSICS_COMPLETED = 0x8060, /*!< Synchronize when a physics simulation step has produced results. */
	SYNC_REFLECTIONS = 0x8070, /*!< Syncronize after all data necessary to calculate reflections is ready. */
};

ostream & operator<<( ostream & out, SyncPoint const & val );

enum BSDismemberBodyPartType {
	BP_TORSO = 0, /*!< Torso */
	BP_HEAD = 1, /*!< Head */
	BP_HEAD2 = 2, /*!< Head 2 */
	BP_LEFTARM = 3, /*!< Left Arm */
	BP_LEFTARM2 = 4, /*!< Left Arm 2 */
	BP_RIGHTARM = 5, /*!< Right Arm */
	BP_RIGHTARM2 = 6, /*!< Right Arm 2 */
	BP_LEFTLEG = 7, /*!< Left Leg */
	BP_LEFTLEG2 = 8, /*!< Left Leg 2 */
	BP_LEFTLEG3 = 9, /*!< Left Leg 3 */
	BP_RIGHTLEG = 10, /*!< Right Leg */
	BP_RIGHTLEG2 = 11, /*!< Right Leg 2 */
	BP_RIGHTLEG3 = 12, /*!< Right Leg 3 */
	BP_BRAIN = 13, /*!< Brain */
	BP_SECTIONCAP_HEAD = 101, /*!< Section Cap | Head */
	BP_SECTIONCAP_HEAD2 = 102, /*!< Section Cap | Head 2 */
	BP_SECTIONCAP_LEFTARM = 103, /*!< Section Cap | Left Arm */
	BP_SECTIONCAP_LEFTARM2 = 104, /*!< Section Cap | Left Arm 2 */
	BP_SECTIONCAP_RIGHTARM = 105, /*!< Section Cap | Right Arm */
	BP_SECTIONCAP_RIGHTARM2 = 106, /*!< Section Cap | Right Arm 2 */
	BP_SECTIONCAP_LEFTLEG = 107, /*!< Section Cap | Left Leg */
	BP_SECTIONCAP_LEFTLEG2 = 108, /*!< Section Cap | Left Leg 2 */
	BP_SECTIONCAP_LEFTLEG3 = 109, /*!< Section Cap | Left Leg 3 */
	BP_SECTIONCAP_RIGHTLEG = 110, /*!< Section Cap | Right Leg */
	BP_SECTIONCAP_RIGHTLEG2 = 111, /*!< Section Cap | Right Leg 2 */
	BP_SECTIONCAP_RIGHTLEG3 = 112, /*!< Section Cap | Right Leg 3 */
	BP_SECTIONCAP_BRAIN = 113, /*!< Section Cap | Brain */
	BP_TORSOCAP_HEAD = 201, /*!< Torso Cap | Head */
	BP_TORSOCAP_HEAD2 = 202, /*!< Torso Cap | Head 2 */
	BP_TORSOCAP_LEFTARM = 203, /*!< Torso Cap | Left Arm */
	BP_TORSOCAP_LEFTARM2 = 204, /*!< Torso Cap | Left Arm 2 */
	BP_TORSOCAP_RIGHTARM = 205, /*!< Torso Cap | Right Arm */
	BP_TORSOCAP_RIGHTARM2 = 206, /*!< Torso Cap | Right Arm 2 */
	BP_TORSOCAP_LEFTLEG = 207, /*!< Torso Cap | Left Leg */
	BP_TORSOCAP_LEFTLEG2 = 208, /*!< Torso Cap | Left Leg 2 */
	BP_TORSOCAP_LEFTLEG3 = 209, /*!< Torso Cap | Left Leg 3 */
	BP_TORSOCAP_RIGHTLEG = 210, /*!< Torso Cap | Right Leg */
	BP_TORSOCAP_RIGHTLEG2 = 211, /*!< Torso Cap | Right Leg 2 */
	BP_TORSOCAP_RIGHTLEG3 = 212, /*!< Torso Cap | Right Leg 3 */
	BP_TORSOCAP_BRAIN = 213, /*!< Torso Cap | Brain */
	BP_TORSOSECTION_HEAD = 1000, /*!< Torso Section | Head */
	BP_TORSOSECTION_HEAD2 = 2000, /*!< Torso Section | Head 2 */
	BP_TORSOSECTION_LEFTARM = 3000, /*!< Torso Section | Left Arm */
	BP_TORSOSECTION_LEFTARM2 = 4000, /*!< Torso Section | Left Arm 2 */
	BP_TORSOSECTION_RIGHTARM = 5000, /*!< Torso Section | Right Arm */
	BP_TORSOSECTION_RIGHTARM2 = 6000, /*!< Torso Section | Right Arm 2 */
	BP_TORSOSECTION_LEFTLEG = 7000, /*!< Torso Section | Left Leg */
	BP_TORSOSECTION_LEFTLEG2 = 8000, /*!< Torso Section | Left Leg 2 */
	BP_TORSOSECTION_LEFTLEG3 = 9000, /*!< Torso Section | Left Leg 3 */
	BP_TORSOSECTION_RIGHTLEG = 10000, /*!< Torso Section | Right Leg */
	BP_TORSOSECTION_RIGHTLEG2 = 11000, /*!< Torso Section | Right Leg 2 */
	BP_TORSOSECTION_RIGHTLEG3 = 12000, /*!< Torso Section | Right Leg 3 */
	BP_TORSOSECTION_BRAIN = 13000, /*!< Torso Section | Brain */
};

ostream & operator<<( ostream & out, BSDismemberBodyPartType const & val );

enum ChannelType {
	CHNL_RED = 0, /*!< Red */
	CHNL_GREEN = 1, /*!< Green */
	CHNL_BLUE = 2, /*!< Blue */
	CHNL_ALPHA = 3, /*!< Alpha */
	CHNL_COMPRESSED = 4, /*!< Compressed */
	CHNL_INDEX = 16, /*!< Index */
	CHNL_EMPTY = 19, /*!< Empty */
};

ostream & operator<<( ostream & out, ChannelType const & val );

/*!
 * Sets mesh color in Oblivion Construction Set.  Anything higher than 57 is also
 * null.
 */
enum OblivionLayer {
	OL_UNIDENTIFIED = 0, /*!< Unidentified (white) */
	OL_STATIC = 1, /*!< Static (red) */
	OL_ANIM_STATIC = 2, /*!< AnimStatic (magenta) */
	OL_TRANSPARENT = 3, /*!< Transparent (light pink) */
	OL_CLUTTER = 4, /*!< Clutter (light blue) */
	OL_WEAPON = 5, /*!< Weapon (orange) */
	OL_PROJECTILE = 6, /*!< Projectile (light orange) */
	OL_SPELL = 7, /*!< Spell (cyan) */
	OL_BIPED = 8, /*!< Biped (green) Seems to apply to all creatures/NPCs */
	OL_TREES = 9, /*!< Trees (light brown) */
	OL_PROPS = 10, /*!< Props (magenta) */
	OL_WATER = 11, /*!< Water (cyan) */
	OL_TRIGGER = 12, /*!< Trigger (light grey) */
	OL_TERRAIN = 13, /*!< Terrain (light yellow) */
	OL_TRAP = 14, /*!< Trap (light grey) */
	OL_NONCOLLIDABLE = 15, /*!< NonCollidable (white) */
	OL_CLOUD_TRAP = 16, /*!< CloudTrap (greenish grey) */
	OL_GROUND = 17, /*!< Ground (none) */
	OL_PORTAL = 18, /*!< Portal (green) */
	OL_STAIRS = 19, /*!< Stairs (white) */
	OL_CHAR_CONTROLLER = 20, /*!< CharController (yellow) */
	OL_AVOID_BOX = 21, /*!< AvoidBox (dark yellow) */
	OL_UNKNOWN1 = 22, /*!< ? (white) */
	OL_UNKNOWN2 = 23, /*!< ? (white) */
	OL_CAMERA_PICK = 24, /*!< CameraPick (white) */
	OL_ITEM_PICK = 25, /*!< ItemPick (white) */
	OL_LINE_OF_SIGHT = 26, /*!< LineOfSight (white) */
	OL_PATH_PICK = 27, /*!< PathPick (white) */
	OL_CUSTOM_PICK_1 = 28, /*!< CustomPick1 (white) */
	OL_CUSTOM_PICK_2 = 29, /*!< CustomPick2 (white) */
	OL_SPELL_EXPLOSION = 30, /*!< SpellExplosion (white) */
	OL_DROPPING_PICK = 31, /*!< DroppingPick (white) */
	OL_OTHER = 32, /*!< Other (white) */
	OL_HEAD = 33, /*!< Head */
	OL_BODY = 34, /*!< Body */
	OL_SPINE1 = 35, /*!< Spine1 */
	OL_SPINE2 = 36, /*!< Spine2 */
	OL_L_UPPER_ARM = 37, /*!< LUpperArm */
	OL_L_FOREARM = 38, /*!< LForeArm */
	OL_L_HAND = 39, /*!< LHand */
	OL_L_THIGH = 40, /*!< LThigh */
	OL_L_CALF = 41, /*!< LCalf */
	OL_L_FOOT = 42, /*!< LFoot */
	OL_R_UPPER_ARM = 43, /*!< RUpperArm */
	OL_R_FOREARM = 44, /*!< RForeArm */
	OL_R_HAND = 45, /*!< RHand */
	OL_R_THIGH = 46, /*!< RThigh */
	OL_R_CALF = 47, /*!< RCalf */
	OL_R_FOOT = 48, /*!< RFoot */
	OL_TAIL = 49, /*!< Tail */
	OL_SIDE_WEAPON = 50, /*!< SideWeapon */
	OL_SHIELD = 51, /*!< Shield */
	OL_QUIVER = 52, /*!< Quiver */
	OL_BACK_WEAPON = 53, /*!< BackWeapon */
	OL_BACK_WEAPON2 = 54, /*!< BackWeapon (?) */
	OL_PONYTAIL = 55, /*!< PonyTail */
	OL_WING = 56, /*!< Wing */
	OL_NULL = 57, /*!< Null */
};

ostream & operator<<( ostream & out, OblivionLayer const & val );

enum PSLoopBehavior {
	PS_LOOP_CLAMP_BIRTH = 0, /*!< Key times map such that the first key occurs at the birth of the particle, and times later than the last key get the last key value. */
	PS_LOOP_CLAMP_DEATH = 1, /*!< Key times map such that the last key occurs at the death of the particle, and times before the initial key time get the value of the initial key. */
	PS_LOOP_AGESCALE = 2, /*!< Scale the animation to fit the particle lifetime, so that the first key is age zero, and the last key comes at the particle death. */
	PS_LOOP_LOOP = 3, /*!< The time is converted to one within the time range represented by the keys, as if the key sequence loops forever in the past and future. */
	PS_LOOP_REFLECT = 4, /*!< The time is reflection looped, as if the keys played forward then backward the forward then backward etc for all time. */
};

ostream & operator<<( ostream & out, PSLoopBehavior const & val );

/*!
 * A list of possible solver deactivation settings. This value defines how the
 *         solver deactivates objects. The solver works on a per object basis.
 *         Note: Solver deactivation does not save CPU, but reduces creeping of
 *         movable objects in a pile quite dramatically.
 */
enum SolverDeactivation {
	SOLVER_DEACTIVATION_INVALID = 0, /*!< Invalid */
	SOLVER_DEACTIVATION_OFF = 1, /*!< No solver deactivation */
	SOLVER_DEACTIVATION_LOW = 2, /*!< Very conservative deactivation, typically no visible artifacts. */
	SOLVER_DEACTIVATION_MEDIUM = 3, /*!< Normal deactivation, no serious visible artifacts in most cases */
	SOLVER_DEACTIVATION_HIGH = 4, /*!< Fast deactivation, visible artifacts */
	SOLVER_DEACTIVATION_MAX = 5, /*!< Very fast deactivation, visible artifacts */
};

ostream & operator<<( ostream & out, SolverDeactivation const & val );

/*! Describes the type of primitives stored in a mesh object. */
enum MeshPrimitiveType {
	MESH_PRIMITIVE_TRIANGLES = 0, /*!< Triangle primitive type. */
	MESH_PRIMITIVE_TRISTRIPS = 1, /*!< Triangle strip primitive type. */
	MESH_PRIMITIVE_LINESTRIPS = 2, /*!< Line strip primitive type. */
	MESH_PRIMITIVE_QUADS = 3, /*!< Quadrilateral primitive type. */
	MESH_PRIMITIVE_POINTS = 4, /*!< Point primitive type. */
};

ostream & operator<<( ostream & out, MeshPrimitiveType const & val );

/*! This enum lists the different face culling options. */
enum FaceDrawMode {
	DRAW_CCW_OR_BOTH = 0, /*!< use application defaults? */
	DRAW_CCW = 1, /*!< Draw counter clock wise faces, cull clock wise faces. This is the default for most (all?) Nif Games so far. */
	DRAW_CW = 2, /*!< Draw clock wise faces, cull counter clock wise faces. This will flip all the faces. */
	DRAW_BOTH = 3, /*!< Draw double sided faces. */
};

ostream & operator<<( ostream & out, FaceDrawMode const & val );

/*! An unsigned 32-bit integer, describing how transparency is handled in a texture. */
enum AlphaFormat {
	ALPHA_NONE = 0, /*!< No alpha blending; the texture is fully opaque. */
	ALPHA_BINARY = 1, /*!< Texture is either fully transparent or fully opaque.  There are no partially transparent areas. */
	ALPHA_SMOOTH = 2, /*!< Full range of alpha values can be used from fully transparent to fully opaque including all partially transparent values in between. */
	ALPHA_DEFAULT = 3, /*!< Use default setting. */
};

ostream & operator<<( ostream & out, AlphaFormat const & val );

enum BoundVolumeType {
	BASE_BV = -1, /*!< Default */
	SPHERE_BV = 0, /*!< Sphere */
	BOX_BV = 1, /*!< Box */
	CAPSULE_BV = 2, /*!< Capsule */
	UNION_BV = 4, /*!< Union */
	HALFSPACE_BV = 5, /*!< Half Space */
};

ostream & operator<<( ostream & out, BoundVolumeType const & val );

/*! The type of information that's store in a texture used by a NiTextureEffect. */
enum EffectType {
	EFFECT_PROJECTED_LIGHT = 0, /*!< Apply a projected light texture. */
	EFFECT_PROJECTED_SHADOW = 1, /*!< Apply a projected shaddow texture. */
	EFFECT_ENVIRONMENT_MAP = 2, /*!< Apply an environment map texture. */
	EFFECT_FOG_MAP = 3, /*!< Apply a fog map texture. */
};

ostream & operator<<( ostream & out, EffectType const & val );

/*!
 * The type of animation interpolation (blending) that will be used on the
 * associated key frames.
 */
enum KeyType {
	LINEAR_KEY = 1, /*!< Use linear interpolation. */
	QUADRATIC_KEY = 2, /*!< Use quadratic interpolation.  Forward and back tangents will be stored. */
	TBC_KEY = 3, /*!< Use Tension Bias Continuity interpolation.  Tension, bias, and continuity will be stored. */
	XYZ_ROTATION_KEY = 4, /*!< For use only with rotation data.  Separate X, Y, and Z keys will be stored instead of using quaternions. */
	CONST_KEY = 5, /*!< Step function. Used for visibility keys in NiBoolData. */
};

ostream & operator<<( ostream & out, KeyType const & val );

/*! An unsigned 32-bit integer, which describes how to apply vertex colors. */
enum VertMode {
	VERT_MODE_SRC_IGNORE = 0, /*!< Source Ignore. */
	VERT_MODE_SRC_EMISSIVE = 1, /*!< Source Emissive. */
	VERT_MODE_SRC_AMB_DIF = 2, /*!< Source Ambient/Diffuse. (Default) */
};

ostream & operator<<( ostream & out, VertMode const & val );

enum SortingMode {
	SORTING_INHERIT = 0, /*!< Inherit */
	SORTING_OFF = 1, /*!< Disable */
};

ostream & operator<<( ostream & out, SortingMode const & val );

/*! Determines the way that UV texture coordinates are generated. */
enum CoordGenType {
	CG_WORLD_PARALLEL = 0, /*!< Use plannar mapping. */
	CG_WORLD_PERSPECTIVE = 1, /*!< Use perspective mapping. */
	CG_SPHERE_MAP = 2, /*!< Use spherical mapping. */
	CG_SPECULAR_CUBE_MAP = 3, /*!< Use specular cube mapping. */
	CG_DIFFUSE_CUBE_MAP = 4, /*!< Use Diffuse cube mapping. */
};

ostream & operator<<( ostream & out, CoordGenType const & val );

/*!
 * The type of animation interpolation (blending) that will be used on the
 * associated key frames.
 */
enum BSShaderType {
	SHADER_TALL_GRASS = 0, /*!< Tall Grass Shader */
	SHADER_DEFAULT = 1, /*!< Standard Lighting Shader */
	SHADER_SKY = 10, /*!< Sky Shader */
	SHADER_SKIN = 14, /*!< Skin Shader */
	SHADER_WATER = 17, /*!< Water Shader */
	SHADER_LIGHTING30 = 29, /*!< Lighting 3.0 Shader */
	SHADER_TILE = 32, /*!< Tiled Shader */
	SHADER_NOLIGHTING = 33, /*!< No Lighting Shader */
};

ostream & operator<<( ostream & out, BSShaderType const & val );

/*! An unsigned 32-bit integer, describing the apply mode of a texture. */
enum ApplyMode {
	APPLY_REPLACE = 0, /*!< Replaces existing color */
	APPLY_DECAL = 1, /*!< For placing images on the object like stickers. */
	APPLY_MODULATE = 2, /*!< Modulates existing color. (Default) */
	APPLY_HILIGHT = 3, /*!< PS2 Only.  Function Unknown. */
	APPLY_HILIGHT2 = 4, /*!< Parallax Flag in some Oblivion meshes. */
};

ostream & operator<<( ostream & out, ApplyMode const & val );

/*!
 * The motion system. 4 (Box) is used for everything movable. 7 (Keyframed) is used
 * on statics and animated stuff.
 */
enum MotionSystem {
	MO_SYS_INVALID = 0, /*!< Invalid */
	MO_SYS_DYNAMIC = 1, /*!< A fully-simulated, movable rigid body. At construction time the engine checks the input inertia and selects MO_SYS_SPHERE_INERTIA or MO_SYS_BOX_INERTIA as appropriate. */
	MO_SYS_SPHERE = 2, /*!< Simulation is performed using a sphere inertia tensor. */
	MO_SYS_SPHERE_INERTIA = 3, /*!< This is the same as MO_SYS_SPHERE_INERTIA, except that simulation of the rigid body is "softened". */
	MO_SYS_BOX = 4, /*!< Simulation is performed using a box inertia tensor. */
	MO_SYS_BOX_STABILIZED = 5, /*!< This is the same as MO_SYS_BOX_INERTIA, except that simulation of the rigid body is "softened". */
	MO_SYS_KEYFRAMED = 6, /*!< Simulation is not performed as a normal rigid body. The keyframed rigid body has an infinite mass when viewed by the rest of the system. (used for creatures) */
	MO_SYS_FIXED = 7, /*!< This motion type is used for the static elements of a game scene, e.g. the landscape. Faster than MO_SYS_KEYFRAMED at velocity 0. (used for weapons) */
	MO_SYS_THIN_BOX = 8, /*!< A box inertia motion which is optimized for thin boxes and has less stability problems */
	MO_SYS_CHARACTER = 9, /*!< A specialized motion used for character controllers */
};

ostream & operator<<( ostream & out, MotionSystem const & val );

/*! Determines the way the billboard will react to the camera. */
enum BillboardMode {
	ALWAYS_FACE_CAMERA = 0, /*!< The billboard will always face the camera. */
	ROTATE_ABOUT_UP = 1, /*!< The billboard will only rotate around the up axis. */
	RIGID_FACE_CAMERA = 2, /*!< Rigid Face Camera. */
	ALWAYS_FACE_CENTER = 3, /*!< Always Face Center. */
	RIGID_FACE_CENTER = 4, /*!< Rigid Face Center. */
	ROTATE_ABOUT_UP2 = 9, /*!< The billboard will only rotate around the up axis (same as ROTATE_ABOUT_UP?). */
};

ostream & operator<<( ostream & out, BillboardMode const & val );

/*! This enum contains the options for doing z buffer tests. */
enum ZCompareMode {
	ZCOMP_ALWAYS = 0, /*!< Test will allways succeed. The Z Buffer value is ignored. */
	ZCOMP_LESS = 1, /*!< The test will only succeed if the pixel is nearer than the previous pixel. */
	ZCOMP_EQUAL = 2, /*!< Test will only succeed if the z value of the pixel to be drawn is equal to the value of the previous drawn pixel. */
	ZCOMP_LESS_EQUAL = 3, /*!< Test will succeed if the z value of the pixel to be drawn is smaller than or equal to the value in the Z Buffer. */
	ZCOMP_GREATER = 4, /*!< Opposite of TEST_LESS. */
	ZCOMP_NOT_EQUAL = 5, /*!< Test will succeed if the z value of the pixel to be drawn is NOT equal to the value of the previously drawn pixel. */
	ZCOMP_GREATER_EQUAL = 6, /*!< Opposite of TEST_LESS_EQUAL. */
	ZCOMP_NEVER = 7, /*!< Test will allways return false. Nothing is drawn at all. */
};

ostream & operator<<( ostream & out, ZCompareMode const & val );

/*!
 * Used by NiPoint3InterpControllers to select which type of color in the
 * controlled object that will be animated.
 */
enum TargetColor {
	TC_AMBIENT = 0, /*!< Control the ambient color. */
	TC_DIFFUSE = 1, /*!< Control the diffuse color. */
	TC_SPECULAR = 2, /*!< Control the specular color. */
	TC_SELF_ILLUM = 3, /*!< Control the self illumination color. */
};

ostream & operator<<( ostream & out, TargetColor const & val );

/*! The type of texture. */
enum TexType {
	BASE_MAP = 0, /*!< The basic texture used by most meshes. */
	DARK_MAP = 1, /*!< Used to darken the model with false lighting. */
	DETAIL_MAP = 2, /*!< Combined with base map for added detail.  Usually tiled over the mesh many times for close-up view. */
	GLOSS_MAP = 3, /*!< Allows the specularity (glossyness) of an object to differ across its surface. */
	GLOW_MAP = 4, /*!< Creates a glowing effect.  Basically an incandescence map. */
	BUMP_MAP = 5, /*!< Used to make the object appear to have more detail than it really does. */
	NORMAL_MAP = 6, /*!< Used to make the object appear to have more detail than it really does. */
	UNKNOWN2_MAP = 7, /*!< Unknown map. */
	DECAL_0_MAP = 8, /*!< For placing images on the object like stickers. */
	DECAL_1_MAP = 9, /*!< For placing images on the object like stickers. */
	DECAL_2_MAP = 10, /*!< For placing images on the object like stickers. */
	DECAL_3_MAP = 11, /*!< For placing images on the object like stickers. */
};

ostream & operator<<( ostream & out, TexType const & val );

enum ChannelConvention {
	CC_FIXED = 0, /*!< Fixed */
	CC_INDEX = 3, /*!< Palettized */
	CC_COMPRESSED = 4, /*!< Compressed */
	CC_EMPTY = 5, /*!< Empty */
};

ostream & operator<<( ostream & out, ChannelConvention const & val );

/*! Determines how the raw image data is stored in NiRawImageData. */
enum ImageType {
	RGB = 1, /*!< Colors store red, blue, and green components. */
	RGBA = 2, /*!< Colors store red, blue, green, and alpha components. */
};

ostream & operator<<( ostream & out, ImageType const & val );

/*! An unsigned 32-bit integer, describing the color depth of a texture. */
enum PixelLayout {
	PIX_LAY_PALETTISED = 0, /*!< Texture is in 8-bit paletized format. */
	PIX_LAY_HIGH_COLOR_16 = 1, /*!< Texture is in 16-bit high color format. */
	PIX_LAY_TRUE_COLOR_32 = 2, /*!< Texture is in 32-bit true color format. */
	PIX_LAY_COMPRESSED = 3, /*!< Texture is compressed. */
	PIX_LAY_BUMPMAP = 4, /*!< Texture is a grayscale bump map. */
	PIX_LAY_PALETTISED_4 = 5, /*!< Texture is in 4-bit paletized format. */
	PIX_LAY_DEFAULT = 6, /*!< Use default setting. */
};

ostream & operator<<( ostream & out, PixelLayout const & val );

/*!
 * Used by NiGeometryData to control the volatility of the mesh.  While they appear
 * to be flags they behave as an enum.
 */
enum ConsistencyType {
	CT_MUTABLE = 0x0000, /*!< Mutable Mesh */
	CT_STATIC = 0x4000, /*!< Static Mesh */
	CT_VOLATILE = 0x8000, /*!< Volatile Mesh */
};

ostream & operator<<( ostream & out, ConsistencyType const & val );

/*!
 * Specifies the availiable texture clamp modes.  That is, the behavior of pixels
 * outside the range of the texture.
 */
enum TexClampMode {
	CLAMP_S_CLAMP_T = 0, /*!< Clamp in both directions. */
	CLAMP_S_WRAP_T = 1, /*!< Clamp in the S(U) direction but wrap in the T(V) direction. */
	WRAP_S_CLAMP_T = 2, /*!< Wrap in the S(U) direction but clamp in the T(V) direction. */
	WRAP_S_WRAP_T = 3, /*!< Wrap in both directions. */
};

ostream & operator<<( ostream & out, TexClampMode const & val );

/*! The data format of components. */
enum ComponentFormat {
	F_UNKNOWN = 0x00000000, /*!< Unknown, or don't care, format. */
	F_INT8_1 = 0x00010101, /*!< F_INT8_1 */
	F_INT8_2 = 0x00020102, /*!< F_INT8_2 */
	F_INT8_3 = 0x00030103, /*!< F_INT8_3 */
	F_INT8_4 = 0x00040104, /*!< F_INT8_4 */
	F_UINT8_1 = 0x00010105, /*!< F_UINT8_1 */
	F_UINT8_2 = 0x00020106, /*!< F_UINT8_2 */
	F_UINT8_3 = 0x00030107, /*!< F_UINT8_3 */
	F_UINT8_4 = 0x00040108, /*!< F_UINT8_4 */
	F_NORMINT8_1 = 0x00010109, /*!< F_NORMINT8_1 */
	F_NORMINT8_2 = 0x0002010A, /*!< F_NORMINT8_2 */
	F_NORMINT8_3 = 0x0003010B, /*!< F_NORMINT8_3 */
	F_NORMINT8_4 = 0x0004010C, /*!< F_NORMINT8_4 */
	F_NORMUINT8_1 = 0x0001010D, /*!< F_NORMUINT8_1 */
	F_NORMUINT8_2 = 0x0002010E, /*!< F_NORMUINT8_2 */
	F_NORMUINT8_3 = 0x0003010F, /*!< F_NORMUINT8_3 */
	F_NORMUINT8_4 = 0x00040110, /*!< F_NORMUINT8_4 */
	F_INT16_1 = 0x00010211, /*!< F_INT16_1 */
	F_INT16_2 = 0x00020212, /*!< F_INT16_2 */
	F_INT16_3 = 0x00030213, /*!< F_INT16_3 */
	F_INT16_4 = 0x00040214, /*!< F_INT16_4 */
	F_UINT16_1 = 0x00010215, /*!< F_UINT16_1 */
	F_UINT16_2 = 0x00020216, /*!< F_UINT16_2 */
	F_UINT16_3 = 0x00030217, /*!< F_UINT16_3 */
	F_UINT16_4 = 0x00040218, /*!< F_UINT16_4 */
	F_NORMINT16_1 = 0x00010219, /*!< F_NORMINT16_1 */
	F_NORMINT16_2 = 0x0002021A, /*!< F_NORMINT16_2 */
	F_NORMINT16_3 = 0x0003021B, /*!< F_NORMINT16_3 */
	F_NORMINT16_4 = 0x0004021C, /*!< F_NORMINT16_4 */
	F_NORMUINT16_1 = 0x0001021D, /*!< F_NORMUINT16_1 */
	F_NORMUINT16_2 = 0x0002021E, /*!< F_NORMUINT16_2 */
	F_NORMUINT16_3 = 0x0003021F, /*!< F_NORMUINT16_3 */
	F_NORMUINT16_4 = 0x00040220, /*!< F_NORMUINT16_4 */
	F_INT32_1 = 0x00010421, /*!< F_INT32_1 */
	F_INT32_2 = 0x00020422, /*!< F_INT32_2 */
	F_INT32_3 = 0x00030423, /*!< F_INT32_3 */
	F_INT32_4 = 0x00040424, /*!< F_INT32_4 */
	F_UINT32_1 = 0x00010425, /*!< F_UINT32_1 */
	F_UINT32_2 = 0x00020426, /*!< F_UINT32_2 */
	F_UINT32_3 = 0x00030427, /*!< F_UINT32_3 */
	F_UINT32_4 = 0x00040428, /*!< F_UINT32_4 */
	F_NORMINT32_1 = 0x00010429, /*!< F_NORMINT32_1 */
	F_NORMINT32_2 = 0x0002042A, /*!< F_NORMINT32_2 */
	F_NORMINT32_3 = 0x0003042B, /*!< F_NORMINT32_3 */
	F_NORMINT32_4 = 0x0004042C, /*!< F_NORMINT32_4 */
	F_NORMUINT32_1 = 0x0001042D, /*!< F_NORMUINT32_1 */
	F_NORMUINT32_2 = 0x0002042E, /*!< F_NORMUINT32_2 */
	F_NORMUINT32_3 = 0x0003042F, /*!< F_NORMUINT32_3 */
	F_NORMUINT32_4 = 0x00040430, /*!< F_NORMUINT32_4 */
	F_FLOAT16_1 = 0x00010231, /*!< F_FLOAT16_1 */
	F_FLOAT16_2 = 0x00020232, /*!< F_FLOAT16_2 */
	F_FLOAT16_3 = 0x00030233, /*!< F_FLOAT16_3 */
	F_FLOAT16_4 = 0x00040234, /*!< F_FLOAT16_4 */
	F_FLOAT32_1 = 0x00010435, /*!< F_FLOAT32_1 */
	F_FLOAT32_2 = 0x00020436, /*!< F_FLOAT32_2 */
	F_FLOAT32_3 = 0x00030437, /*!< F_FLOAT32_3 */
	F_FLOAT32_4 = 0x00040438, /*!< F_FLOAT32_4 */
	F_UINT_10_10_10_L1 = 0x00010439, /*!< F_UINT_10_10_10_L1 */
	F_NORMINT_10_10_10_L1 = 0x0001043A, /*!< F_NORMINT_10_10_10_L1 */
	F_NORMINT_11_11_10 = 0x0001043B, /*!< F_NORMINT_11_11_10 */
	F_NORMUINT8_4_BGRA = 0x0004013C, /*!< F_NORMUINT8_4_BGRA */
	F_NORMINT_10_10_10_2 = 0x0001043D, /*!< F_NORMINT_10_10_10_2 */
	F_UINT_10_10_10_2 = 0x0001043E, /*!< F_UINT_10_10_10_2 */
};

ostream & operator<<( ostream & out, ComponentFormat const & val );

/*! The motion type. Determines quality of motion? */
enum MotionQuality {
	MO_QUAL_INVALID = 0, /*!< Automatically assigned to MO_QUAL_FIXED, MO_QUAL_KEYFRAMED or MO_QUAL_DEBRIS */
	MO_QUAL_FIXED = 1, /*!< Use this for fixed bodies. */
	MO_QUAL_KEYFRAMED = 2, /*!< Use this for moving objects with infinite mass. */
	MO_QUAL_DEBRIS = 3, /*!< Use this for all your debris objects */
	MO_QUAL_MOVING = 4, /*!< Use this for moving bodies, which should not leave the world. */
	MO_QUAL_CRITICAL = 5, /*!< Use this for all objects, which you cannot afford to tunnel through the world at all */
	MO_QUAL_BULLET = 6, /*!< Use this for very fast objects */
	MO_QUAL_USER = 7, /*!< For user. */
	MO_QUAL_CHARACTER = 8, /*!< Use this for rigid body character controllers */
	MO_QUAL_KEYFRAMED_REPORT = 9, /*!< Use this for moving objects with infinite mass which should report contact points and Toi-collisions against all other bodies, including other fixed and keyframed bodies. */
};

ostream & operator<<( ostream & out, MotionQuality const & val );

/*! Sets how objects are to be cloned. */
enum CloningBehavior {
	CLONING_SHARE = 0, /*!< Share this object pointer with the newly cloned scene. */
	CLONING_COPY = 1, /*!< Create an exact duplicate of this object for use with the newly cloned scene. */
	CLONING_BLANK_COPY = 2, /*!< Create a copy of this object for use with the newly cloned stream, leaving some of the data to be written later. */
};

ostream & operator<<( ostream & out, CloningBehavior const & val );

enum PropagationMode {
	PROPAGATE_ON_SUCCESS = 0, /*!< On Success */
	PROPAGATE_ON_FAILURE = 1, /*!< On Failure */
	PROPAGATE_ALWAYS = 2, /*!< Always */
	PROPAGATE_NEVER = 3, /*!< Never */
};

ostream & operator<<( ostream & out, PropagationMode const & val );

/*! Specifies the pixel format used by the NiPixelData object to store a texture. */
enum PixelFormat {
	PX_FMT_RGB8 = 0, /*!< 24-bit color: uses 8 bit to store each red, blue, and green component. */
	PX_FMT_RGBA8 = 1, /*!< 32-bit color with alpha: uses 8 bits to store each red, blue, green, and alpha component. */
	PX_FMT_PAL8 = 2, /*!< 8-bit palette index: uses 8 bits to store an index into the palette stored in a NiPalette object. */
	PX_FMT_DXT1 = 4, /*!< DXT1 compressed texture. */
	PX_FMT_DXT5 = 5, /*!< DXT5 compressed texture. */
	PX_FMT_DXT5_ALT = 6, /*!< DXT5 compressed texture. It is not clear what the difference is with PX_FMT_DXT5. */
};

ostream & operator<<( ostream & out, PixelFormat const & val );

/*! The animation cyle behavior. */
enum CycleType {
	CYCLE_LOOP = 0, /*!< Loop */
	CYCLE_REVERSE = 1, /*!< Reverse */
	CYCLE_CLAMP = 2, /*!< Clamp */
};

ostream & operator<<( ostream & out, CycleType const & val );

/*! The force field's type. */
enum FieldType {
	FIELD_WIND = 0, /*!< Wind (fixed direction) */
	FIELD_POINT = 1, /*!< Point (fixed origin) */
};

ostream & operator<<( ostream & out, FieldType const & val );

/*! Determines decay function.  Used by NiPSysBombModifier. */
enum DecayType {
	DECAY_NONE = 0, /*!< No decay. */
	DECAY_LINEAR = 1, /*!< Linear decay. */
	DECAY_EXPONENTIAL = 2, /*!< Exponential decay. */
};

ostream & operator<<( ostream & out, DecayType const & val );

/*! Controls which parts of the mesh that the particles are emitted from. */
enum EmitFrom {
	EMIT_FROM_VERTICES = 0, /*!< Emit particles from the vertices of the mesh. */
	EMIT_FROM_FACE_CENTER = 1, /*!< Emit particles from the center of the faces of the mesh. */
	EMIT_FROM_EDGE_CENTER = 2, /*!< Emit particles from the center of the edges of the mesh. */
	EMIT_FROM_FACE_SURFACE = 3, /*!< Perhaps randomly emit particles from anywhere on the faces of the mesh? */
	EMIT_FROM_EDGE_SURFACE = 4, /*!< Perhaps randomly emit particles from anywhere on the edges of the mesh? */
};

ostream & operator<<( ostream & out, EmitFrom const & val );

/*! Shader Property Flags */
enum BSShaderFlags {
	SF_SPECULAR = 1, /*!< Enables Specularity */
	SF_SKINNED = 2, /*!< Required For Skinned Meshes */
	SF_LOWDETAIL = 4, /*!< Lowddetail (seems to use standard diff/norm/spec shader) */
	SF_VERTEX_ALPHA = 8, /*!< Vertex Alpha */
	SF_UNKNOWN_1 = 16, /*!< Unknown */
	SF_SINGLE_PASS = 32, /*!< Single Pass */
	SF_EMPTY = 64, /*!< Unknown */
	SF_ENVIRONMENT_MAPPING = 128, /*!< Environment mapping (uses Envmap Scale) */
	SF_ALPHA_TEXTURE = 256, /*!< Alpha Texture Requires NiAlphaProperty to Enable */
	SF_UNKNOWN_2 = 512, /*!< Unknown */
	SF_FACEGEN = 1024, /*!< FaceGen */
	SF_PARALLAX_SHADER_INDEX_15 = 2048, /*!< Parallax */
	SF_UNKNOWN_3 = 4096, /*!< Unknown/Crash */
	SF_NON_PROJECTIVE_SHADOWS = 8192, /*!< Non-Projective Shadows */
	SF_UNKNOWN_4 = 16384, /*!< Unknown/Crash */
	SF_REFRACTION = 32768, /*!< Refraction (switches on refraction power) */
	SF_FIRE_REFRACTION = 65536, /*!< Fire Refraction (switches on refraction power/period) */
	SF_EYE_ENVIRONMENT_MAPPING = 131072, /*!< Eye Environment Mapping (does not use envmap light fade or envmap scale) */
	SF_HAIR = 262144, /*!< Hair */
	SF_DYNAMIC_ALPHA = 524288, /*!< Dynamic Alpha */
	SF_LOCALMAP_HIDE_SECRET = 1048576, /*!< Localmap Hide Secret */
	SF_WINDOW_ENVIRONMENT_MAPPING = 2097152, /*!< Window Environment Mapping */
	SF_TREE_BILLBOARD = 4194304, /*!< Tree Billboard */
	SF_SHADOW_FRUSTUM = 8388608, /*!< Shadow Frustum */
	SF_MULTIPLE_TEXTURES = 16777216, /*!< Multiple Textures (base diff/norm become null) */
	SF_REMAPPABLE_TEXTURES = 33554432, /*!< usually seen w/texture animation */
	SF_DECAL_SINGLE_PASS = 67108864, /*!< Decal */
	SF_DYNAMIC_DECAL_SINGLE_PASS = 134217728, /*!< Dynamic Decal */
	SF_PARALLAX_OCCULSION = 268435456, /*!< Parallax Occlusion */
	SF_EXTERNAL_EMITTANCE = 536870912, /*!< External Emittance */
	SF_SHADOW_MAP = 1073741824, /*!< Shadow Map */
	SF_ZBUFFER_TEST = 2147483648, /*!< ZBuffer Test (1=on) */
};

ostream & operator<<( ostream & out, BSShaderFlags const & val );

/*! Editor flags for the Body Partitions. */
enum BSPartFlag {
	PF_EDITOR_VISIBLE = 1, /*!< Visible in Editor */
	PF_START_NET_BONESET = 256, /*!< Start a new shared boneset.  It is expected this BoneSet and the following sets in the Skin Partition will have the same bones. */
};

ostream & operator<<( ostream & out, BSPartFlag const & val );

/*! Skyrim Shader Property Flags 2 */
enum SkyrimLightingShaderFlags2 {
	SLSF2_ZBUFFER_WRITE = 1, /*!< Enables writing to the Z-Buffer */
	SLSF2_1 = 2, /*!< SLSF2_1 */
	SLSF2_2 = 4, /*!< SLSF2_2 */
	SLSF2_3 = 8, /*!< SLSF2_3 */
	SLSF2_DOUBLE_SIDED = 16, /*!< Double-sided rendering */
	SLSF2_VERTEX_COLOR = 32, /*!< Has Vertex Colors (Maybe, could be Vertex Alpha?) */
	SLSF2_GLOW_MAP = 64, /*!< Use Glow Map */
	SLSF2_7 = 128, /*!< SLSF2_7 */
	SLSF2_8 = 256, /*!< SLSF2_8 */
	SLSF2_9 = 512, /*!< SLSF2_9 */
	SLSF2_10 = 1024, /*!< SLSF2_10 */
	SLSF2_11 = 2048, /*!< SLSF2_11 */
	SLSF2_12 = 4096, /*!< SLSF2_12 */
	SLSF2_13 = 8192, /*!< SLSF2_13 */
	SLSF2_14 = 16384, /*!< SLSF2_14 */
	SLSF2_15 = 32768, /*!< SLSF2_15 */
	SLSF2_16 = 65536, /*!< Wireframe (Seems to only work on particles) */
	SLSF2_17 = 131072, /*!< SLSF2_17 */
	SLSF2_18 = 262144, /*!< SLSF2_18 */
	SLSF2_19 = 524288, /*!< SLSF2_19 */
	SLSF2_20 = 1048576, /*!< SLSF2_20 */
	SLSF2_21 = 2097152, /*!< SLSF2_21 */
	SLSF2_22 = 4194304, /*!< SLSF2_22 */
	SLSF2_23 = 8388608, /*!< SLSF2_23 */
	SLSF2_MULTI_LAYER = 16777216, /*!< Use Multilayer (inner-layer) Map */
	SLSF2_SOFT_LIGHT = 33554432, /*!< Use Soft Lighting Map */
	SLSF2_RIM_LIGHT = 67108864, /*!< Use Rim Lighting Map */
	SLSF2_BACK_LIGHT = 134217728, /*!< Use Back Lighting Map */
	SLSF2_28 = 268435456, /*!< SLSF2_28 */
	SLSF2_VERTEX_ANIMATION = 536870912, /*!< Enables Vertex Animation */
	SLSF2_30 = 1073741824, /*!< SLSF2_30 */
	SLSF2_31 = 2147483648, /*!< SLSF2_31 */
};

ostream & operator<<( ostream & out, SkyrimLightingShaderFlags2 const & val );

/*! Skyrim Shader Property Flags 1 */
enum SkyrimLightingShaderFlags1 {
	SLSF1_SPECULAR = 1, /*!< Enables Specularity */
	SLSF1_SKINNED = 2, /*!< Required For Skinned Meshes */
	SLSF1_2 = 4, /*!< SLSF1_2 */
	SLSF1_3 = 8, /*!< SLSF1_3 */
	SLSF1_4 = 16, /*!< SLSF1_4 */
	SLSF1_5 = 32, /*!< SLSF1_5 */
	SLSF1_6 = 64, /*!< SLSF1_6 */
	SLSF1_ENVIRONMENT_MAPPING = 128, /*!< Environment mapping (uses Envmap Scale) */
	SLSF1_8 = 256, /*!< SLSF1_8 */
	SLSF1_CAST_SHADOWS = 512, /*!< Can cast shadows */
	SLSF1_10 = 1024, /*!< SLSF1_10 */
	SLSF1_11 = 2048, /*!< SLSF1_11 */
	SLSF1_SPECULAR_MAP = 4096, /*!< Use Specular Map */
	SLSF1_13 = 8192, /*!< SLSF1_13 */
	SLSF1_14 = 16384, /*!< SLSF1_14 */
	SLSF1_15 = 32768, /*!< SLSF1_15 */
	SLSF1_16 = 65536, /*!< SLSF1_16 */
	SLSF1_EYE_ENVIRONMENT_MAPPING = 131072, /*!< Eye Environment Mapping (Must use the Eye shader and the model must be skinned) */
	SLSF1_18 = 262144, /*!< SLSF1_18 */
	SLSF1_19 = 524288, /*!< SLSF1_19 */
	SLSF1_20 = 1048576, /*!< SLSF1_20 */
	SLSF1_21 = 2097152, /*!< SLSF1_21 */
	SLSF1_22 = 4194304, /*!< SLSF1_22 */
	SLSF1_23 = 8388608, /*!< SLSF1_23 */
	SLSF1_24 = 16777216, /*!< SLSF1_24 */
	SLSF1_25 = 33554432, /*!< SLSF1_25 */
	SLSF1_26 = 67108864, /*!< SLSF1_26 */
	SLSF1_27 = 134217728, /*!< SLSF1_27 */
	SLSF1_28 = 268435456, /*!< SLSF1_28 */
	SLSF1_29 = 536870912, /*!< SLSF1_29 */
	SLSF1_30 = 1073741824, /*!< SLSF1_30 */
	SLSF1_ZBUFFER_TEST = 2147483648, /*!< ZBuffer Test (1=on) */
};

ostream & operator<<( ostream & out, SkyrimLightingShaderFlags1 const & val );

/*! Determines how the data stream is accessed? */
enum DataStreamAccess {
	CPU_READ = 1, /*!< CPU Read */
	CPU_WRITE_STATIC = 2, /*!< CPU Write Static */
	CPU_WRITE_MUTABLE = 4, /*!< CPU Write Mutable */
	CPU_WRITE_VOLATILE = 8, /*!< CPU Write Volatile */
	GPU_READ = 16, /*!< GPU Read */
	GPU_WRITE = 32, /*!< GPU Write */
	CPU_WRITE_STATIC_INITITIALIZED = 64, /*!< CPU Write Static Inititialized */
};

ostream & operator<<( ostream & out, DataStreamAccess const & val );

/*! Skyrim Shader Property Flags 2 */
enum SkyrimEffectShaderFlags2 {
	SESF2_TEXTURE_TRANSFORM_U = 1, /*!< Has Texture Transform (U?) */
	SESF2_TEXTURE_TRANSFORM_V = 2, /*!< Has Texture Transform (V?) */
	SESF2_2 = 4, /*!< SESF2_2 */
	SESF2_3 = 8, /*!< SESF2_3 */
	SESF2_4 = 16, /*!< SESF2_4 */
	SESF2_5 = 32, /*!< SESF2_5 */
	SESF2_6 = 64, /*!< SESF2_6 */
	SESF2_7 = 128, /*!< SESF2_7 */
};

ostream & operator<<( ostream & out, SkyrimEffectShaderFlags2 const & val );

/*! Skyrim Shader Property Flags 1 */
enum SkyrimEffectShaderFlags1 {
	SESF1_0 = 1, /*!< SESF1_0 */
	SESF1_1 = 2, /*!< SESF1_1 */
	SESF1_2 = 4, /*!< SESF1_2 */
	SESF1_3 = 8, /*!< SESF1_3 */
	SESF1_DOUBLE_SIDED = 16, /*!< Draw textures double-sided */
	SESF1_5 = 32, /*!< SESF1_5 */
	SESF1_6 = 64, /*!< SESF1_6 */
	SESF1_7 = 128, /*!< SESF1_7 */
};

ostream & operator<<( ostream & out, SkyrimEffectShaderFlags1 const & val );

}
#endif
