#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// ScriptStruct AssetLookupRuntime.AssetLookupTableIndex
struct FAssetLookupTableIndex
{
public:
	uint32                                       Index;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct AssetLookupRuntime.UniquelyIdentifiableAssetReference
struct FUniquelyIdentifiableAssetReference
{
public:
	uint8                                        Pad_33[0x40];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAssetLookupTableIndex                DataAssetIndex;                                    // 0x40(0x4)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_34[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

}


