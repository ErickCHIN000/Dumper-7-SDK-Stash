#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x74 (0x2D4 - 0x260)
// WidgetBlueprintGeneratedClass wid_PlayerResources.wid_PlayerResources_C
class UWid_PlayerResources_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UVerticalBox*                          ResourcesBox;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        ResourcesBoxHorizontal;                            // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FName, int32>                     Ingredients;                                       // 0x278(0x50)(Edit, BlueprintVisible)
	class UInventoryComponent2*                  Inventory;                                         // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowYourResources;                                 // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseHorizontalBox;                                  // 0x2D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         AddStorageResources;                               // 0x2D2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseGlobalIcons;                                    // 0x2D3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWid_PlayerResources_C* GetDefaultObj();

	enum class ESlateVisibility Get_ResourcesBox_Visibility_0(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void SetCost(TMap<enum class Enum_ItemNames, int32> Cost, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<enum class Enum_ItemNames>& CallFunc_Map_Keys_Keys, enum class Enum_ItemNames CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void Update(bool AddStorage);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_wid_PlayerResources(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_CustomEvent_AddStorage, TArray<enum class Enum_ItemNames>& K2Node_MakeArray_Array, enum class Enum_ItemNames CallFunc_Array_Get_Item, enum class EResourceType CallFunc_MapEnumItemNamesToEResourceType_Value, bool CallFunc_MapEnumItemNamesToEResourceType_Found, class FName CallFunc_ItemEnumToNameID_Name, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWid_CraftingIngredient_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, float CallFunc_Count_ReturnValue, float CallFunc_Count_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UWid_CraftingIngredient_C* CallFunc_Create_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin, class UPanelSlot* CallFunc_AddChild_ReturnValue_2);
};

}


