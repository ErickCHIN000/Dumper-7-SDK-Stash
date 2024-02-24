#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6C (0x304 - 0x298)
// WidgetBlueprintGeneratedClass UMG_MultiToggle.UMG_MultiToggle_C
class UUMG_MultiToggle_C : public UUMG_SettingControlBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        ToggleContainer;                                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FText>                          ToggleOptions;                                     // 0x2A8(0x10)(Edit, BlueprintVisible)
	TArray<class FText>                          OptionToolTips;                                    // 0x2B8(0x10)(Edit, BlueprintVisible)
	int32                                        DefaultToggleIndex;                                // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_405B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ToggleWidgetClass;                                 // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ActiveToggleIndex;                                 // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4065[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            MultiToggleStateChanged;                           // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ToggleClicked;                                     // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        WidthOverride;                                     // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_MultiToggle_C* GetDefaultObj();

	void ChangeToggleName(class FText Name, int32 Index, class UWidget* CallFunc_GetChildAt_ReturnValue, class UUMG_ToggleButtonBase_C* K2Node_DynamicCast_AsUMG_Toggle_Button_Base, bool K2Node_DynamicCast_bSuccess);
	void GetFocusWidget(bool* bValid, class UWidget** Widget, bool* bThis, bool CallFunc_NotEqual_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UUMG_ToggleButtonBase_C* K2Node_DynamicCast_AsUMG_Toggle_Button_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetFocusWidget_bValid, class UWidget* CallFunc_GetFocusWidget_Widget, bool CallFunc_GetFocusWidget_bThis);
	void SetToggleOption(int32 ToggleIndex, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class UUMG_ToggleButtonBase_C* K2Node_DynamicCast_AsUMG_Toggle_Button_Base, bool K2Node_DynamicCast_bSuccess);
	void ConstructToggles(bool CallFunc_IsValidClass_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Array_IsValidIndex_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UUMG_ToggleButtonBase_C* CallFunc_Create_ReturnValue, class FText CallFunc_Array_Get_Item, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ToggleButtonToggled(class UUMG_ToggleButtonBase_C* ToggleButton);
	void ToggleButtonClicked(class UUMG_ButtonBase_C* Button);
	void ExecuteUbergraph_UMG_MultiToggle(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UUMG_ToggleButtonBase_C* K2Node_CustomEvent_ToggleButton, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class UUMG_ButtonBase_C* K2Node_CustomEvent_Button, bool CallFunc_NotEqual_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void ToggleClicked__DelegateSignature(int32 ToggleIndex, bool IsActive);
	void MultiToggleStateChanged__DelegateSignature(int32 PreviousToggleIndex, int32 CurrentToggleIndex);
};

}


