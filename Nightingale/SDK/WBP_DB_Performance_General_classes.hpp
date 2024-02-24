#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x520 - 0x4C8)
// WidgetBlueprintGeneratedClass WBP_DB_Performance_General.WBP_DB_Performance_General_C
class UWBP_DB_Performance_General_C : public UWBP_NonShippableWindow_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               BT_Average;                                        // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               BT_Bad;                                            // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               BT_Custom;                                         // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               BT_Off;                                            // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               BT_StartTrace;                                     // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               BT_StopTrace;                                      // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                       CB_TraceLengthSeconds;                             // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FColor                                ButtonDeselectedColor;                             // 0x508(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                ButtonSelectedColor;                               // 0x50C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                ButtonUnSelectableColor;                           // 0x510(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B09[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TraceLengthSeconds;                                // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_DB_Performance_General_C* GetDefaultObj();

	void StopInsightsTrace(bool* Succeeded, bool CallFunc_StopTracing_ReturnValue);
	void StartInsightsTrace(bool* Succeeded, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsTracing_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UpdateButtonColors(class UButton* SelectedButton, TArray<class UButton*>& DeSelectedButtons, TArray<class UButton*>& UnSelectableButtons, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UButton* CallFunc_Array_Get_Item, class UButton* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_2);
	void UpdateNetworkEmulationProfile(const class FString& EmulationOption, const class FString& EmulationCommand, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void BndEvt__WBP_DB_Performance_General_BT_Average_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_DB_Performance_General_BT_Bad_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_DB_Performance_General_BT_StartTrace_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_DB_Performance_General_BT_StopTrace_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_DB_Performance_General_BT_Off_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__WBP_DB_Performance_General_CB_TraceLengthSeconds_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType);
	void ExecuteUbergraph_WBP_DB_Performance_General(int32 EntryPoint, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, const class FString& CallFunc_GetCurrentNetworkEmulationProfileName_ReturnValue, bool K2Node_SwitchString_CmpSuccess, TArray<class UButton*>& K2Node_MakeArray_Array, TArray<class UButton*>& K2Node_MakeArray_Array_1, TArray<class UButton*>& K2Node_MakeArray_Array_2, TArray<class UButton*>& K2Node_MakeArray_Array_3, TArray<class UButton*>& K2Node_MakeArray_Array_4, TArray<class UButton*>& K2Node_MakeArray_Array_5, TArray<class UButton*>& K2Node_MakeArray_Array_6, TArray<class UButton*>& K2Node_MakeArray_Array_7, TArray<class UButton*>& K2Node_MakeArray_Array_8, bool CallFunc_StartInsightsTrace_Succeeded, bool CallFunc_StopInsightsTrace_Succeeded, bool CallFunc_IsTracing_ReturnValue, TArray<class UButton*>& K2Node_MakeArray_Array_9, TArray<class UButton*>& K2Node_MakeArray_Array_10, TArray<class UButton*>& K2Node_MakeArray_Array_11, TArray<class UButton*>& K2Node_MakeArray_Array_12, TArray<class UButton*>& K2Node_MakeArray_Array_13, TArray<class UButton*>& K2Node_MakeArray_Array_14, TArray<class UButton*>& K2Node_MakeArray_Array_15, const class FString& K2Node_ComponentBoundEvent_SelectedItem, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType, bool K2Node_SwitchString_CmpSuccess_1);
};

}


