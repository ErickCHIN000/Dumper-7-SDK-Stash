#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x340 - 0x2C0)
// WidgetBlueprintGeneratedClass BP_InspectorHelper.BP_InspectorHelper_C
class UBP_InspectorHelper_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_128;                                        // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      FOVTxt;                                            // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_0;                                   // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJSIContainer_C*                       JSIContainer;                                      // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      LocX;                                              // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      LocY;                                              // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      LocZ;                                              // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MainVB;                                            // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      RotX;                                              // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      RotY;                                              // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      RotZ;                                              // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_ItemInspector_C*                   InspectorBP;                                       // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         ProcessTextInputs;                                 // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E58[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UJSI_Slot_C*                           JigItem;                                           // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UJSI_Slot_C*                           JigDebug;                                          // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_InspectorHelper_C* GetDefaultObj();

	void UpdateLocAndRot(const TArray<class FName>& Attachments, const struct FRotator& Rot, const struct FVector& Loc, const TArray<double>& FlotArr, const class FString& CurrentStr, double CallFunc_Conv_StringToDouble_ReturnValue, bool CallFunc_IsNumeric_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UUserWidget* CallFunc_GetSpecialContainerRef_SpecialContainerRef, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TArray<class FName>& CallFunc_GetAllAttachments_Attachments, class AGameStateBase* CallFunc_GetGameState_ReturnValue, TScriptInterface<class IIT_ItemSnapCaptor_C> K2Node_DynamicCast_AsIT_Item_Snap_Captor, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_UpdateSnapCustom_Result, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TArray<class UEditableTextBox*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class UEditableTextBox* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast);
	void BndEvt__LocX_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__FOVTxt_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__LocY_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__LocZ_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__RotX_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__RotY_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__RotZ_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__Button_128_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void SetInitialValues(class ABP_ItemInspector_C* InspectorBP);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetJigRef(class UJSI_Slot_C* JigItem);
	void ExecuteUbergraph_BP_InspectorHelper(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, class FText K2Node_ComponentBoundEvent_Text_6, class FText K2Node_ComponentBoundEvent_Text_5, class FText K2Node_ComponentBoundEvent_Text_4, class FText K2Node_ComponentBoundEvent_Text_3, class FText K2Node_ComponentBoundEvent_Text_2, class FText K2Node_ComponentBoundEvent_Text_1, class FText K2Node_ComponentBoundEvent_Text, class ABP_ItemInspector_C* K2Node_CustomEvent_InspectorBP, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool Temp_bool_IsClosed_Variable_1, class UJSI_Slot_C* K2Node_CustomEvent_JigItem, const struct FTransform& CallFunc_GetInitValues_ReturnValue, double CallFunc_GetInitValues_FOVAngle, enum class E_DataTableType CallFunc_GetDT_DataTableRef, class FText CallFunc_Conv_DoubleToText_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, class FText CallFunc_Conv_DoubleToText_ReturnValue_1, class FText CallFunc_Conv_DoubleToText_ReturnValue_2, class FText CallFunc_Conv_DoubleToText_ReturnValue_3, class FText CallFunc_Conv_DoubleToText_ReturnValue_4, class FText CallFunc_Conv_DoubleToText_ReturnValue_5, class FText CallFunc_Conv_DoubleToText_ReturnValue_6, class FName CallFunc_GetItemID_ItemID, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool CallFunc_AddNewInventoryItem_Added, int32 CallFunc_AddNewInventoryItem_SlotIndex, const struct FFItemInfo& CallFunc_AddNewInventoryItem_ItemInfo, class UJSI_Slot_C* CallFunc_AddNewInventoryItem_SlotItemRef, bool CallFunc_AddNewInventoryItem_Stacked_, const struct FVector2D& CallFunc_GetSlotDim_SlotDimension, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, double CallFunc_Conv_DoubleToText_Value_ImplicitCast, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_1, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_2);
};

}


