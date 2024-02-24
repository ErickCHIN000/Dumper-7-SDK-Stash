#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Reward_Transport_Pod_Selection.BP_Reward_Transport_Pod_Selection_C
// (Actor)

class UClass* ABP_Reward_Transport_Pod_Selection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Reward_Transport_Pod_Selection_C");

	return Clss;
}


// BP_Reward_Transport_Pod_Selection_C BP_Reward_Transport_Pod_Selection.Default__BP_Reward_Transport_Pod_Selection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Reward_Transport_Pod_Selection_C* ABP_Reward_Transport_Pod_Selection_C::GetDefaultObj()
{
	static class ABP_Reward_Transport_Pod_Selection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Reward_Transport_Pod_Selection_C*>(ABP_Reward_Transport_Pod_Selection_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Reward_Transport_Pod_Selection.BP_Reward_Transport_Pod_Selection_C.GetItemsFromSeed
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDynamicQuestRewardsRowHandleReward                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              Seed                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FRewardItemEntry>    RewardItems                                                      (Parm, OutParm)
// TArray<bool>                       Scale                                                            (Parm, OutParm)
// TArray<bool>                       Scales                                                           (Edit, BlueprintVisible)
// TArray<struct FRewardItemEntry>    ItemRewards                                                      (Edit, BlueprintVisible)
// struct FDynamicQuestReward         CallFunc_GetDynamicQuestRewardsStruct_DynamicQuestRewards        (None)
// enum class EValid                  CallFunc_GetDynamicQuestRewardsStruct_Paths                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestRewardItemEntry       CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRewardItemEntry            CallFunc_GenerateRewardItem_ItemEntry                            (NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Reward_Transport_Pod_Selection_C::GetItemsFromSeed(const struct FDynamicQuestRewardsRowHandle& Reward, int32 Seed, TArray<struct FRewardItemEntry>* RewardItems, TArray<bool>* Scale, const TArray<bool>& Scales, const TArray<struct FRewardItemEntry>& ItemRewards, const struct FDynamicQuestReward& CallFunc_GetDynamicQuestRewardsStruct_DynamicQuestRewards, enum class EValid CallFunc_GetDynamicQuestRewardsStruct_Paths, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, const struct FQuestRewardItemEntry& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FRewardItemEntry& CallFunc_GenerateRewardItem_ItemEntry, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Reward_Transport_Pod_Selection_C", "GetItemsFromSeed");

	Params::ABP_Reward_Transport_Pod_Selection_C_GetItemsFromSeed_Params Parms{};

	Parms.Reward = Reward;
	Parms.Seed = Seed;
	Parms.Scales = Scales;
	Parms.ItemRewards = ItemRewards;
	Parms.CallFunc_GetDynamicQuestRewardsStruct_DynamicQuestRewards = CallFunc_GetDynamicQuestRewardsStruct_DynamicQuestRewards;
	Parms.CallFunc_GetDynamicQuestRewardsStruct_Paths = CallFunc_GetDynamicQuestRewardsStruct_Paths;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GenerateRewardItem_ItemEntry = CallFunc_GenerateRewardItem_ItemEntry;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (RewardItems != nullptr)
		*RewardItems = std::move(Parms.RewardItems);

	if (Scale != nullptr)
		*Scale = std::move(Parms.Scale);

}


// Function BP_Reward_Transport_Pod_Selection.BP_Reward_Transport_Pod_Selection_C.GenerateRewardItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Seed                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDynamicQuestRewardItemsRowHandleQuestRewardItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FRewardItemEntry            ItemEntry                                                        (Parm, OutParm, NoDestructor)
// TArray<struct FRewardItemEntry>    Array                                                            (Edit, BlueprintVisible)
// int32                              ListID                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDynamicQuestRewardItem     CallFunc_GetDynamicQuestRewardItemsStruct_DynamicQuestRewardItems(None)
// enum class EValid                  CallFunc_GetDynamicQuestRewardItemsStruct_Paths                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRewardItemEntry            CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedListElement        K2Node_MakeStruct_WeightedListElement                            (None)
// int32                              CallFunc_CreateNewList_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveList_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWeightedListElement        CallFunc_GetSelectedElement_ReturnValue                          (None)
// bool                               CallFunc_AddElement_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRewardItemEntry            CallFunc_Array_Get_Item_1                                        (NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Reward_Transport_Pod_Selection_C::GenerateRewardItem(int32 Seed, const struct FDynamicQuestRewardItemsRowHandle& QuestRewardItem, struct FRewardItemEntry* ItemEntry, const TArray<struct FRewardItemEntry>& Array, int32 ListID, int32 Temp_int_Array_Index_Variable, const struct FDynamicQuestRewardItem& CallFunc_GetDynamicQuestRewardItemsStruct_DynamicQuestRewardItems, enum class EValid CallFunc_GetDynamicQuestRewardItemsStruct_Paths, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FRewardItemEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FWeightedListElement& K2Node_MakeStruct_WeightedListElement, int32 CallFunc_CreateNewList_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_RemoveList_ReturnValue, const struct FWeightedListElement& CallFunc_GetSelectedElement_ReturnValue, bool CallFunc_AddElement_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, const struct FRewardItemEntry& CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Reward_Transport_Pod_Selection_C", "GenerateRewardItem");

	Params::ABP_Reward_Transport_Pod_Selection_C_GenerateRewardItem_Params Parms{};

	Parms.Seed = Seed;
	Parms.QuestRewardItem = QuestRewardItem;
	Parms.Array = Array;
	Parms.ListID = ListID;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetDynamicQuestRewardItemsStruct_DynamicQuestRewardItems = CallFunc_GetDynamicQuestRewardItemsStruct_DynamicQuestRewardItems;
	Parms.CallFunc_GetDynamicQuestRewardItemsStruct_Paths = CallFunc_GetDynamicQuestRewardItemsStruct_Paths;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_MakeStruct_WeightedListElement = K2Node_MakeStruct_WeightedListElement;
	Parms.CallFunc_CreateNewList_ReturnValue = CallFunc_CreateNewList_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_RemoveList_ReturnValue = CallFunc_RemoveList_ReturnValue;
	Parms.CallFunc_GetSelectedElement_ReturnValue = CallFunc_GetSelectedElement_ReturnValue;
	Parms.CallFunc_AddElement_ReturnValue = CallFunc_AddElement_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemEntry != nullptr)
		*ItemEntry = std::move(Parms.ItemEntry);

}


