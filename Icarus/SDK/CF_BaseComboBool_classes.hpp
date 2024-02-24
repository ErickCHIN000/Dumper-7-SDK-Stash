#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2F (0x308 - 0x2D9)
// WidgetBlueprintGeneratedClass CF_BaseComboBool.CF_BaseComboBool_C
class UCF_BaseComboBool_C : public UCF_Base_C
{
public:
	uint8                                        Pad_85B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCheckBox*                             CheckBox;                                          // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCustomComboBox*                       ComboBox;                                          // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_94;                                      // 0x2F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             NewVar_0;                                          // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCF_BaseComboBool_C* GetDefaultObj();

	class FText GetCheckboxText(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool CallFunc_IsChecked_ReturnValue, class FText K2Node_Select_Default);
	void HandleArg(int32 Index, const class FString& Arg, bool K2Node_SwitchInteger_CmpSuccess);
	void UpdatePreview(TArray<class FString>& Args);
	void BndEvt__CheckBox_218_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__ComboBox_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature(const class FString& NameString, class UUserWidget* Widget);
	void HandleOnItemSet(class UUserWidget* Widget);
	void HandleOnCheckboxStateChanged(class UUserWidget* SelectedWidget, bool IsChecked);
	void Execute();
	void ExecuteUbergraph_CF_BaseComboBool(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, TArray<class FString>& K2Node_Event_Args, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool K2Node_ComponentBoundEvent_bIsChecked, const class FString& K2Node_ComponentBoundEvent_NameString, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UUserWidget* K2Node_CustomEvent_Widget, class UUserWidget* K2Node_CustomEvent_SelectedWidget, bool K2Node_CustomEvent_IsChecked, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UUserWidget* CallFunc_GetSelectedWidget_ReturnValue, class UUserWidget* CallFunc_GetSelectedWidget_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
};

}


