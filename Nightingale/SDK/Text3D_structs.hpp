#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EText3DBevelType : uint8
{
	Linear                         = 0,
	HalfCircle                     = 1,
	Convex                         = 2,
	Concave                        = 3,
	OneStep                        = 4,
	TwoSteps                       = 5,
	Engraved                       = 6,
	EText3DBevelType_MAX           = 7,
};

enum class EText3DHorizontalTextAlignment : uint8
{
	Left                           = 0,
	Center                         = 1,
	Right                          = 2,
	EText3DHorizontalTextAlignment_MAX = 3,
};

enum class EText3DVerticalTextAlignment : uint8
{
	FirstLine                      = 0,
	Top                            = 1,
	Center                         = 2,
	Bottom                         = 3,
	EText3DVerticalTextAlignment_MAX = 4,
};

enum class EText3DCharacterEffectOrder : uint8
{
	Normal                         = 0,
	FromCenter                     = 1,
	ToCenter                       = 2,
	Opposite                       = 3,
	EText3DCharacterEffectOrder_MAX = 4,
};

enum class EText3DModifyFlags : uint8
{
	None                           = 0,
	Layout                         = 1,
	Geometry                       = 2,
	Unfreeze                       = 4,
	All                            = 7,
	EText3DModifyFlags_MAX         = 8,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct Text3D.GlyphMeshParameters
struct FGlyphMeshParameters
{
public:
	float                                        Extrude;                                           // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bevel;                                             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EText3DBevelType                  BevelType;                                         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C29[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BevelSegments;                                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOutline;                                          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C33[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OutlineExpand;                                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Text3D.CachedFontMeshes
struct FCachedFontMeshes
{
public:
	TMap<uint32, class UStaticMesh*>             Glyphs;                                            // 0x0(0x50)(UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C3B[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE8 (0xE8 - 0x0)
// ScriptStruct Text3D.CachedFontData
struct FCachedFontData
{
public:
	class UFont*                                 Font;                                              // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<uint32, struct FCachedFontMeshes>       Meshes;                                            // 0x8(0x50)(NativeAccessSpecifierPublic)
	uint8                                        Pad_1C46[0x90];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}


