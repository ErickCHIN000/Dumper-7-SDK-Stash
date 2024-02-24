#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_Equipment.BPFL_Equipment_C
class UBPFL_Equipment_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_Equipment_C* GetDefaultObj();

	void HasEquippedItemWithAnyTags(class AActor* Actor, const struct FGameplayTagContainer& Tags, class UObject* __WorldContext, bool* bHasItemWithTags, class AEquippableItem* EquippedItem, class AEquippableItem* CallFunc_GetEquippedItem_EquippedQuickbarItem, bool CallFunc_IsValid_ReturnValue, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, const struct FGameplayTagContainer& CallFunc_GetItemTags_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_HasAnyTags_ReturnValue);
	bool CanManageLoadout(class AController* Controller, class UObject* __WorldContext, const class FString& CurrentMap, const TArray<class FString>& VALID_MAPS, bool bCanManageLoadout, class UBP_UI_PersistenceComponent_C* CurrentUIPersistence, TArray<class FString>& K2Node_MakeArray_Array);
	void HasEnhancedWading(class AActor* Player, class UObject* __WorldContext, bool* Equipped, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetEquippedItem(class AActor* Actor, class UObject* __WorldContext, class AEquippableItem** EquippedQuickbarItem, class AEquippableItem* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue);
};

}


