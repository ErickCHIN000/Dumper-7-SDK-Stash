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

// 0x10 (0x10 - 0x0)
// Function BP_Encounter_HopeEcho_Favour.BP_Encounter_HopeEcho_Favour_C.Restore Rewards On Persistence
struct ABP_Encounter_HopeEcho_Favour_C_Restore_Rewards_On_Persistence_Params
{
public:
	TArray<struct FEncounterFavourData>          CallFunc_GenerateFavourRewards_ReturnValue;        // 0x0(0x10)(ReferenceParm)
};

// 0x11 (0x11 - 0x0)
// Function BP_Encounter_HopeEcho_Favour.BP_Encounter_HopeEcho_Favour_C.Cycle Through Glyphs
struct ABP_Encounter_HopeEcho_Favour_C_Cycle_Through_Glyphs_Params
{
public:
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x210 (0x210 - 0x0)
// Function BP_Encounter_HopeEcho_Favour.BP_Encounter_HopeEcho_Favour_C.GetInteractText
struct ABP_Encounter_HopeEcho_Favour_C_GetInteractText_Params
{
public:
	struct FInteractionData                      InteractionData;                                   // 0x0(0x178)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	class FString                                InteractText;                                      // 0x178(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x188(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x1D8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x1E8(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x200(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_Encounter_HopeEcho_Favour.BP_Encounter_HopeEcho_Favour_C.GetInteractionTag
struct ABP_Encounter_HopeEcho_Favour_C_GetInteractionTag_Params
{
public:
	struct FGameplayTag                          InteractionTag;                                    // 0x0(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_Encounter_HopeEcho_Favour.BP_Encounter_HopeEcho_Favour_C.Initialize
struct ABP_Encounter_HopeEcho_Favour_C_Initialize_Params
{
public:
	class AEncounterBase*                        SpawningEncounter;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EEncounterRewardType              EncounterRewardType;                               // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function BP_Encounter_HopeEcho_Favour.BP_Encounter_HopeEcho_Favour_C.ExecuteUbergraph_BP_Encounter_HopeEcho_Favour
struct ABP_Encounter_HopeEcho_Favour_C_ExecuteUbergraph_BP_Encounter_HopeEcho_Favour_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2335[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FEncounterFavourData>          CallFunc_GenerateFavourRewards_ReturnValue;        // 0x8(0x10)(ReferenceParm)
	int32                                        Temp_int_Variable;                                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_233C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2345[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEncounterBase*                        K2Node_Event_SpawningEncounter;                    // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EEncounterRewardType              K2Node_Event_EncounterRewardType;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


