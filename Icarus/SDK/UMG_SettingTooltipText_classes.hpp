#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x278 - 0x260)
// WidgetBlueprintGeneratedClass UMG_SettingTooltipText.UMG_SettingTooltipText_C
class UUMG_SettingTooltipText_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_132;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          TextBox;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_SettingTooltipText_C* GetDefaultObj();

	void Set_Requirements(TArray<class FText>& InText, TArray<bool>& States);
	void ExecuteUbergraph_UMG_SettingTooltipText(int32 EntryPoint, const struct FMargin& K2Node_MakeStruct_Margin, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, TArray<class FText>& K2Node_CustomEvent_InText, TArray<bool>& K2Node_CustomEvent_States, bool CallFunc_Array_Get_Item, bool CallFunc_Array_Get_Item_1, class FText CallFunc_Array_Get_Item_2, class FText CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UUMG_SettingTooltip_TextBlock_C* CallFunc_Create_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin_1, class UUMG_SettingTooltip_TextBlock_C* CallFunc_Create_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1);
};

}


