#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// Function BiomeRow.BiomeRow_C.SetBiome
struct UBiomeRow_C_SetBiome_Params
{
public:
	struct FBiomesRowHandle                      New_Biome;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0xA2 (0xA2 - 0x0)
// Function BiomeRow.BiomeRow_C.ExecuteUbergraph_BiomeRow
struct UBiomeRow_C_ExecuteUbergraph_BiomeRow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBiomesRowHandle                      K2Node_CustomEvent_New_Biome;                      // 0x4(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C38[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIcarusBiome                          CallFunc_GetBiomesStruct_Biomes;                   // 0x20(0x80)(None)
	enum class EValid                            CallFunc_GetBiomesStruct_Paths;                    // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


