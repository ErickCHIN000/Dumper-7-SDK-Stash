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

// 0x128 (0x128 - 0x0)
// Function BP_Reward_Transport_Pod_Selection.BP_Reward_Transport_Pod_Selection_C.GetItemsFromSeed
struct ABP_Reward_Transport_Pod_Selection_C_GetItemsFromSeed_Params
{
public:
	struct FDynamicQuestRewardsRowHandle         Reward;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                        Seed;                                              // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4862[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRewardItemEntry>              RewardItems;                                       // 0x20(0x10)(Parm, OutParm)
	TArray<bool>                                 Scale;                                             // 0x30(0x10)(Parm, OutParm)
	TArray<bool>                                 Scales;                                            // 0x40(0x10)(Edit, BlueprintVisible)
	TArray<struct FRewardItemEntry>              ItemRewards;                                       // 0x50(0x10)(Edit, BlueprintVisible)
	struct FDynamicQuestReward                   CallFunc_GetDynamicQuestRewardsStruct_DynamicQuestRewards; // 0x60(0x60)(None)
	enum class EValid                            CallFunc_GetDynamicQuestRewardsStruct_Paths;       // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4892[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_48A3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestRewardItemEntry                 CallFunc_Array_Get_Item;                           // 0xD0(0x1C)(NoDestructor)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_48B7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRewardItemEntry                      CallFunc_GenerateRewardItem_ItemEntry;             // 0xFC(0x24)(NoDestructor)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14D (0x14D - 0x0)
// Function BP_Reward_Transport_Pod_Selection.BP_Reward_Transport_Pod_Selection_C.GenerateRewardItem
struct ABP_Reward_Transport_Pod_Selection_C_GenerateRewardItem_Params
{
public:
	int32                                        Seed;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDynamicQuestRewardItemsRowHandle     QuestRewardItem;                                   // 0x4(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FRewardItemEntry                      ItemEntry;                                         // 0x1C(0x24)(Parm, OutParm, NoDestructor)
	TArray<struct FRewardItemEntry>              Array;                                             // 0x40(0x10)(Edit, BlueprintVisible)
	int32                                        ListID;                                            // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDynamicQuestRewardItem               CallFunc_GetDynamicQuestRewardItemsStruct_DynamicQuestRewardItems; // 0x58(0x28)(None)
	enum class EValid                            CallFunc_GetDynamicQuestRewardItemsStruct_Paths;   // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A00[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRewardItemEntry                      CallFunc_Array_Get_Item;                           // 0x9C(0x24)(NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A10[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeightedListElement                  K2Node_MakeStruct_WeightedListElement;             // 0xC8(0x20)(None)
	int32                                        CallFunc_CreateNewList_ReturnValue;                // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A23[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveList_ReturnValue;                   // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A2F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeightedListElement                  CallFunc_GetSelectedElement_ReturnValue;           // 0x100(0x20)(None)
	bool                                         CallFunc_AddElement_ReturnValue;                   // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A3B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRewardItemEntry                      CallFunc_Array_Get_Item_1;                         // 0x128(0x24)(NoDestructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x14C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function BP_Reward_Transport_Pod_Selection.BP_Reward_Transport_Pod_Selection_C.CheckForRewardCollected
struct ABP_Reward_Transport_Pod_Selection_C_CheckForRewardCollected_Params
{
public:
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4AE5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventory*                            CallFunc_GetInventory_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasItems_ReturnValue;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6C8 (0x6C8 - 0x0)
// Function BP_Reward_Transport_Pod_Selection.BP_Reward_Transport_Pod_Selection_C.PlayerSelectedReward
struct ABP_Reward_Transport_Pod_Selection_C_PlayerSelectedReward_Params
{
public:
	struct FDynamicQuestRewardsRowHandle         Reward;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FItemData                             Item;                                              // 0x18(0x1F0)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                        Seed;                                              // 0x208(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C6B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FItemData>                     ItemsToAdd;                                        // 0x210(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	float                                        Temp_float_Variable;                               // 0x220(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_1;                             // 0x224(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_2;                             // 0x228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_3;                             // 0x22C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDynamicQuestDifficulty           Temp_byte_Variable;                                // 0x234(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C9E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDynamicQuestDifficulty           CallFunc_GetDynamicQuestDifficulty_ReturnValue;    // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4CC1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default;                             // 0x244(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CD0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRewardItemEntry>              CallFunc_GetItemsFromSeed_RewardItems;             // 0x250(0x10)(ReferenceParm)
	TArray<bool>                                 CallFunc_GetItemsFromSeed_Scale;                   // 0x260(0x10)(ReferenceParm)
	bool                                         CallFunc_Array_Get_Item;                           // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CE3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRewardItemEntry                      CallFunc_Array_Get_Item_1;                         // 0x274(0x24)(NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x298(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Roll_ReturnValue;                         // 0x29C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESetDataSuccess                   CallFunc_SetItemPropertyValue_Paths;               // 0x2A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x2A2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D0C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x2A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemData                             CallFunc_GetItemTemplateStruct_ItemTemplate;       // 0x2A8(0x1F0)(ContainsInstancedReference)
	enum class EValid                            CallFunc_GetItemTemplateStruct_Paths;              // 0x498(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D1F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_FCeil_ReturnValue;                        // 0x49C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x4A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESetDataSuccess                   CallFunc_SetItemPropertyValue_Paths_1;             // 0x4A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D39[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_CreateItem_ReturnValue;                   // 0x4A8(0x1F0)(ContainsInstancedReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x698(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D40[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x69C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Get_Item_2;                         // 0x6A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x6A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x6A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D54[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventory*                            CallFunc_GetInventory_ReturnValue;                 // 0x6B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FItemData>                     CallFunc_ForceAddItems_RemainingItems;             // 0x6B8(0x10)(ReferenceParm, ContainsInstancedReference)
};

// 0x60 (0x60 - 0x0)
// Function BP_Reward_Transport_Pod_Selection.BP_Reward_Transport_Pod_Selection_C.PopulateRewardsArray
struct ABP_Reward_Transport_Pod_Selection_C_PopulateRewardsArray_Params
{
public:
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDynamicQuestRewardsRowHandle         CallFunc_MakeDynamicQuestRewards_ReturnValue;      // 0xC(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FDynamicQuestRewardsRowHandle         CallFunc_MakeDynamicQuestRewards_ReturnValue_1;    // 0x24(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FDynamicQuestRewardsRowHandle         CallFunc_MakeDynamicQuestRewards_ReturnValue_2;    // 0x3C(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_3;                  // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_4;                  // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_5;                  // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function BP_Reward_Transport_Pod_Selection.BP_Reward_Transport_Pod_Selection_C.GenerateRewards
struct ABP_Reward_Transport_Pod_Selection_C_GenerateRewards_Params
{
public:
	TArray<struct FDynamicQuestRewardsRowHandle> Rewards;                                           // 0x0(0x10)(Edit, BlueprintVisible)
	int32                                        CallFunc_RollMax_ReturnValue;                      // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RollMax_ReturnValue_1;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RollMax_ReturnValue_2;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDynamicQuestRewardsRowHandle         CallFunc_Array_Get_Item;                           // 0x1C(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FDynamicQuestRewardsRowHandle         CallFunc_Array_Get_Item_1;                         // 0x34(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FDynamicQuestRewardsRowHandle         CallFunc_Array_Get_Item_2;                         // 0x4C(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F76[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDynamicQuestRewardsRowHandle         CallFunc_GenerateReward_DynamicQuestReward;        // 0x6C(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x165 (0x165 - 0x0)
// Function BP_Reward_Transport_Pod_Selection.BP_Reward_Transport_Pod_Selection_C.GenerateReward
struct ABP_Reward_Transport_Pod_Selection_C_GenerateReward_Params
{
public:
	struct FDynamicQuestRewardsRowHandle         DynamicQuestReward;                                // 0x0(0x18)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	struct FDynamicQuestRewardsRowHandle         SelectedElement;                                   // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	int32                                        ListID;                                            // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50A9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDynamicQuestRewardsEnum              CallFunc_IntToStruct_ReturnValue;                  // 0x40(0x10)(HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDynamicQuestRewardsRowHandle         CallFunc_StructToRowHandle_ReturnValue;            // 0x54(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50C1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDynamicQuestReward                   CallFunc_GetDynamicQuestRewardsStruct_DynamicQuestRewards; // 0x70(0x60)(None)
	enum class EValid                            CallFunc_GetDynamicQuestRewardsStruct_Paths;       // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeightedListElement                  K2Node_MakeStruct_WeightedListElement;             // 0xF0(0x20)(None)
	int32                                        CallFunc_RollMax_ReturnValue;                      // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_CreateNewList_ReturnValue;                // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveList_ReturnValue;                   // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50FE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_NumRows_ReturnValue;                      // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeightedListElement                  CallFunc_GetSelectedElement_ReturnValue;           // 0x120(0x20)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_511A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x144(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDynamicQuestRewardsRowHandle         CallFunc_MakeDynamicQuestRewards_ReturnValue;      // 0x14C(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AddElement_ReturnValue;                   // 0x164(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function BP_Reward_Transport_Pod_Selection.BP_Reward_Transport_Pod_Selection_C.WorldObject_Interact
struct ABP_Reward_Transport_Pod_Selection_C_WorldObject_Interact_Params
{
public:
	class AActor*                                Instigator;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusPlayerCharacterSurvival_C*   K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5232[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusPlayerControllerSurvival_C*  K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BP_Reward_Transport_Pod_Selection.BP_Reward_Transport_Pod_Selection_C.ReceiveTick
struct ABP_Reward_Transport_Pod_Selection_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Reward_Transport_Pod_Selection.BP_Reward_Transport_Pod_Selection_C.ExecuteUbergraph_BP_Reward_Transport_Pod_Selection
struct ABP_Reward_Transport_Pod_Selection_C_ExecuteUbergraph_BP_Reward_Transport_Pod_Selection_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


