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

// 0x21 (0x21 - 0x0)
// Function BP_ConditionBehaviour_Creature_Killed_Base.BP_ConditionBehaviour_Creature_Killed_Base_C.CheckCreatureTags
struct UBP_ConditionBehaviour_Creature_Killed_Base_C_CheckCreatureTags_Params
{
public:
	struct FGameplayTagContainer                 CurrentCreatureTags;                               // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         bHasCreatureTraits;                                // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_ConditionBehaviour_Creature_Killed_Base.BP_ConditionBehaviour_Creature_Killed_Base_C.GetCreatureTraitInfo
struct UBP_ConditionBehaviour_Creature_Killed_Base_C_GetCreatureTraitInfo_Params
{
public:
	class FText                                  CreatureTraitInfo;                                 // 0x0(0x18)(Parm, OutParm)
};

// 0x178 (0x178 - 0x0)
// Function BP_ConditionBehaviour_Creature_Killed_Base.BP_ConditionBehaviour_Creature_Killed_Base_C.GetDebugText
struct UBP_ConditionBehaviour_Creature_Killed_Base_C_GetDebugText_Params
{
public:
	class FText                                  Description;                                       // 0x0(0x18)(Parm, OutParm)
	class FText                                  CallFunc_GetCreatureTraitInfo_CreatureTraitInfo;   // 0x18(0x18)(None)
	class FString                                CallFunc_GetDebugStringFromGameplayTag_ReturnValue; // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x40(0x50)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x90(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xA8(0x50)(HasGetValueTypeHash)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x100(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x150(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x160(0x18)(None)
};

// 0x5C (0x5C - 0x0)
// Function BP_ConditionBehaviour_Creature_Killed_Base.BP_ConditionBehaviour_Creature_Killed_Base_C.OnCreatureKilled
struct UBP_ConditionBehaviour_Creature_Killed_Base_C_OnCreatureKilled_Params
{
public:
	struct FDataTableRowHandle                   Creature_Info;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CreatureTagContainer;                              // 0x10(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                 KillerTagContainer;                                // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         CallFunc_CheckCreatureTags_bHasCreatureTraits;     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGameplayTagValid_ReturnValue;           // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasTag_ReturnValue;                       // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_78BD[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ConditionBehaviour_Creature_Killed_Base.BP_ConditionBehaviour_Creature_Killed_Base_C.InitializeFromPersistence
struct UBP_ConditionBehaviour_Creature_Killed_Base_C_InitializeFromPersistence_Params
{
public:
	struct FConditionPersistentData              UpdatedProgressData;                               // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x51 (0x51 - 0x0)
// Function BP_ConditionBehaviour_Creature_Killed_Base.BP_ConditionBehaviour_Creature_Killed_Base_C.ExecuteUbergraph_BP_ConditionBehaviour_Creature_Killed_Base
struct UBP_ConditionBehaviour_Creature_Killed_Base_C_ExecuteUbergraph_BP_ConditionBehaviour_Creature_Killed_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FConditionPersistentData              K2Node_Event_UpdatedProgressData;                  // 0x4(0x8)(ConstParm, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x1C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7961[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerState_C*                     CallFunc_GetConditionPlayerState_PlayerState;      // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerState_C*                     CallFunc_GetConditionPlayerState_PlayerState_1;    // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7969[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerState_C*                     CallFunc_GetConditionPlayerState_PlayerState_2;    // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


