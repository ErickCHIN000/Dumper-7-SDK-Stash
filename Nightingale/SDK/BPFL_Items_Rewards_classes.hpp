#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_Items_Rewards.BPFL_Items_Rewards_C
class UBPFL_Items_Rewards_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_Items_Rewards_C* GetDefaultObj();

	void GetEssenceRewardsForResourceNode(const struct FPowerLevel& ResourcePowerLevel, class UObject* __WorldContext, TArray<struct FInventoryEntry>* OutEssences, TArray<struct FInventoryEntry>& CallFunc_GenerateEssenceRewardsForResourceNode_ReturnValue);
	void GetItemRewardsFromConditionalList(TArray<class UConditionalItemRewards*>& ConditionalItemRewards, class UObject* __WorldContext, TArray<class UItemReward*>* ItemRewards, class UConditionalItemRewards* ConditionalRewardList, bool FoundSpecificReward, const TArray<class UItemReward*>& AllowedItemRewards, const struct FGameplayTagContainer& RealmTags, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UConditionalItemRewards* CallFunc_Array_Get_Item, const struct FItemRewardWithRequirements& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_DoesRealmMeetOneRequirement_AtLeastOneMet);
	void SpawnItemRewardsFromDataAsset(class UItemReward* ItemRewardData, const struct FTransform& SpawnTransform, const struct FVector& Impulse, double LifeTime, class UObject* SourceObject, class UObject* __WorldContext, const TArray<struct FInventoryEntry>& Rewards, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GenerateItemRewardsFromRewardData_bOutAwardItem, TArray<struct FInventoryEntry>& CallFunc_GenerateItemRewardsFromRewardData_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


