#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2A0 - 0x260)
// WidgetBlueprintGeneratedClass wid_DialogueItemInfo_Entry.wid_DialogueItemInfo_Entry_C
class UWid_DialogueItemInfo_Entry_C : public UUserWidget
{
public:
	class UImage*                                CategoryBackgroundColour;                          // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CategoryBorder;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            InventoryAmount;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            InventoryText;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ItemIcon;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ItemName;                                          // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            StoredAmount;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            StoredText;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_DialogueItemInfo_Entry_C* GetDefaultObj();

	void GetCategoryColour(enum class EItemCategory Category, struct FSlateColor* SlateColor, bool* Valid, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FSt_Inventory_Category& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void Update(class FName ItemId, const struct FItemEntry& ItemInfo, float StoredAmountValue, float InventoryAmountValue, bool Temp_bool_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FSlateColor& CallFunc_GetCategoryColour_SlateColor, bool CallFunc_GetCategoryColour_Valid, class FText CallFunc_FormatText_Output, enum class ESlateVisibility K2Node_Select_Default, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, bool CallFunc_GetItemInfo_IsValid, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew_1, float CallFunc_Count_ReturnValue, float CallFunc_Count_ReturnValue_1, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew_2, bool CallFunc_GetItemInfo_IsValid_1, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
};

}


