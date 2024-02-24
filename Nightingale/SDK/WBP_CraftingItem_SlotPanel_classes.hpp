#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x398 - 0x340)
// WidgetBlueprintGeneratedClass WBP_CraftingItem_SlotPanel.WBP_CraftingItem_SlotPanel_C
class UWBP_CraftingItem_SlotPanel_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               border_Rarity;                                     // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_locked;                                        // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Slot_MetalRing;                                // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_SlotBG;                                        // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_SlottedIngredientIcon;                         // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Slot_Overlay;                                      // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_SlotTitle;                                     // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Vb_SlotDetails;                                    // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        SlotIndex;                                         // 0x388(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_144E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXMenuDataEntry*                     EntryToUpgrade;                                    // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CraftingItem_SlotPanel_C* GetDefaultObj();

	void SetQualityDependantDescription(class FText QualityOverride, const struct FLinearColor& Temp_struct_Variable, bool CallFunc_TextIsEmpty_ReturnValue, bool Temp_bool_Variable, class FText Temp_text_Variable, class UWBP_BasicText_OneLine_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default);
	void GetLockIconVisibility(int32 LockedSlotIndex, enum class ESlateVisibility* NewVisibility, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateItemIcon(struct FInventoryEntry& Ingredient, TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
	void UpdateItemDescription(struct FInventoryEntry& Ingredient, const struct FGameplayAttributeUIData& CurrentAttributeUIData, const struct FGameplayAttribute& CurrentAttribute, TMap<struct FGameplayAttribute, float> AttributeChanges, class FText DisplayText, class UWBP_BasicText_OneLine_C* CallFunc_Create_ReturnValue, class UWBP_BasicText_OneLine_C* CallFunc_Create_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_TryGetUIDataForAttribute_bSuccess, const struct FGameplayAttributeUIData& CallFunc_TryGetUIDataForAttribute_OutData, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_AsPercent_Float_ReturnValue, bool K2Node_MathExpression_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, TArray<struct FGameplayAttribute>& CallFunc_Map_Keys_Keys, class FText CallFunc_GetItemDescription_ReturnValue, const struct FGameplayAttribute& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class EGetResult CallFunc_TryConstructItemAttributeModifier_Branches, const struct FInstancedItemAttributeModifier& CallFunc_TryConstructItemAttributeModifier_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UNWXMenuDataEntryItem* K2Node_DynamicCast_AsNWXMenu_Data_Entry_Item, bool K2Node_DynamicCast_bSuccess, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FInventoryEntry& CallFunc_GetInventoryEntry_ReturnValue, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, TMap<struct FGameplayAttribute, float> CallFunc_CalculateAttributePercentChange_ReturnValue, enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, const struct FLinearColor& Temp_struct_Variable, double K2Node_MathExpression_AttributeValue_ImplicitCast);
	void UpdateItemName(struct FInventoryEntry& Ingredient, class FText CallFunc_GetItemName_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void UpdateLockedIcon(enum class ESlateVisibility CallFunc_GetLockIconVisibility_NewVisibility, enum class ESlateVisibility CallFunc_GetLockIconVisibility_NewVisibility_1, enum class ESlateVisibility CallFunc_GetLockIconVisibility_NewVisibility_2, enum class ESlateVisibility CallFunc_GetLockIconVisibility_NewVisibility_3, class UNWXMenuDataEntryItem* K2Node_DynamicCast_AsNWXMenu_Data_Entry_Item, bool K2Node_DynamicCast_bSuccess, const struct FInventoryEntry& CallFunc_GetInventoryEntry_ReturnValue, enum class EItemQuality CallFunc_GetItemQualityFromEntry_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void UpdateQuality(struct FInventoryEntry& Ingredient, enum class EItemQuality CallFunc_GetItemQualityFromEntry_ReturnValue, const struct FLinearColor& CallFunc_Get_Item_Quality_Colour_QualityColour_Linear, const struct FSlateColor& CallFunc_Get_Item_Quality_Colour_QualityColour_Slate__UI_, const struct FLinearColor& K2Node_MakeStruct_LinearColor);
	void SetDefaultSlotDescription(bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, bool K2Node_SwitchInteger_CmpSuccess_2, class UNWXMenuDataEntryItem* K2Node_DynamicCast_AsNWXMenu_Data_Entry_Item, bool K2Node_DynamicCast_bSuccess, enum class EItemQuality CallFunc_GetItemQuality_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void SetDefaultSlotTitle(class FText SlotType, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Add_IntInt_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void InitializeDefaultLayout(class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void Update_Displayed_Item(const struct FInventoryEntry& Ingredient, class UNWXMenuDataEntry* NewEntryToUpgrade, bool CallFunc_IsValid_ReturnValue);
	void Construct();
	void ExecuteUbergraph_WBP_CraftingItem_SlotPanel(int32 EntryPoint);
};

}