// Function BP_Reward_Transport_Pod_Selection.BP_Reward_Transport_Pod_Selection_C.CheckForRewardCollected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasItems_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Reward_Transport_Pod_Selection_C::CheckForRewardCollected(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, bool CallFunc_HasItems_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Reward_Transport_Pod_Selection_C", "CheckForRewardCollected");

	Params::ABP_Reward_Transport_Pod_Selection_C_CheckForRewardCollected_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.CallFunc_HasItems_ReturnValue = CallFunc_HasItems_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Reward_Transport_Pod_Selection.BP_Reward_Transport_Pod_Selection_C.PlayerSelectedReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDynamicQuestRewardsRowHandleReward                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   Item                                                             (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Seed                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemData>           ItemsToAdd                                                       (Edit, BlueprintVisible, ContainsInstancedReference)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDynamicQuestDifficulty Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDynamicQuestDifficulty CallFunc_GetDynamicQuestDifficulty_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FRewardItemEntry>    CallFunc_GetItemsFromSeed_RewardItems                            (ReferenceParm)
// TArray<bool>                       CallFunc_GetItemsFromSeed_Scale                                  (ReferenceParm)
// bool                               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRewardItemEntry            CallFunc_Array_Get_Item_1                                        (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Roll_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESetDataSuccess         CallFunc_SetItemPropertyValue_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetItemTemplateStruct_ItemTemplate                      (ContainsInstancedReference)
// enum class EValid                  CallFunc_GetItemTemplateStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESetDataSuccess         CallFunc_SetItemPropertyValue_Paths_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_CreateItem_ReturnValue                                  (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemData>           CallFunc_ForceAddItems_RemainingItems                            (ReferenceParm, ContainsInstancedReference)

void ABP_Reward_Transport_Pod_Selection_C::PlayerSelectedReward(const struct FDynamicQuestRewardsRowHandle& Reward, const struct FItemData& Item, int32 Seed, const TArray<struct FItemData>& ItemsToAdd, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, int32 Temp_int_Array_Index_Variable, enum class EDynamicQuestDifficulty Temp_byte_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class EDynamicQuestDifficulty CallFunc_GetDynamicQuestDifficulty_ReturnValue, float K2Node_Select_Default, bool CallFunc_IsServer_ReturnValue, TArray<struct FRewardItemEntry>& CallFunc_GetItemsFromSeed_RewardItems, TArray<bool>& CallFunc_GetItemsFromSeed_Scale, bool CallFunc_Array_Get_Item, const struct FRewardItemEntry& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Roll_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class ESetDataSuccess CallFunc_SetItemPropertyValue_Paths, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate, enum class EValid CallFunc_GetItemTemplateStruct_Paths, int32 CallFunc_FCeil_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, enum class ESetDataSuccess CallFunc_SetItemPropertyValue_Paths_1, const struct FItemData& CallFunc_CreateItem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, TArray<struct FItemData>& CallFunc_ForceAddItems_RemainingItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Reward_Transport_Pod_Selection_C", "PlayerSelectedReward");

	Params::ABP_Reward_Transport_Pod_Selection_C_PlayerSelectedReward_Params Parms{};

	Parms.Reward = Reward;
	Parms.Item = Item;
	Parms.Seed = Seed;
	Parms.ItemsToAdd = ItemsToAdd;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDynamicQuestDifficulty_ReturnValue = CallFunc_GetDynamicQuestDifficulty_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetItemsFromSeed_RewardItems = CallFunc_GetItemsFromSeed_RewardItems;
	Parms.CallFunc_GetItemsFromSeed_Scale = CallFunc_GetItemsFromSeed_Scale;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Roll_ReturnValue = CallFunc_Roll_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_SetItemPropertyValue_Paths = CallFunc_SetItemPropertyValue_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_GetItemTemplateStruct_ItemTemplate = CallFunc_GetItemTemplateStruct_ItemTemplate;
	Parms.CallFunc_GetItemTemplateStruct_Paths = CallFunc_GetItemTemplateStruct_Paths;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_SetItemPropertyValue_Paths_1 = CallFunc_SetItemPropertyValue_Paths_1;
	Parms.CallFunc_CreateItem_ReturnValue = CallFunc_CreateItem_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.CallFunc_ForceAddItems_RemainingItems = CallFunc_ForceAddItems_RemainingItems;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Reward_Transport_Pod_Selection.BP_Reward_Transport_Pod_Selection_C.PopulateRewardsArray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDynamicQuestRewardsRowHandleCallFunc_MakeDynamicQuestRewards_ReturnValue                     (NoDestructor, HasGetValueTypeHash)
// struct FDynamicQuestRewardsRowHandleCallFunc_MakeDynamicQuestRewards_ReturnValue_1                   (NoDestructor, HasGetValueTypeHash)
// struct FDynamicQuestRewardsRowHandleCallFunc_MakeDynamicQuestRewards_ReturnValue_2                   (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Reward_Transport_Pod_Selection_C::PopulateRewardsArray(int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, const struct FDynamicQuestRewardsRowHandle& CallFunc_MakeDynamicQuestRewards_ReturnValue, const struct FDynamicQuestRewardsRowHandle& CallFunc_MakeDynamicQuestRewards_ReturnValue_1, const struct FDynamicQuestRewardsRowHandle& CallFunc_MakeDynamicQuestRewards_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Reward_Transport_Pod_Selection_C", "PopulateRewardsArray");

	Params::ABP_Reward_Transport_Pod_Selection_C_PopulateRewardsArray_Params Parms{};

	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_MakeDynamicQuestRewards_ReturnValue = CallFunc_MakeDynamicQuestRewards_ReturnValue;
	Parms.CallFunc_MakeDynamicQuestRewards_ReturnValue_1 = CallFunc_MakeDynamicQuestRewards_ReturnValue_1;
	Parms.CallFunc_MakeDynamicQuestRewards_ReturnValue_2 = CallFunc_MakeDynamicQuestRewards_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.CallFunc_Array_Add_ReturnValue_5 = CallFunc_Array_Add_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Reward_Transport_Pod_Selection.BP_Reward_Transport_Pod_Selection_C.GenerateRewards
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDynamicQuestRewardsRowHandle>Rewards                                                          (Edit, BlueprintVisible)
// int32                              CallFunc_RollMax_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RollMax_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RollMax_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDynamicQuestRewardsRowHandleCallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// struct FDynamicQuestRewardsRowHandleCallFunc_Array_Get_Item_1                                        (NoDestructor, HasGetValueTypeHash)
// struct FDynamicQuestRewardsRowHandleCallFunc_Array_Get_Item_2                                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDynamicQuestRewardsRowHandleCallFunc_GenerateReward_DynamicQuestReward                       (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Reward_Transport_Pod_Selection_C::GenerateRewards(const TArray<struct FDynamicQuestRewardsRowHandle>& Rewards, int32 CallFunc_RollMax_ReturnValue, int32 CallFunc_RollMax_ReturnValue_1, int32 CallFunc_RollMax_ReturnValue_2, const struct FDynamicQuestRewardsRowHandle& CallFunc_Array_Get_Item, const struct FDynamicQuestRewardsRowHandle& CallFunc_Array_Get_Item_1, const struct FDynamicQuestRewardsRowHandle& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FDynamicQuestRewardsRowHandle& CallFunc_GenerateReward_DynamicQuestReward, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Reward_Transport_Pod_Selection_C", "GenerateRewards");

	Params::ABP_Reward_Transport_Pod_Selection_C_GenerateRewards_Params Parms{};

	Parms.Rewards = Rewards;
	Parms.CallFunc_RollMax_ReturnValue = CallFunc_RollMax_ReturnValue;
	Parms.CallFunc_RollMax_ReturnValue_1 = CallFunc_RollMax_ReturnValue_1;
	Parms.CallFunc_RollMax_ReturnValue_2 = CallFunc_RollMax_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GenerateReward_DynamicQuestReward = CallFunc_GenerateReward_DynamicQuestReward;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Reward_Transport_Pod_Selection.BP_Reward_Transport_Pod_Selection_C.GenerateReward
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDynamicQuestRewardsRowHandleDynamicQuestReward                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// struct FDynamicQuestRewardsRowHandleSelectedElement                                                  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// int32                              ListID                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDynamicQuestRewardsEnum    CallFunc_IntToStruct_ReturnValue                                 (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDynamicQuestRewardsRowHandleCallFunc_StructToRowHandle_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// struct FDynamicQuestReward         CallFunc_GetDynamicQuestRewardsStruct_DynamicQuestRewards        (None)
// enum class EValid                  CallFunc_GetDynamicQuestRewardsStruct_Paths                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWeightedListElement        K2Node_MakeStruct_WeightedListElement                            (None)
// int32                              CallFunc_RollMax_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CreateNewList_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveList_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_NumRows_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedListElement        CallFunc_GetSelectedElement_ReturnValue                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDynamicQuestRewardsRowHandleCallFunc_MakeDynamicQuestRewards_ReturnValue                     (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddElement_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Reward_Transport_Pod_Selection_C::GenerateReward(struct FDynamicQuestRewardsRowHandle* DynamicQuestReward, const struct FDynamicQuestRewardsRowHandle& SelectedElement, int32 ListID, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FDynamicQuestRewardsEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FDynamicQuestRewardsRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FDynamicQuestReward& CallFunc_GetDynamicQuestRewardsStruct_DynamicQuestRewards, enum class EValid CallFunc_GetDynamicQuestRewardsStruct_Paths, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FWeightedListElement& K2Node_MakeStruct_WeightedListElement, int32 CallFunc_RollMax_ReturnValue, int32 CallFunc_CreateNewList_ReturnValue, bool CallFunc_RemoveList_ReturnValue, int32 CallFunc_NumRows_ReturnValue, const struct FWeightedListElement& CallFunc_GetSelectedElement_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FDynamicQuestRewardsRowHandle& CallFunc_MakeDynamicQuestRewards_ReturnValue, bool CallFunc_AddElement_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Reward_Transport_Pod_Selection_C", "GenerateReward");

	Params::ABP_Reward_Transport_Pod_Selection_C_GenerateReward_Params Parms{};

	Parms.SelectedElement = SelectedElement;
	Parms.ListID = ListID;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_IntToStruct_ReturnValue = CallFunc_IntToStruct_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_StructToRowHandle_ReturnValue = CallFunc_StructToRowHandle_ReturnValue;
	Parms.CallFunc_GetDynamicQuestRewardsStruct_DynamicQuestRewards = CallFunc_GetDynamicQuestRewardsStruct_DynamicQuestRewards;
	Parms.CallFunc_GetDynamicQuestRewardsStruct_Paths = CallFunc_GetDynamicQuestRewardsStruct_Paths;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_WeightedListElement = K2Node_MakeStruct_WeightedListElement;
	Parms.CallFunc_RollMax_ReturnValue = CallFunc_RollMax_ReturnValue;
	Parms.CallFunc_CreateNewList_ReturnValue = CallFunc_CreateNewList_ReturnValue;
	Parms.CallFunc_RemoveList_ReturnValue = CallFunc_RemoveList_ReturnValue;
	Parms.CallFunc_NumRows_ReturnValue = CallFunc_NumRows_ReturnValue;
	Parms.CallFunc_GetSelectedElement_ReturnValue = CallFunc_GetSelectedElement_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_MakeDynamicQuestRewards_ReturnValue = CallFunc_MakeDynamicQuestRewards_ReturnValue;
	Parms.CallFunc_AddElement_ReturnValue = CallFunc_AddElement_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DynamicQuestReward != nullptr)
		*DynamicQuestReward = std::move(Parms.DynamicQuestReward);

}


