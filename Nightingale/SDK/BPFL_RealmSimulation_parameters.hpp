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

// 0xC9 (0xC9 - 0x0)
// Function BPFL_RealmSimulation.BPFL_RealmSimulation_C.FerocityToTag
struct UBPFL_RealmSimulation_C_FerocityToTag_Params
{
public:
	int32                                        Footprint;                                         // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39C3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         FoundMatch;                                        // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39CA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Tag;                                               // 0x14(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39CC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, struct FGameplayTag>             FerocityToTagMap;                                  // 0x20(0x50)(Edit, BlueprintVisible)
	TMap<int32, struct FGameplayTag>             K2Node_MakeVariable_MakeVariableOutput;            // 0x70(0x50)(None)
	struct FGameplayTag                          CallFunc_Map_Find_Value;                           // 0xC0(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC9 (0xC9 - 0x0)
// Function BPFL_RealmSimulation.BPFL_RealmSimulation_C.BiomeToTag
struct UBPFL_RealmSimulation_C_BiomeToTag_Params
{
public:
	enum class EBiomeID                          Biome;                                             // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         FoundMatch;                                        // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39F2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Tag;                                               // 0x14(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39F6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EBiomeID, struct FGameplayTag> BiomeToTagMap;                                     // 0x20(0x50)(Edit, BlueprintVisible)
	TMap<enum class EBiomeID, struct FGameplayTag> K2Node_MakeVariable_MakeVariableOutput;            // 0x70(0x50)(None)
	struct FGameplayTag                          CallFunc_Map_Find_Value;                           // 0xC0(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC9 (0xC9 - 0x0)
// Function BPFL_RealmSimulation.BPFL_RealmSimulation_C.FootprintToTag
struct UBPFL_RealmSimulation_C_FootprintToTag_Params
{
public:
	int32                                        Footprint;                                         // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A1C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         FoundMatch;                                        // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A20[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Tag;                                               // 0x14(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A22[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, struct FGameplayTag>             FootprintToTagMap;                                 // 0x20(0x50)(Edit, BlueprintVisible)
	TMap<int32, struct FGameplayTag>             K2Node_MakeVariable_MakeVariableOutput;            // 0x70(0x50)(None)
	struct FGameplayTag                          CallFunc_Map_Find_Value;                           // 0xC0(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


