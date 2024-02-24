#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x448 - 0x430)
// WidgetBlueprintGeneratedClass WBP_Options_InputKeySelector.WBP_Options_InputKeySelector_C
class UWBP_Options_InputKeySelector_C : public UNWXKeyMappingWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_InputKeyIcon_C*                   InputKeyIcon;                                      // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputKeySelector*                     InputKeySelector;                                  // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Options_InputKeySelector_C* GetDefaultObj();

	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool Temp_bool_Variable, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_UnlockMouse_ReturnValue, bool CallFunc_GetIsSelectingKey_ReturnValue, const struct FEventReply& CallFunc_LockMouse_ReturnValue, const struct FEventReply& K2Node_Select_Default);
	void BndEvt__WBP_Options_InputKeySelector_InputKeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void BndEvt__WBP_Options_InputKeySelector_InputKeySelector_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature();
	void Construct();
	void Internal_OnResetValue();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_Options_InputKeySelector(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, TSet<struct FKey> Temp_struct_Variable, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey, bool CallFunc_GetIsSelectingKey_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, TArray<struct FKey>& CallFunc_Set_ToArray_Result, bool CallFunc_Key_IsGamepadKey_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


