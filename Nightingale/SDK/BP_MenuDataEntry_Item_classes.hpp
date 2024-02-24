#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x370 - 0x370)
// BlueprintGeneratedClass BP_MenuDataEntry_Item.BP_MenuDataEntry_Item_C
class UBP_MenuDataEntry_Item_C : public UNWXMenuDataEntryItem
{
public:

	static class UClass* StaticClass();
	static class UBP_MenuDataEntry_Item_C* GetDefaultObj();

	enum class EItemQuality GetItemQuality(const struct FInventoryEntry& CallFunc_GetInventoryEntry_ReturnValue, enum class EItemQuality CallFunc_GetItemQualityFromEntry_ReturnValue);
	class UWidget* GetTooltipWidget(class UWBP_ItemTooltip_C* CallFunc_Create_ReturnValue, const struct FInventoryEntry& CallFunc_GetInventoryEntry_ReturnValue);
};

}


