#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x2C0 - 0x260)
// WidgetBlueprintGeneratedClass wid_sw_SwitchTabs.wid_sw_SwitchTabs_C
class UWid_sw_SwitchTabs_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USizeBox*                              SizeBox_0;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_1;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_2;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            Slot0;                                             // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            Slot1;                                             // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        InterpolationSpeed;                                // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Width;                                             // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Height;                                            // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BBF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USizeBox*                              CurrentWidget;                                     // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ScrollingToTheRight;                               // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsScrolling;                                      // 0x2A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BD5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            FinishedScrolling;                                 // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWid_sw_SwitchTabs_C* GetDefaultObj();

	void GetX_PositionInCanvas(class UWidget* Widget, float* ReturnValue_Left, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FMargin& CallFunc_GetOffsets_ReturnValue);
	void GetOtherSizebox(class USizeBox** NewCurrent, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UObject* CallFunc_SelectObject_ReturnValue, class USizeBox* K2Node_DynamicCast_AsSize_Box, bool K2Node_DynamicCast_bSuccess);
	void SetX_PositionInCanvas(class UWidget* Widget, float In_Offset_Left, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FMargin& CallFunc_GetOffsets_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin);
	void GetContent(class UWidget** Content, class UWidget* CallFunc_GetContent_ReturnValue, class UContentWidget* K2Node_DynamicCast_AsContent_Widget, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetContent_ReturnValue_1);
	void PreConstruct(bool IsDesignTime);
	void Scroll(bool bToTheRight, class UWidget* ScrollToWidget);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetCurrentWidget(class UWidget* Content);
	void Reset();
	void ExecuteUbergraph_wid_sw_SwitchTabs(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_bToTheRight, class UWidget* K2Node_CustomEvent_ScrollToWidget, TArray<class USizeBox*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class USizeBox* CallFunc_GetOtherSizebox_NewCurrent, class UWidget* CallFunc_GetContent_ReturnValue, class UContentWidget* K2Node_DynamicCast_AsContent_Widget, bool K2Node_DynamicCast_bSuccess, float CallFunc_Subtract_FloatFloat_ReturnValue, class UPanelSlot* CallFunc_SetContent_ReturnValue, float CallFunc_SelectFloat_ReturnValue, class USizeBox* CallFunc_GetOtherSizebox_NewCurrent_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_GetX_PositionInCanvas_ReturnValue_Left, class USizeBox* CallFunc_GetOtherSizebox_NewCurrent_2, float CallFunc_FInterpTo_Constant_ReturnValue, float CallFunc_GetX_PositionInCanvas_ReturnValue_Left_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_FInterpTo_Constant_ReturnValue_1, float CallFunc_GetX_PositionInCanvas_ReturnValue_Left_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class USizeBox* CallFunc_GetOtherSizebox_NewCurrent_3, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_2, int32 Temp_int_Array_Index_Variable, float CallFunc_SelectFloat_ReturnValue_2, class USizeBox* CallFunc_Array_Get_Item, class USizeBox* CallFunc_GetOtherSizebox_NewCurrent_4, class UWidget* K2Node_CustomEvent_Content, class UWidget* CallFunc_GetContent_ReturnValue_1, class UContentWidget* K2Node_DynamicCast_AsContent_Widget_1, bool K2Node_DynamicCast_bSuccess_1, class USizeBox* CallFunc_GetOtherSizebox_NewCurrent_5, class UPanelSlot* CallFunc_SetContent_ReturnValue_1, class UWidget* CallFunc_GetContent_ReturnValue_2, class UNamedSlot* K2Node_DynamicCast_AsNamed_Slot, bool K2Node_DynamicCast_bSuccess_2, class UWidget* CallFunc_GetContent_ReturnValue_3, class UWidget* CallFunc_GetContent_ReturnValue_4, class UNamedSlot* K2Node_DynamicCast_AsNamed_Slot_1, bool K2Node_DynamicCast_bSuccess_3, class UWidget* CallFunc_GetContent_ReturnValue_5, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, class USizeBox* CallFunc_GetOtherSizebox_NewCurrent_6);
	void FinishedScrolling__DelegateSignature(class UWidget* PreviousWidget, class UWidget* CurrentWidget, bool Right_);
};

}


