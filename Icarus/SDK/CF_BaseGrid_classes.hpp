#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x37 (0x310 - 0x2D9)
// WidgetBlueprintGeneratedClass CF_BaseGrid.CF_BaseGrid_C
class UCF_BaseGrid_C : public UCF_Base_C
{
public:
	uint8                                        Pad_1FF3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCustomComboBox*                       GridCombo;                                         // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_IconTextButton_C*                 UMG_IconTextButton;                                // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpinBox*                              UV_x;                                              // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpinBox*                              UV_y;                                              // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        UV_XValue;                                         // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UV_YValue;                                         // 0x30C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCF_BaseGrid_C* GetDefaultObj();

	void HandleArg(int32 Index, const class FString& Arg, float CallFunc_Conv_StringToFloat_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void UpdatePreview(TArray<class FString>& Args);
	void BndEvt__Count_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void Execute();
	void Handle_Execute(const class FString& Grid, float UV_x, float UV_y);
	void BndEvt__ComboBox_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature(const class FString& NameString, class UUserWidget* Widget);
	void Handle_On_Item_Set(class UUserWidget* Widget);
	void BndEvt__UMG_IconTextButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
	void Construct();
	void BndEvt__UV_Y_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void ExecuteUbergraph_CF_BaseGrid(int32 EntryPoint, float K2Node_ComponentBoundEvent_InValue, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class UStringRow_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<class FString>& K2Node_Event_Args, float K2Node_ComponentBoundEvent_InValue_1, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_1, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& K2Node_CustomEvent_Grid, float K2Node_CustomEvent_UV_x, float K2Node_CustomEvent_UV_y, const class FString& K2Node_ComponentBoundEvent_NameString, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UUserWidget* K2Node_CustomEvent_Widget, const class FString& CallFunc_MakeLiteralString_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, const class FString& CallFunc_GetSubstring_ReturnValue, TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, class UUserWidget* CallFunc_GetSelectedWidget_ReturnValue, class UStringRow_C* K2Node_DynamicCast_AsString_Row, bool K2Node_DynamicCast_bSuccess);
};

}


