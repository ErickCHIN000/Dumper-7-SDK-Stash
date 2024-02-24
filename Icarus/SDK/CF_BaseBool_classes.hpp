#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2F9 - 0x2D9)
// WidgetBlueprintGeneratedClass CF_BaseBool.CF_BaseBool_C
class UCF_BaseBool_C : public UCF_Base_C
{
public:
	uint8                                        Pad_2280[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            TextBlock_107;                                     // 0x2E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_IconTextButton_C*                 UMG_IconTextButton_2;                              // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Checked;                                           // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UCF_BaseBool_C* GetDefaultObj();

	bool GetCheckboxState();
	class FText GetTitleText(class FText CallFunc_Conv_StringToText_ReturnValue);
	class FText GetCheckboxText(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool CallFunc_GetCheckboxState_ReturnValue, class FText K2Node_Select_Default);
	void Execute();
	void OnCheckboxStateChanged(bool NewState);
	void Toggle();
	void Construct();
	void Trigger_CheckBoxStateChanged(bool NewState);
	void BndEvt__UMG_IconTextButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
	void ExecuteUbergraph_CF_BaseBool(int32 EntryPoint, bool CallFunc_GetCheckboxState_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default_1, bool K2Node_CustomEvent_NewState_1, bool CallFunc_GetCheckboxState_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_CustomEvent_NewState);
};

}


