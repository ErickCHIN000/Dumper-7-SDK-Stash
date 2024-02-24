#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0x29C - 0x260)
// WidgetBlueprintGeneratedClass wid_Crafting_Stats_Small.wid_Crafting_Stats_Small_C
class UWid_Crafting_Stats_Small_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UVerticalBox*                          Entries;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            Scroll;                                            // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Title;                                             // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDataTable*                            Templates;                                         // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BottomMargin;                                      // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  LastBuildSystemID;                                 // 0x294(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_Crafting_Stats_Small_C* GetDefaultObj();

	void UpdateBuildSystem(class FName BuildID, const struct FBuildEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FBuildGlobalStatValue& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FStatReadableName& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_FormatText_Output, bool CallFunc_NotEqual_NameName_ReturnValue_1);
	void SetMedicineStats(class FName ItemId, const struct FItemEntry& ItemEntry, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FStatInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_GetMedicineStatValue_ReturnValue);
	void SetArmorStats(class FName ItemId, class UClass* ArmorTemplate, int32 Temp_int_Array_Index_Variable, const struct FArmorInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FArmorStatInfo& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void SetWeaponStats(class FName ItemId, class UClass* Weapon, class ACGWeapon* WeaponObj, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACGActiveItem* CallFunc_FindActiveItemInInventory_ReturnValue, class ACGWeapon* K2Node_DynamicCast_AsCGWeapon, bool K2Node_DynamicCast_bSuccess);
	void CreateEntry(class FText StatName, int32 Fill, class UWid_Crafting_Stats_Entry_Small_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	int32 GetMedicineStatValue(class FName Requested, const struct FItemEntry& Entry, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FStatEntry& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void Update(class FName ItemId, TMap<class FString, float> DetectedStats, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, TSubclassOf<class ACGWeapon> K2Node_ClassDynamicCast_AsCGWeapon, bool K2Node_ClassDynamicCast_bSuccess, TSubclassOf<class Aba_aa_Armor_Template_C> K2Node_ClassDynamicCast_AsBa_Aa_Armor_Template, bool K2Node_ClassDynamicCast_bSuccess_1, TSubclassOf<class Aba_aa_HealingTemplate_C> K2Node_ClassDynamicCast_AsBa_Aa_Healing_Template, bool K2Node_ClassDynamicCast_bSuccess_2);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_wid_Crafting_Stats_Small(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


