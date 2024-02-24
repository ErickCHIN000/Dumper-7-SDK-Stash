#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_Items_Rewards.BPFL_Items_Rewards_C
// (None)

class UClass* UBPFL_Items_Rewards_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_Items_Rewards_C");

	return Clss;
}


// BPFL_Items_Rewards_C BPFL_Items_Rewards.Default__BPFL_Items_Rewards_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_Items_Rewards_C* UBPFL_Items_Rewards_C::GetDefaultObj()
{
	static class UBPFL_Items_Rewards_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_Items_Rewards_C*>(UBPFL_Items_Rewards_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_Items_Rewards.BPFL_Items_Rewards_C.GetEssenceRewardsForResourceNode
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPowerLevel                 ResourcePowerLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     OutEssences                                                      (Parm, OutParm)
// TArray<struct FInventoryEntry>     CallFunc_GenerateEssenceRewardsForResourceNode_ReturnValue       (ReferenceParm)

void UBPFL_Items_Rewards_C::GetEssenceRewardsForResourceNode(const struct FPowerLevel& ResourcePowerLevel, class UObject* __WorldContext, TArray<struct FInventoryEntry>* OutEssences, TArray<struct FInventoryEntry>& CallFunc_GenerateEssenceRewardsForResourceNode_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_Rewards_C", "GetEssenceRewardsForResourceNode");

	Params::UBPFL_Items_Rewards_C_GetEssenceRewardsForResourceNode_Params Parms{};

	Parms.ResourcePowerLevel = ResourcePowerLevel;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GenerateEssenceRewardsForResourceNode_ReturnValue = CallFunc_GenerateEssenceRewardsForResourceNode_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutEssences != nullptr)
		*OutEssences = std::move(Parms.OutEssences);

}


// Function BPFL_Items_Rewards.BPFL_Items_Rewards_C.GetItemRewardsFromConditionalList
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UConditionalItemRewards*>ConditionalItemRewards                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UItemReward*>         ItemRewards                                                      (Parm, OutParm)
// class UConditionalItemRewards*     ConditionalRewardList                                            (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               FoundSpecificReward                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UItemReward*>         AllowedItemRewards                                               (Edit, BlueprintVisible)
// struct FGameplayTagContainer       RealmTags                                                        (Edit, BlueprintVisible)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UConditionalItemRewards*     CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemRewardWithRequirements CallFunc_Array_Get_Item_1                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesRealmMeetOneRequirement_AtLeastOneMet               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_Rewards_C::GetItemRewardsFromConditionalList(TArray<class UConditionalItemRewards*>& ConditionalItemRewards, class UObject* __WorldContext, TArray<class UItemReward*>* ItemRewards, class UConditionalItemRewards* ConditionalRewardList, bool FoundSpecificReward, const TArray<class UItemReward*>& AllowedItemRewards, const struct FGameplayTagContainer& RealmTags, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UConditionalItemRewards* CallFunc_Array_Get_Item, const struct FItemRewardWithRequirements& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_DoesRealmMeetOneRequirement_AtLeastOneMet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_Rewards_C", "GetItemRewardsFromConditionalList");

	Params::UBPFL_Items_Rewards_C_GetItemRewardsFromConditionalList_Params Parms{};

	Parms.ConditionalItemRewards = ConditionalItemRewards;
	Parms.__WorldContext = __WorldContext;
	Parms.ConditionalRewardList = ConditionalRewardList;
	Parms.FoundSpecificReward = FoundSpecificReward;
	Parms.AllowedItemRewards = AllowedItemRewards;
	Parms.RealmTags = RealmTags;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_DoesRealmMeetOneRequirement_AtLeastOneMet = CallFunc_DoesRealmMeetOneRequirement_AtLeastOneMet;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemRewards != nullptr)
		*ItemRewards = std::move(Parms.ItemRewards);

}


// Function BPFL_Items_Rewards.BPFL_Items_Rewards_C.SpawnItemRewardsFromDataAsset
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemReward*                 ItemRewardData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  SpawnTransform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Impulse                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LifeTime                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     SourceObject                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     Rewards                                                          (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GenerateItemRewardsFromRewardData_bOutAwardItem         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GenerateItemRewardsFromRewardData_ReturnValue           (ReferenceParm)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_Rewards_C::SpawnItemRewardsFromDataAsset(class UItemReward* ItemRewardData, const struct FTransform& SpawnTransform, const struct FVector& Impulse, double LifeTime, class UObject* SourceObject, class UObject* __WorldContext, const TArray<struct FInventoryEntry>& Rewards, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GenerateItemRewardsFromRewardData_bOutAwardItem, TArray<struct FInventoryEntry>& CallFunc_GenerateItemRewardsFromRewardData_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_Rewards_C", "SpawnItemRewardsFromDataAsset");

	Params::UBPFL_Items_Rewards_C_SpawnItemRewardsFromDataAsset_Params Parms{};

	Parms.ItemRewardData = ItemRewardData;
	Parms.SpawnTransform = SpawnTransform;
	Parms.Impulse = Impulse;
	Parms.LifeTime = LifeTime;
	Parms.SourceObject = SourceObject;
	Parms.__WorldContext = __WorldContext;
	Parms.Rewards = Rewards;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GenerateItemRewardsFromRewardData_bOutAwardItem = CallFunc_GenerateItemRewardsFromRewardData_bOutAwardItem;
	Parms.CallFunc_GenerateItemRewardsFromRewardData_ReturnValue = CallFunc_GenerateItemRewardsFromRewardData_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


