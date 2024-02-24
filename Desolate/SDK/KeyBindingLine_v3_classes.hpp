#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x99 (0x341 - 0x2A8)
// WidgetBlueprintGeneratedClass KeyBindingLine_v3.KeyBindingLine_v3_C
class UKeyBindingLine_v3_C : public UMenuBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        HorizontalBox_0;                                   // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeyBindingButton_C*                   KeyBindingButton1;                                 // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_0;                                       // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Caption;                                           // 0x2C8(0x18)(Edit, BlueprintVisible)
	class FName                                  BindingName;                                       // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAxis;                                            // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CDA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AxisScale;                                         // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputActionKeyMapping>        ActionBindings;                                    // 0x2F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FInputAxisKeyMapping>          AxisBindings;                                      // 0x300(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FInputActionKeyMapping>        OldActionBindings;                                 // 0x310(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FInputAxisKeyMapping>          OldAxisBindings;                                   // 0x320(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnBindingSet;                                      // 0x330(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bBindingScreenShown;                               // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UKeyBindingLine_v3_C* GetDefaultObj();

	void SetCaption(class FText Caption);
	void RemoveAxisBinding(const struct FKey& Key, float Scale, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FKey& K2Node_MakeStruct_Key, int32 CallFunc_Array_Length_ReturnValue, const struct FInputAxisKeyMapping& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FInputAxisKeyMapping& K2Node_SetFieldsInStruct_StructOut, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void RemoveActionBinding(const struct FKey& Key, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FKey& K2Node_MakeStruct_Key, int32 CallFunc_Array_Length_ReturnValue, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FInputActionKeyMapping& K2Node_SetFieldsInStruct_StructOut, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	void RemoveBinding(const struct FKey& Key, float Scale);
	void ReadBindings();
	void ApplyBindings(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FInputAxisKeyMapping& CallFunc_Array_Get_Item, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item_1, int32 Temp_int_Loop_Counter_Variable_1, const struct FInputAxisKeyMapping& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_1);
	void GetAxisBindingName(struct FInputAxisKeyMapping& InputAxisKeyMapping, class FText* Result, bool Temp_bool_Variable, const class FString& Temp_string_Variable, bool CallFunc_Key_IsFloatAxis_ReturnValue, class FName CallFunc_GetKeyUIName_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void UpdateAxisBinding(int32 ActionMappingIndex, const struct FKey& KeyEvent, float Scale, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, const struct FInputAxisKeyMapping& CallFunc_Array_Get_Item, const struct FInputAxisKeyMapping& K2Node_SetFieldsInStruct_StructOut, float CallFunc_SelectFloat_ReturnValue);
	void ReadAxisButtonCaptions(bool Temp_bool_Variable, class FText Temp_text_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FInputAxisKeyMapping& CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_GetAxisBindingName_Result, class FText K2Node_Select_Default);
	void ReadActionButtonCaptions(bool Temp_bool_Variable, class FName Temp_name_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, class FName CallFunc_GetKeyUIName_ReturnValue, class FName K2Node_Select_Default, class FText CallFunc_Conv_NameToText_ReturnValue);
	void UpdateActionBinding(int32 ActionMappingIndex, const struct FKey& KeyEvent, float Scale, const struct FKey& ResultKey, bool Temp_bool_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool Temp_bool_Variable_1, const struct FKey& Temp_struct_Variable, const struct FKey& Temp_struct_Variable_1, const struct FKey& K2Node_Select_Default, const struct FKey& K2Node_Select_Default_1, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item, const struct FInputActionKeyMapping& K2Node_SetFieldsInStruct_StructOut);
	void ReadAxisBinding(bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FKey& K2Node_MakeStruct_Key, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping, const struct FKey& K2Node_MakeStruct_Key_1, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping_1, TArray<struct FInputAxisKeyMapping>& CallFunc_GetAxisMapping_Bindings, int32 CallFunc_Array_Length_ReturnValue, const struct FInputAxisKeyMapping& CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, const struct FInputAxisKeyMapping& CallFunc_Array_Get_Item_1, const struct FInputAxisKeyMapping& K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FInputAxisKeyMapping& K2Node_Select_Default_1);
	void ReadKeyBinding(bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FKey& K2Node_MakeStruct_Key, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping, const struct FKey& K2Node_MakeStruct_Key_1, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping_1, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMapping_Bindings, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FInputActionKeyMapping& K2Node_Select_Default, const struct FInputActionKeyMapping& K2Node_Select_Default_1);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	void Construct();
	void OnSynchronizeProperties();
	void Redraw();
	void OnKeyEvent_Event_0(const struct FKey& KeyEvent, float Scale);
	void CustomEvent_0();
	void ExecuteUbergraph_KeyBindingLine_v3(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FKey& K2Node_CustomEvent_KeyEvent, float K2Node_CustomEvent_Scale);
	void OnBindingSet__DelegateSignature(const struct FKey& Key, float Scale);
};

}


