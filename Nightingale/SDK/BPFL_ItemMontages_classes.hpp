#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_ItemMontages.BPFL_ItemMontages_C
class UBPFL_ItemMontages_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_ItemMontages_C* GetDefaultObj();

	void ProxyPickupMontageTag(class UObject* __WorldContext, struct FGameplayTag* Tag);
	void RandomMontage(TArray<class UAnimMontage*>& MontageArray, class UObject* __WorldContext, class UAnimMontage** RandomMontage, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, class UAnimMontage* CallFunc_Array_Get_Item);
	void GetRandomMontagesFromSet(const struct FAbilityMontages& MontageSet, class UObject* __WorldContext, class UAnimMontage** RandomFirstPersonItem, class UAnimMontage** RandomFirstPersonCharacter, class UAnimMontage** RandomThirdPersonItem, class UAnimMontage** RandomThirdPersonCharacter, class UAnimMontage* ThirdPersonCharacter, class UAnimMontage* ThirdPersonItem, class UAnimMontage* FirstPersonCharacter, class UAnimMontage* FirstPersonItem, class UAnimMontage* CallFunc_RandomMontage_RandomMontage, class UAnimMontage* CallFunc_RandomMontage_RandomMontage_1, class UAnimMontage* CallFunc_RandomMontage_RandomMontage_2, class UAnimMontage* CallFunc_RandomMontage_RandomMontage_3);
	void GetMontageSetForAction(const struct FItemDataReference& ItemReference, struct FGameplayTag& ActionTag, class UObject* __WorldContext, bool* bFoundMontageSet, struct FAbilityMontages* MontageSetForAction, class UClass* LocalAnimBank, class UAnimB_Base_FP_C* CallFunc_GetDefaultObject_ReturnValue, class UClass* CallFunc_GetItemAnimationBanks_AnimBank_FP, bool CallFunc_IsValidClass_ReturnValue, const struct FAbilityMontages& CallFunc_GetAbilityMontageSet_OutMontageSets, bool CallFunc_GetAbilityMontageSet_bSucceeded);
	void GetItemMontage(const struct FItemDataReference& ItemId, const struct FGameplayTag& Action, enum class E_ItemMontageSkeletonType Type, class UObject* __WorldContext, bool* Success, class UAnimMontage** Montage, const TArray<class UAnimMontage*>& Montages, const struct FAbilityMontages& MontageSetForAction, bool ItemData, bool CallFunc_GetMontageSetForAction_bFoundMontageSet, const struct FAbilityMontages& CallFunc_GetMontageSetForAction_MontageSetForAction, class UAnimMontage* CallFunc_Array_Get_Item, bool CallFunc_Array_IsNotEmpty_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

}


