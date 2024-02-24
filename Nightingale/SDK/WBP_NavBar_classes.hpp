#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x3F0 - 0x340)
// WidgetBlueprintGeneratedClass WBP_NavBar.WBP_NavBar_C
class UWBP_NavBar_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        ButtonBox;                                         // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Close;                                         // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Logout;                                        // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_482;                                         // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcherCloseButton;                         // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FText>                          ButtonArray;                                       // 0x370(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            NavBar_ButtonClicked;                              // 0x380(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         UseExitButton_;                                    // 0x390(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_5762[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            CloseClicked;                                      // 0x398(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  DefaultExitKeyPrompt;                              // 0x3A8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  DefaultExitKeyTextLabel;                           // 0x3C0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UInputAction*                          CloseEnhancedInputActionOverride;                  // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ConsoleLogoutClicked;                              // 0x3E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_NavBar_C* GetDefaultObj();

	class UWidget* GetDefaultFocusWidget(class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_GetDefaultFocusWidget_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void ButtonClicked(class FText Text, int32 Index);
	void Refresh();
	void ClearBar();
	void BndEvt__WBP_NavBar_CBU_Close_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_NavBar_CBU_Logout_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void SwitchToLogoutButton();
	void ExecuteUbergraph_WBP_NavBar(int32 EntryPoint, class UWBP_Button_Tab_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, const struct FLinearColor& Temp_struct_Variable, bool K2Node_Event_IsDesignTime, int32 Temp_int_Loop_Counter_Variable, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FText K2Node_CustomEvent_Text, int32 K2Node_CustomEvent_index, enum class ESlateVisibility K2Node_Select_Default, const struct FMargin& K2Node_MakeStruct_Margin, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, const struct FLinearColor& Temp_struct_Variable_1, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& Temp_struct_Variable_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button);
	void ConsoleLogoutClicked__DelegateSignature();
	void CloseClicked__DelegateSignature();
	void NavBar_ButtonClicked__DelegateSignature(class FText ButtonLabel, int32 Index);
};

}


