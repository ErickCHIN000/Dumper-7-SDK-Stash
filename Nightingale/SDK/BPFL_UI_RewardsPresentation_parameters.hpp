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

// 0x60 (0x60 - 0x0)
// Function BPFL_UI_RewardsPresentation.BPFL_UI_RewardsPresentation_C.GenerateConditionalRewardsFromRewardTypes
struct UBPFL_UI_RewardsPresentation_C_GenerateConditionalRewardsFromRewardTypes_Params
{
public:
	TArray<enum class EEncounterRewardType>      RewardTypes;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FConditionalReward>            PresentationData;                                  // 0x18(0x10)(Parm, OutParm, ContainsInstancedReference)
	TArray<struct FConditionalReward>            LOCAL_ConditionalRewards;                          // 0x28(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEncounterRewardType              CallFunc_Array_Get_Item;                           // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_689E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FConditionalReward>            CallFunc_GenerateConditionalRewards_ReturnValue;   // 0x48(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_68A7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x91 (0x91 - 0x0)
// Function BPFL_UI_RewardsPresentation.BPFL_UI_RewardsPresentation_C.GenerateRealmRewardPresentation
struct UBPFL_UI_RewardsPresentation_C_GenerateRealmRewardPresentation_Params
{
public:
	struct FGameplayTagContainer                 RealmTags;                                         // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FNWXClusterCollectionPresentationData> ClusterCollectionsPresentationDataList;            // 0x28(0x10)(Parm, OutParm)
	TArray<struct FConditionalReward>            LOCAL_ConditionalRewards;                          // 0x38(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<class UConditionalRewardSet*>         L_CurrentRealmConditionalRewards;                  // 0x48(0x10)(Edit, BlueprintVisible)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_69AF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EEncounterRewardType>      CallFunc_GetRewardTypesFrom_RealmTags_EncounterRewardType; // 0x60(0x10)(ReferenceParm)
	TArray<struct FConditionalReward>            CallFunc_GenerateConditionalRewardsFromRewardTypes_PresentationData; // 0x70(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<struct FNWXClusterCollectionPresentationData> CallFunc_GetClusterCollectionPresentationDataListFromConditionalRewards_ClusterCollectionPresentationDataList; // 0x80(0x10)(ReferenceParm)
	bool                                         CallFunc_Array_IsNotEmpty_ReturnValue;             // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF0 (0xF0 - 0x0)
// Function BPFL_UI_RewardsPresentation.BPFL_UI_RewardsPresentation_C.GetClusterCollectionPresentationDataListFromConditionalRewards
struct UBPFL_UI_RewardsPresentation_C_GetClusterCollectionPresentationDataListFromConditionalRewards_Params
{
public:
	TArray<struct FConditionalReward>            ConditionalRewards;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FNWXClusterCollectionPresentationData> ClusterCollectionPresentationDataList;             // 0x18(0x10)(Parm, OutParm)
	TArray<struct FNWXClusterCollectionPresentationData> L_TotalClusterCollectionPresentationData;          // 0x28(0x10)(Edit, BlueprintVisible)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6ABC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FConditionalReward                    CallFunc_Array_Get_Item;                           // 0x50(0x18)(NoDestructor, ContainsInstancedReference)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6AD6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNWXClusterCollectionPresentationData> CallFunc_GetClusterCollectionPresentationDataListFromRewardBehaviour_ClusterCollectionPresentationDataList; // 0x70(0x10)(ReferenceParm)
	struct FNWXClusterCollectionPresentationData CallFunc_Array_Get_Item_1;                         // 0x80(0x60)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6AF8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x239 (0x239 - 0x0)
// Function BPFL_UI_RewardsPresentation.BPFL_UI_RewardsPresentation_C.GetClusterCollectionDiscoveryPresentationFromSkillReference
struct UBPFL_UI_RewardsPresentation_C_GetClusterCollectionDiscoveryPresentationFromSkillReference_Params
{
public:
	struct FSkillDataReference                   SkillReference;                                    // 0x0(0xE0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0xE0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FNWXClusterCollectionPresentationData ClusterCollectionDiscoveryPresentationData;        // 0xE8(0x60)(Parm, OutParm)
	class ABP_PlayerState_C*                     PlayerState;                                       // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	enum class ENWXDiscoveryPresentationState    Temp_byte_Variable;                                // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x151(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x152(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6C0A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerState_C*                     CallFunc_GetLocalPlayerState_PlayerState;          // 0x158(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ENWXDiscoveryPresentationState    Temp_byte_Variable_1;                              // 0x161(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6C1C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSkillPresentationData                CallFunc_GetSkillPresentationData_ReturnValue;     // 0x168(0x58)(None)
	TScriptInterface<class ISkillUnlockInterface> K2Node_DynamicCast_AsSkill_Unlock_Interface;       // 0x1C0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x1D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ENWXDiscoveryPresentationState    K2Node_Select_Default;                             // 0x1D2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasSkillFullyUnlocked_ReturnValue;        // 0x1D3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6C4A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNWXClusterCollectionPresentationData K2Node_MakeStruct_NWXClusterCollectionPresentationData; // 0x1D8(0x60)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x228 (0x228 - 0x0)
// Function BPFL_UI_RewardsPresentation.BPFL_UI_RewardsPresentation_C.GetClusterCollectionPresentationDataListFromRewardBehaviour
struct UBPFL_UI_RewardsPresentation_C_GetClusterCollectionPresentationDataListFromRewardBehaviour_Params
{
public:
	class URewardBehaviour*                      RewardBehaviour;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FNWXClusterCollectionPresentationData> ClusterCollectionPresentationDataList;             // 0x10(0x10)(Parm, OutParm)
	TArray<struct FNWXClusterCollectionPresentationData> L_TotalClusterCollectionPresentationData;          // 0x20(0x10)(Edit, BlueprintVisible)
	class UBP_RewardBehaviour_Technique_Multiple_C* K2Node_DynamicCast_AsBP_Reward_Behaviour_Technique_Multiple; // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6D13[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6D22[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSkillDataReference                   CallFunc_Array_Get_Item;                           // 0x50(0xE0)(HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6D3E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNWXClusterCollectionPresentationData CallFunc_GetClusterCollectionDiscoveryPresentationFromSkillReference_ClusterCollectionDiscoveryPresentationData; // 0x140(0x60)(None)
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6D55[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_RewardBehaviour_Technique_C*       K2Node_DynamicCast_AsBP_Reward_Behaviour_Technique; // 0x1A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6D5F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNWXClusterCollectionPresentationData CallFunc_GetClusterCollectionDiscoveryPresentationFromSkillReference_ClusterCollectionDiscoveryPresentationData_1; // 0x1B8(0x60)(None)
	TArray<struct FNWXClusterCollectionPresentationData> K2Node_MakeArray_Array;                            // 0x218(0x10)(ReferenceParm)
};

}
}


