#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x281 - 0x268)
// WidgetBlueprintGeneratedClass CertDialog.CertDialog_C
class UCertDialog_C : public UCertDialog
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_ConfirmButtonPressAndHold_C*       UI_Controller_Cancel;                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ConfirmButtonPressAndHold_C*       UI_Controller_Confirm;                             // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EPlatform                         Platform;                                          // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCertDialog_C* GetDefaultObj();

	class FText Get_Text_CertDialog_Title_Text(enum class EPlatform Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText K2Node_Select_Default);
	void Construct();
	void UpdateCancelAction(bool bActive, class FText& Body);
	void UpdateConfirmAction(bool bActive, class FText& Body);
	void ExecuteUbergraph_CertDialog(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, class FText Temp_text_Variable, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_3, class FText Temp_text_Variable_1, enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool K2Node_Event_bActive_1, class FText K2Node_Event_body_1, enum class ESlateVisibility K2Node_Select_Default, class FText K2Node_Select_Default_1, bool K2Node_Event_bActive, class FText K2Node_Event_body, enum class ESlateVisibility K2Node_Select_Default_2, class FText K2Node_Select_Default_3);
};

}


