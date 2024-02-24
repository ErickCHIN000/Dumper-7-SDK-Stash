#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x27 (0x300 - 0x2D9)
// WidgetBlueprintGeneratedClass CF_BaseCombo2.CF_BaseCombo2_C
class UCF_BaseCombo2_C : public UCF_Base_C
{
public:
	uint8                                        Pad_2316[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCustomComboBox*                       ComboBox1;                                         // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCustomComboBox*                       ComboBox2;                                         // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_IconTextButton_C*                 UMG_IconTextButton;                                // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCF_BaseCombo2_C* GetDefaultObj();

	void HandleArg(int32 Index, const class FString& Arg, bool K2Node_SwitchInteger_CmpSuccess, class UCustomComboBox* Temp_wildcard_Variable);
	void Construct();
	void UpdatePreview(TArray<class FString>& Args);
	void Execute();
	void HandleExecute(class UUserWidget* Widget1, class UUserWidget* Widget2);
	void BndEvt__ComboBox_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature(const class FString& NameString, class UUserWidget* Widget);
	void Handle_On_Item_Set(class UUserWidget* Widget, bool Combo2);
	void BndEvt__ComboBox2_K2Node_ComponentBoundEvent_2_OnItemSet__DelegateSignature(const class FString& NameString, class UUserWidget* Widget);
	void BndEvt__UMG_IconTextButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
	void ExecuteUbergraph_CF_BaseCombo2(int32 EntryPoint, class UStatRow_C* CallFunc_Create_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FStatsEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsVirtualStat_ReturnValue, class FName CallFunc_BreakStatsEnum_Name, int32 CallFunc_BreakStatsEnum_Index, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class FString>& K2Node_Event_Args, int32 CallFunc_NumRows_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, class UUserWidget* CallFunc_GetSelectedWidget_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UUserWidget* K2Node_CustomEvent_Widget1, class UUserWidget* K2Node_CustomEvent_Widget2, const class FString& K2Node_ComponentBoundEvent_NameString_1, class UUserWidget* K2Node_ComponentBoundEvent_Widget_1, class UUserWidget* K2Node_CustomEvent_Widget, bool K2Node_CustomEvent_Combo2, const class FString& K2Node_ComponentBoundEvent_NameString, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UUserWidget* CallFunc_GetSelectedWidget_ReturnValue_1);
};

}


