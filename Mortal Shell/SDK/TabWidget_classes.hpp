#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x268 - 0x230)
// WidgetBlueprintGeneratedClass TabWidget.TabWidget_C
class UTabWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        TabContainer;                                      // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FText>                          Tabs;                                              // 0x240(0x10)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        CurrentTab;                                        // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D8E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnTabActivated;                                    // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UTabWidget_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void OnTabClicked(int32 TabIndex);
	void SetTabStates();
	void RequestPreviousTab();
	void RequestNextTab();
	void ExecuteUbergraph_TabWidget(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool K2Node_Event_IsDesignTime, class FText CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWidget* CallFunc_Array_Get_Item_1, class UTabButtonWidget_C* CallFunc_Create_ReturnValue, class UTabButtonWidget_C* K2Node_DynamicCast_AsTab_Button_Widget, bool K2Node_DynamicCast_bSuccess, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 K2Node_CustomEvent_TabIndex, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class ECheckBoxState Temp_byte_Variable, class FText CallFunc_Array_Get_Item_2, enum class ECheckBoxState Temp_byte_Variable_1, class FText CallFunc_Array_Get_Item_3, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool Temp_bool_Variable, class FText CallFunc_Array_Get_Item_4, enum class ECheckBoxState K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2);
	void OnTabActivated__DelegateSignature(int32 TabIndex, class FText TabText);
};

}


