#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x350 - 0x260)
// WidgetBlueprintGeneratedClass wid_Inventory_Desc.wid_Inventory_Desc_C
class UWid_Inventory_Desc_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class URichTextBlock*                        Description;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_188;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_338;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Info;                                              // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ItemImage;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        MainHB;                                            // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Stats;                                             // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               StatsTooltip;                                      // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Title;                                             // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Title_2;                                           // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Upgrades;                                          // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_ButtonIndicator_C*                Wid_ButtonIndicator;                               // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Inventory_Stats_C*                Wid_Inventory_Stats;                               // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         StatsEnabled;                                      // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1090[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ShowDescText;                                      // 0x2D8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  ShowStatsText;                                     // 0x2F0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  UpgradesText;                                      // 0x308(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         UseStatsFunctionality;                             // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_109F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  LastItemID;                                        // 0x324(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  LastItemUID;                                       // 0x32C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10AA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  EquippedText;                                      // 0x338(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWid_Inventory_Desc_C* GetDefaultObj();

	void SetStatsFunctionalityEnabled(bool IsEnabled);
	void SplitStringOnSpace(class FText Text, class FText* Result, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, const class FString& CallFunc_Replace_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue);
	void GetUpgradeName(class FName UpgradeID, enum class EUpgradeType UpgradeType, class FText* UpgradeName, class UDataTable* UpgradesDT, bool CallFunc_IsValid_ReturnValue, const struct FUpgradeEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UDataTable* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void Get_Non_Default_Upgrades_for_Unique_ID(class FName UniqueId, TArray<class FName>& ProvidedUpgrades, TArray<class FName>* Upgrades, const TArray<class FName>& UpgradesWithoutDefault, const TArray<class FName>& ItemUpgrades, const TArray<struct FInventoryEntry>& Items, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, TArray<class FName>& K2Node_MakeArray_Array, int32 CallFunc_Add_IntInt_ReturnValue_1, class FName CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_NameName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Contains_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<struct FInventoryEntry>& CallFunc_GetItems_ReturnValue);
	void ShowStats(class FText CallFunc_FormatText_Output, class FText CallFunc_FormatText_Output_1, class FText CallFunc_SplitStringOnSpace_Result, class FText CallFunc_SplitStringOnSpace_Result_1, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void Update(class FName ItemId, class FName UniqueItemID, bool Equipped, const struct FInventoryEntry& CustomUpgrades, const class FString& UpgradeText, bool Temp_bool_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FText Temp_text_Variable, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, float CallFunc_Count_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class FText CallFunc_FormatText_Output, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_SplitStringOnSpace_Result, bool Temp_bool_Variable_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Len_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Len_ReturnValue_1, class FText K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool Temp_bool_Variable_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, TArray<class FName>& CallFunc_Get_Non_Default_Upgrades_for_Unique_ID_Upgrades, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText CallFunc_GetUpgradeName_UpgradeName, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_1, const class FString& K2Node_Select_Default_1, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class FText CallFunc_FormatText_Output_1, TSubclassOf<class Aba_aa_Armor_Template_C> K2Node_ClassDynamicCast_AsBa_Aa_Armor_Template, bool K2Node_ClassDynamicCast_bSuccess, TSubclassOf<class ACGWeapon> K2Node_ClassDynamicCast_AsCGWeapon, bool K2Node_ClassDynamicCast_bSuccess_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText K2Node_Select_Default_2);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_wid_Inventory_Desc(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


