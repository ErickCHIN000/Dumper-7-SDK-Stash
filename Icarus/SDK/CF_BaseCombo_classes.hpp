#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F (0x2F8 - 0x2D9)
// WidgetBlueprintGeneratedClass CF_BaseCombo.CF_BaseCombo_C
class UCF_BaseCombo_C : public UCF_Base_C
{
public:
	uint8                                        Pad_20B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCustomComboBox*                       ComboBox;                                          // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_IconTextButton_C*                 UMG_IconTextButton_1;                              // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCF_BaseCombo_C* GetDefaultObj();

	void HandleArg(int32 Index, const class FString& Arg, bool K2Node_SwitchInteger_CmpSuccess);
	void UpdatePreview(TArray<class FString>& Args);
	void Execute();
	void HandleExecute(class UUserWidget* Widget, int32 Amount);
	void BndEvt__ComboBox_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature(const class FString& NameString, class UUserWidget* Widget);
	void Handle_On_Item_Set(class UUserWidget* Widget);
	void BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
	void ExecuteUbergraph_CF_BaseCombo(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, TArray<class FString>& K2Node_Event_Args, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, class UUserWidget* K2Node_CustomEvent_Widget_1, int32 K2Node_CustomEvent_Amount, class UUserWidget* CallFunc_GetSelectedWidget_ReturnValue, const class FString& K2Node_ComponentBoundEvent_NameString, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UUserWidget* K2Node_CustomEvent_Widget);
};

}