// Function BP_Reward_Transport_Pod_Selection.BP_Reward_Transport_Pod_Selection_C.WorldObject_Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Reward_Transport_Pod_Selection_C::WorldObject_Interact(class AActor* Instigator, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Reward_Transport_Pod_Selection_C", "WorldObject_Interact");

	Params::ABP_Reward_Transport_Pod_Selection_C_WorldObject_Interact_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Reward_Transport_Pod_Selection.BP_Reward_Transport_Pod_Selection_C.IcarusBeginPlay
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:

void ABP_Reward_Transport_Pod_Selection_C::IcarusBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Reward_Transport_Pod_Selection_C", "IcarusBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Reward_Transport_Pod_Selection.BP_Reward_Transport_Pod_Selection_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Reward_Transport_Pod_Selection_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Reward_Transport_Pod_Selection_C", "ReceiveTick");

	Params::ABP_Reward_Transport_Pod_Selection_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Reward_Transport_Pod_Selection.BP_Reward_Transport_Pod_Selection_C.ExecuteUbergraph_BP_Reward_Transport_Pod_Selection
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Reward_Transport_Pod_Selection_C::ExecuteUbergraph_BP_Reward_Transport_Pod_Selection(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Reward_Transport_Pod_Selection_C", "ExecuteUbergraph_BP_Reward_Transport_Pod_Selection");

	Params::ABP_Reward_Transport_Pod_Selection_C_ExecuteUbergraph_BP_Reward_Transport_Pod_Selection_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


