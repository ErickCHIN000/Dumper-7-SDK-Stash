#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_Items_Resources.BPFL_Items_Resources_C
class UBPFL_Items_Resources_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_Items_Resources_C* GetDefaultObj();

	void CalculateResourceYieldBonus(class AActor* Actor, int32 InitialQuantity, class UObject* __WorldContext, int32* Total, int32* Bonus, int32 LQuantity, class AActor* LActor, bool CallFunc_IsValid_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, TArray<double>& K2Node_MakeArray_Array, double CallFunc_StandardBonusFormula_Total, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, double K2Node_MakeArray__0__ImplicitCast);
	void GetHarvestingSkills(class UObject* __WorldContext, TArray<struct FS_HarvestingSkill>* HarvestingSkills, const TArray<struct FS_HarvestingSkill>& LHarvestingSkills, TArray<struct FS_HarvestingSkill>& K2Node_MakeArray_Array);
	void ShouldHarvestingReroll(class UAbilitySystemComponent* HarvesterASC, const struct FItemDataReference& ItemRolled, class UObject* __WorldContext, bool* ShouldReroll, const struct FGameplayTag& DesiredTrait, int32 Temp_int_Array_Index_Variable, TArray<struct FS_HarvestingSkill>& CallFunc_GetHarvestingSkills_HarvestingSkills, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FS_HarvestingSkill& CallFunc_Array_Get_Item, bool CallFunc_GetDefaultItemTraitsArray_Success, const struct FGameplayTagContainer& CallFunc_GetDefaultItemTraitsArray_ReturnValue, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, const struct FGameplayTag& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_MatchesTag_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void Get_Harvesting_Rolls(class UAbilitySystemComponent* HarvesterASC, class UObject* __WorldContext, int32* Rolls, int32 Temp_int_Array_Index_Variable, TArray<struct FS_HarvestingSkill>& CallFunc_GetHarvestingSkills_HarvestingSkills, const struct FS_HarvestingSkill& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	bool IsEntryResource(const struct FInventoryEntry& ItemEntry, class UObject* __WorldContext, const class FString& DataString, const struct FDynamicTypedStructs& InstancedData, const struct FDataTableRowHandle& ItemHandle, bool CallFunc_IsItemResource_Return_Value);
};

}


