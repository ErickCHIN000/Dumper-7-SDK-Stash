#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_ItemAudio.BPFL_ItemAudio_C
class UBPFL_ItemAudio_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_ItemAudio_C* GetDefaultObj();

	void GetATRowAndColumnFromItemData(const struct FInventoryEntry& InventoryEntry, class UObject* __WorldContext, struct FGameplayTag* ATRow, struct FGameplayTag* ATColumn, const struct FGameplayTag& CallFunc_GetItemAVFXTag_ReturnValue, const struct FGameplayTag& CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag);
	void GetPrimaryTaxonomyTagFromItemData(const struct FInventoryEntry& InventoryEntry, class UObject* __WorldContext, struct FGameplayTag* TaxonomyTag, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, const struct FGameplayTag& CallFunc_GetItemTypeTag_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

}


