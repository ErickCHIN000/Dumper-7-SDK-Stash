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
// Function BP_RewardBehaviour_Technique_Base.BP_RewardBehaviour_Technique_Base_C.GetSkillsToReward
struct UBP_RewardBehaviour_Technique_Base_C_GetSkillsToReward_Params
{
public:
	struct FSkillReferenceContainer              SkillReferences;                                   // 0x0(0x10)(Parm, OutParm)
};

// 0x166 (0x166 - 0x0)
// Function BP_RewardBehaviour_Technique_Base.BP_RewardBehaviour_Technique_Base_C.IsRewardValid
struct UBP_RewardBehaviour_Technique_Base_C_IsRewardValid_Params
{
public:
	class APlayerState*                          PlayerState;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsValid;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_471E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  OutInvalidReason;                                  // 0x10(0x18)(Parm, OutParm)
	bool                                         CallFunc_IsRewardValid_bIsValid;                   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4720[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_IsRewardValid_OutInvalidReason;           // 0x30(0x18)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4728[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ISkillUnlockInterface> K2Node_DynamicCast_AsSkill_Unlock_Interface;       // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_472A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSkillReferenceContainer              CallFunc_GetSkillsToReward_SkillReferences;        // 0x70(0x10)(None)
	struct FSkillDataReference                   CallFunc_Array_Get_Item;                           // 0x80(0xE0)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasSkillFullyUnlocked_ReturnValue;        // 0x164(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x165(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x200 (0x200 - 0x0)
// Function BP_RewardBehaviour_Technique_Base.BP_RewardBehaviour_Technique_Base_C.GetDebugText
struct UBP_RewardBehaviour_Technique_Base_C_GetDebugText_Params
{
public:
	class FText                                  DebugText;                                         // 0x0(0x18)(Parm, OutParm)
	TArray<class FString>                        Skills;                                            // 0x18(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4746[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSkillReferenceContainer              CallFunc_GetSkillsToReward_SkillReferences;        // 0x38(0x10)(None)
	class FString                                CallFunc_JoinStringArray_ReturnValue;              // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_4748[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSkillDataReference                   CallFunc_Array_Get_Item;                           // 0x60(0xE0)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x140(0x18)(None)
	class FString                                CallFunc_ToString_ReturnValue;                     // 0x158(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x168(0x50)(HasGetValueTypeHash)
	class FString                                CallFunc_GetBaseFilename_ReturnValue;              // 0x1B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x1C8(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_474D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x1E0(0x18)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4751[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x1FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x245 (0x245 - 0x0)
// Function BP_RewardBehaviour_Technique_Base.BP_RewardBehaviour_Technique_Base_C.RewardSkills
struct UBP_RewardBehaviour_Technique_Base_C_RewardSkills_Params
{
public:
	class APlayerState*                          PlayerState;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               SenderContextObject;                               // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSkillDataReference                   CurrentSkillReference;                             // 0x10(0xE0)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_476A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_ToString_ReturnValue;                     // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetBaseFilename_ReturnValue;              // 0x110(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_UnlockSkillReference_ReturnValue;         // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_476C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 CallFunc_GetUniqueAssetId_ReturnValue;             // 0x124(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_476D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_GuidToString_ReturnValue;            // 0x138(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FSkillReferenceContainer              CallFunc_GetSkillsToReward_SkillReferences;        // 0x148(0x10)(None)
	uint8                                        Pad_476E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSkillDataReference                   CallFunc_Array_Get_Item;                           // 0x160(0xE0)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x244(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_RewardBehaviour_Technique_Base.BP_RewardBehaviour_Technique_Base_C.ApplyReward
struct UBP_RewardBehaviour_Technique_Base_C_ApplyReward_Params
{
public:
	class APlayerState*                          PlayerState;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               SenderContextObject;                               // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_RewardBehaviour_Technique_Base.BP_RewardBehaviour_Technique_Base_C.ExecuteUbergraph_BP_RewardBehaviour_Technique_Base
struct UBP_RewardBehaviour_Technique_Base_C_ExecuteUbergraph_BP_RewardBehaviour_Technique_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4789[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerState*                          K2Node_Event_PlayerState;                          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_Event_SenderContextObject;                  // 0x10(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


