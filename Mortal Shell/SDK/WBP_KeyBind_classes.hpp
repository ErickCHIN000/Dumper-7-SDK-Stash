#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x208 (0x438 - 0x230)
// WidgetBlueprintGeneratedClass WBP_KeyBind.WBP_KeyBind_C
class UWBP_KeyBind_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UInputKeySelector*                     InputKeySelector_Gamepad;                          // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputKeySelector*                     InputKeySelector_KBPlusM;                          // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_KeyBindTitle;                                 // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  DisplayText;                                       // 0x250(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FName                                  InputMappingName;                                  // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FInputChord                           NewInput;                                          // 0x270(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FInputChord                           CurrentInput;                                      // 0x290(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FInputAxisKeyMapping                  MappingBeingReplaced;                              // 0x2B0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           ButtonStyleNormal;                                 // 0x2D8(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           ButtonStyleHovered;                                // 0x360(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           TextColorHover;                                    // 0x3E8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           TextColorNormal;                                   // 0x410(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_KeyBind_C* GetDefaultObj();

	void ForcedNotHover();
	void ForcedHover();
	void UI_Sound_Navigate();
	void ChangeKBMKey(const struct FInputChord& NewInput, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_1, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_2, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_3, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping_1, TArray<struct FInputAxisKeyMapping>& CallFunc_GetAxisMappingByName_OutMappings, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_5, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_6, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping_1, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_7, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1);
	void ChangeGamepadKey(const struct FInputChord& NewInput, bool CallFunc_Key_IsGamepadKey_ReturnValue, const struct FInputChord& K2Node_MakeStruct_InputChord, bool CallFunc_EqualEqual_InputChordInputChord_ReturnValue, const struct FInputChord& K2Node_MakeStruct_InputChord_1, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_1, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_2, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_3, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping_1, TArray<struct FInputAxisKeyMapping>& CallFunc_GetAxisMappingByName_OutMappings, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_5, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_6, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping_1, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_7, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__InputKeySelector_Primary_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature();
	void BndEvt__InputKeySelector_Primary_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void BndEvt__InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_3_OnIsSelectingKeyChanged__DelegateSignature();
	void BndEvt__InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void SetForcedHover();
	void SetForcedNotHovered();
	void ClearHoverStyleOverride();
	void Construct();
	void SelectGamepadKeyIfNot();
	void ExecuteUbergraph_WBP_KeyBind(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool K2Node_Event_IsDesignTime, class FText CallFunc_Conv_NameToText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TArray<struct FInputAxisKeyMapping>& CallFunc_GetAxisMappingByName_OutMappings, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey_1, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_2, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings_1, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_2, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_3, const struct FInputChord& K2Node_MakeStruct_InputChord, const struct FInputChord& K2Node_MakeStruct_InputChord_1, bool CallFunc_Key_IsGamepadKey_ReturnValue, TArray<struct FInputAxisKeyMapping>& CallFunc_GetAxisMappingByName_OutMappings_1, const struct FInputAxisKeyMapping& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, const struct FInputChord& K2Node_MakeStruct_InputChord_2, const struct FInputChord& K2Node_MakeStruct_InputChord_3, bool CallFunc_Key_IsGamepadKey_ReturnValue_1, bool Temp_bool_Variable, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey, class FText K2Node_Select_Default, bool CallFunc_GetIsSelectingKey_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
};

}


