#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2E1 - 0x2D1)
// WidgetBlueprintGeneratedClass W_PostProcessEntry_Checkbox_Radio.W_PostProcessEntry_Checkbox_Radio_C
class UW_PostProcessEntry_Checkbox_Radio_C : public UW_PostProcessEntry_Checkbox_C
{
public:
	uint8                                        Pad_1E48[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         ParentHasValidCheckedButton;                       // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_PostProcessEntry_Checkbox_Radio_C* GetDefaultObj();

	void OnCheckedStatedUpdated();
	void ExecuteUbergraph_W_PostProcessEntry_Checkbox_Radio(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, class UPanelWidget* CallFunc_GetParent_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_IsChecked_ReturnValue, class UW_PostProcessEntry_Checkbox_C* K2Node_DynamicCast_AsW_Post_Process_Entry_Checkbox, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsChecked_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsChecked_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default);
};

}


