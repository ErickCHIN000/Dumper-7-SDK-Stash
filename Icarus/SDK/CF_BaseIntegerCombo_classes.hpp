#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x33 (0x30C - 0x2D9)
// WidgetBlueprintGeneratedClass CF_BaseIntegerCombo.CF_BaseIntegerCombo_C
class UCF_BaseIntegerCombo_C : public UCF_Base_C
{
public:
	uint8                                        Pad_1A1A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCustomComboBox*                       ComboBox;                                          // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpinBox*                              Count;                                             // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_IconTextButton_C*                 UMG_IconTextButton;                                // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Number;                                            // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MinCountValue;                                     // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxCountValue;                                     // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCF_BaseIntegerCombo_C* GetDefaultObj();

	bool CanModifyNumber();
	void HandleArg(int32 Index, const class FString& Arg, int32 CallFunc_Conv_StringToInt_ReturnValue, int32 CallFunc_Len_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_Conv_IntToBool_ReturnValue);
	float GetNumber(float CallFunc_Conv_IntToFloat_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void UpdatePreview(TArray<class FString>& Args);
	void BndEvt__Count_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void Execute();
	void Handle_Execute(class UUserWidget* Widget, int32 Amount);
	void BndEvt__ComboBox_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature(const class FString& NameString, class UUserWidget* Widget);
	void Handle_On_Item_Set(class UUserWidget* Widget);
	void BndEvt__UMG_IconTextButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
	void ExecuteUbergraph_CF_BaseIntegerCombo(int32 EntryPoint, float CallFunc_Conv_IntToFloat_ReturnValue, int32 Temp_int_Array_Index_Variable, bool K2Node_Event_IsDesignTime, TArray<class FString>& K2Node_Event_Args, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, float K2Node_ComponentBoundEvent_InValue, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UUserWidget* CallFunc_GetSelectedWidget_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, class UUserWidget* K2Node_CustomEvent_Widget_1, int32 K2Node_CustomEvent_Amount, const class FString& K2Node_ComponentBoundEvent_NameString, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UUserWidget* K2Node_CustomEvent_Widget, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2);
};

}


