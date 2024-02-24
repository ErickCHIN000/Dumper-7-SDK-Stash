#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x75 (0x2D5 - 0x260)
// WidgetBlueprintGeneratedClass wid_sw_ScrollingList1.wid_sw_ScrollingList1_C
class UWid_sw_ScrollingList1_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                ArrowDown;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ArrowUp;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            ListIsEmptyWidget;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_0;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            Selected;                                          // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Deselected;                                        // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bListLoops;                                        // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bConstSpeedInterp;                                 // 0x2A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F00[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InterpolationSpeed;                                // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ListTargetPositionY;                               // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bControlLocked;                                    // 0x2B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F0B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LoopUnlockMovementDistance;                        // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StarAndFallbackYPosition;                          // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ArrowsColour;                                      // 0x2C4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDescendantScrollDestination      ScrollType;                                        // 0x2D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_sw_ScrollingList1_C* GetDefaultObj();

	void GetChildren(TArray<class UWidget*>* Children, const TArray<class UWidget*>& Array, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void Clear(bool bSetIndexToZero, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool Temp_bool_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_IsEmpty_Empty, class UWidget* CallFunc_GetSelectedWidget_Widget);
	void Find(class UWidget* Widget, int32* Index, int32 CallFunc_GetChildIndex_ReturnValue);
	void GetSelectedWidget(class UWidget** Widget, class UWidget* CallFunc_GetChildAt_ReturnValue);
	void IsEmpty(bool* Empty, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void RemoveChildAt(int32 Index, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool Temp_bool_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_IsEmpty_Empty, bool CallFunc_RemoveChildAt_ReturnValue);
	void RemoveChild(class UWidget* Widget, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool Temp_bool_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_IsEmpty_Empty, bool CallFunc_RemoveChild_ReturnValue);
	void SetChildren(TArray<class UWidget*>& Widgets, bool bScrollBackToZero, bool Temp_bool_Variable, int32 CallFunc_Array_Length_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsEmpty_Empty, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool Temp_bool_Variable_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UWidget* CallFunc_Array_Get_Item, class UPanelSlot* CallFunc_AddChild_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_2, int32 CallFunc_SelectInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default_1);
	void AddChild(class UWidget* WidgetToAdd, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool Temp_bool_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_IsEmpty_Empty, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void ScrollToIndex(int32 TargetIndex, int32 UpdatedIndex, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsEmpty_Empty, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class UWidget* CallFunc_GetSelectedWidget_Widget, int32 CallFunc_GetChildrenCount_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UWidget* CallFunc_GetSelectedWidget_Widget_1);
	void Scroll_to_next();
	void Scroll_to_previous();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_wid_sw_ScrollingList1(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, bool Temp_bool_Variable_4, enum class ESlateVisibility Temp_byte_Variable_9, enum class ESlateVisibility Temp_byte_Variable_10, enum class ESlateVisibility Temp_byte_Variable_11, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_IsEmpty_Empty, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_GetChildrenCount_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool Temp_bool_Variable_5, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, bool CallFunc_LessEqual_IntInt_ReturnValue_2, int32 CallFunc_GetChildrenCount_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_4, int32 CallFunc_Subtract_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_5);
	void Deselected__DelegateSignature(class UWidget* Widget);
	void Selected__DelegateSignature(class UWidget* Widget);
};

}


