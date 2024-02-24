#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x74 (0x2D4 - 0x260)
// WidgetBlueprintGeneratedClass wid_SkillCost.wid_SkillCost_C
class UWid_SkillCost_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UHorizontalBox*                        CostBox;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          CostBoxVertical;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FName, float>                     Ingredients;                                       // 0x278(0x50)(Edit, BlueprintVisible)
	class UInventoryComponent2*                  Inventory;                                         // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowYourResources;                                 // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IgnoreMissing;                                     // 0x2D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         UseHorizontalBox;                                  // 0x2D2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         TextValues;                                        // 0x2D3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWid_SkillCost_C* GetDefaultObj();

	enum class ESlateVisibility Get_ResourcesBox_Visibility_0(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void SetCost(TArray<struct FSt_ItemByEnumAndCount>& Cost, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSt_ItemByEnumAndCount& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FName CallFunc_ItemEnumToNameID_Name);
	void Update();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_wid_SkillCost(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWid_CraftingIngredient_C* CallFunc_Create_ReturnValue, TArray<class FName>& CallFunc_Map_Keys_Keys, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_Event_IsDesignTime, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class FName CallFunc_Array_Get_Item, enum class EResourceType CallFunc_MapEnumItemNamesToEResourceType_Value, bool CallFunc_MapEnumItemNamesToEResourceType_Found, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew_1, float CallFunc_Count_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, float CallFunc_Count_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue);
};

}


