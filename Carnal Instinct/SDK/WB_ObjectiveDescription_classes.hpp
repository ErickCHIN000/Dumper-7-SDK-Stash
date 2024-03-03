#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2A0 (0x500 - 0x260)
// WidgetBlueprintGeneratedClass WB_ObjectiveDescription.WB_ObjectiveDescription_C
class UWB_ObjectiveDescription_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UTextBlock*                            TextBlock_71;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAC_Inventory_C*                       Inventory_Component;                               // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_ItemData                           Item_Data;                                         // 0x278(0xE8)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_quest_objective_data               Objective_Data;                                    // 0x360(0x188)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class UWB_Quest_C*                           WB_Quest;                                          // 0x4E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                ObjectiveDesc;                                     // 0x4F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_ObjectiveDescription_C* GetDefaultObj();

	void OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	struct FSlateBrush Set_Image(const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	struct FSlateColor Set_Rarity_Text_Color(bool CallFunc_IsValid_ReturnValue, const struct FSlateColor& CallFunc_Set_Rarity_Color_Color);
	class FText Set_Rarity(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	class FText Set_Type(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	class FText Set_Name();
	void Construct();
	void ExecuteUbergraph_WB_ObjectiveDescription(int32 EntryPoint, class FText CallFunc_Conv_StringToText_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const struct FS_quest_sub_objective_data& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
};

}


