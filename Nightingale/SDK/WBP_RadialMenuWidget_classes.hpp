#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2B0 (0x788 - 0x4D8)
// WidgetBlueprintGeneratedClass WBP_RadialMenuWidget.WBP_RadialMenuWidget_C
class UWBP_RadialMenuWidget_C : public UNWXRadialMenuWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Btn_CallInteraction;                               // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CenterArrow;                                       // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CenterArrowCancel;                                 // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CenterCircle;                                      // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CenterCompass;                                     // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_46;                                          // 0x508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_ButtonSeparators;                          // 0x510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Cancel;                                    // 0x518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_RadialButtons;                             // 0x520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GoalTracker_Panel_C*              WBP_GoalTracker_Panel;                             // 0x528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UNWXRadialMenuButtonWidget*>    RadialMenuSegments;                                // 0x530(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        LastSeleectedSegment;                              // 0x540(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6D2D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TScriptInterface<class IRadialMenuInterface>> MenuEntries;                                       // 0x548(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	float                                        DegreesSegmentRadius;                              // 0x558(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6D3B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UImage*>                        SeparatorContainer;                                // 0x560(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FSlateBrush                           LineBrush;                                         // 0x570(0xD0)(Edit, BlueprintVisible)
	struct FSlateBrush                           LineBrushHighlighted;                              // 0x640(0xD0)(Edit, BlueprintVisible)
	double                                       LineRadius;                                        // 0x710(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LineWidth;                                         // 0x718(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class ERadialButtonType, class UClass*> ButtonMap;                                         // 0x720(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FKey>                          InKeyArray;                                        // 0x770(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UAkComponent*                          AkComponent;                                       // 0x780(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_RadialMenuWidget_C* GetDefaultObj();

	void TriggerOpenAudio(FDelegateProperty_ Temp_delegate_Variable, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void InitializeDesignerPreview(const TArray<TScriptInterface<class IRadialMenuInterface>>& LDesignerPreviewMenuEntries, TArray<TScriptInterface<class IRadialMenuInterface>>& K2Node_MakeArray_Array);
	class UWidget* BP_GetDesiredFocusTarget();
	void OnAngleChanged(float Angle, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast_1);
	void OnSelectionChanged(int32 SelectionIndex, class UNWXRadialMenuButtonWidget* CallFunc_Array_Get_Item, class UNWXRadialMenuButtonWidget* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void OnCenterSelected(class UNWXRadialMenuButtonWidget* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue);
	void UpdateCenterSize(double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, const struct FVector2D& CallFunc_GetAbsoluteSize_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, float K2Node_VariableSet_CenterRadius_ImplicitCast);
	void OnViewportResized();
	void SetSegmentHighlight(int32 Segment, bool ShouldHighlight, const struct FSlateBrush& LBrush, bool Temp_bool_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, class UImage* K2Node_DynamicCast_AsImage, bool K2Node_DynamicCast_bSuccess, const struct FSlateBrush& K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UImage* K2Node_DynamicCast_AsImage_1, bool K2Node_DynamicCast_bSuccess_1);
	void CreateSeparators(double LAngle, class UImage* LImage, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UImage* CallFunc_SpawnObject_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FKey& CallFunc_Array_Get_Item, const struct FKey& CallFunc_GetKey_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void OnInteractReleased();
	void CreateRadialSegments(class UObject* L_ButtonTypes, TScriptInterface<class IRadialMenuInterface> L_RadialInterface, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, float CallFunc_GetCenterAngle_ReturnValue, class UInteractionRadialMenuEntry* CallFunc_SpawnObject_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, TScriptInterface<class IRadialMenuInterface> K2Node_DynamicCast_AsRadial_Menu_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetSegmentRadius_ReturnValue, enum class ERadialButtonType CallFunc_GetButtonType_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UNWXRadialMenuButtonWidget* CallFunc_Create_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, float CallFunc_GetSegmentRadius_ReturnValue_1, TScriptInterface<class IRadialMenuInterface> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, double CallFunc_SetDoublePropertyByName_Value_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float K2Node_VariableSet_DegreesSegmentRadius_ImplicitCast, double CallFunc_SetDoublePropertyByName_Value_ImplicitCast_1);
	void PressButton(const struct FGameplayTag& CallFunc_SelectedLeftEventTag_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, TScriptInterface<class IRadialMenuInterface> CallFunc_Array_Get_Item, class UNWXRadialMenuButtonWidget* CallFunc_Array_Get_Item_1, bool CallFunc_IsEnabled_ReturnValue);
	struct FEventReply OnInputConfirm(const struct FEventReply& CallFunc_Handled_ReturnValue);
	void RefreshInteractionOptions(TArray<TScriptInterface<class IRadialMenuInterface>>& InteractionOptions);
	void BndEvt__WBP_RadialMenuWidget_Button_CallInteraction_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_WBP_RadialMenuWidget(int32 EntryPoint);
};

}


