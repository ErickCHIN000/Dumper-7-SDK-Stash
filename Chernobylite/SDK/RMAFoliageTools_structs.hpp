#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ERMAFoliageToolsIncludeMode : uint8
{
	RMAIM_All                      = 0,
	RMAIM_Selection                = 1,
	RMAIM_MAX                      = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct RMAFoliageTools.RMAFoliageToolsBuffer
struct FRMAFoliageToolsBuffer
{
public:
	TArray<struct FTransform>                    Transform;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UStaticMesh*>                   Mesh;                                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

}


