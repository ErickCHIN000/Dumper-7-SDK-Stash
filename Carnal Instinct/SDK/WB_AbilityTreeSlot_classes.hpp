#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x360 (0x5C0 - 0x260)
// WidgetBlueprintGeneratedClass WB_AbilityTreeSlot.WB_AbilityTreeSlot_C
class UWB_AbilityTreeSlot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                      DelayAnim;                                         // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      UnlockAnim;                                        // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_76;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Ability;                                    // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_120;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Lock_img;                                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_136;                                     // 0x298(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FS_AbilityData                        AbilityData;                                       // 0x2A0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   DTAbility;                                         // 0x310(0x10)(Edit, BlueprintVisible, NoDestructor)
	class UAC_DCSAbilityTree_C*                  AbilityTree_Component;                             // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FButtonStyle                          BaseButton_Style;                                  // 0x328(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        Rank;                                              // 0x5A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28FA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWB_ToolTipAbilities_C*                ToolTip_Abilities;                                 // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GamepadControls;                                   // 0x5B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2904[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAC_Inventory_C*                       Inventory_Component;                               // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_AbilityTreeSlot_C* GetDefaultObj();

	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& Key_Input, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1);
	void Using_Gamepad_(bool* Gamepad);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, bool CallFunc_Using_Gamepad__Gamepad, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	void Set_Tool_Tip_Position_and_Alignment(float L_Vertical_Alignment, float L_Horizontal_Alignment, float L_Vertical_Position, float L_Horizontal_Position, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, bool Temp_bool_Variable_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool Temp_bool_Variable_3, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_GetViewportScale_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X_3, float CallFunc_BreakVector2D_Y_3, bool CallFunc_InRange_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition_1, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition_1, float K2Node_Select_Default, const struct FVector2D& K2Node_Select_Default_1, float CallFunc_BreakVector2D_X_4, float CallFunc_BreakVector2D_Y_4, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_1, float CallFunc_GetViewportScale_ReturnValue_1, float CallFunc_BreakVector2D_X_5, float CallFunc_BreakVector2D_Y_5, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue_1, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue_1, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue_1, float CallFunc_BreakVector2D_X_6, float CallFunc_BreakVector2D_Y_6, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition_2, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_BreakVector2D_X_7, float CallFunc_BreakVector2D_Y_7, float CallFunc_Subtract_FloatFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition_3, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition_3, float CallFunc_BreakVector2D_X_8, float CallFunc_BreakVector2D_Y_8, bool CallFunc_InRange_FloatFloat_ReturnValue_1, const struct FVector2D& K2Node_Select_Default_2, float K2Node_Select_Default_3, float CallFunc_BreakVector2D_X_9, float CallFunc_BreakVector2D_Y_9);
	void OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, class UDragDrop_AbilityData_C* CallFunc_CreateDragDropOperation_ReturnValue, class UWB_DragAndDrop_C* CallFunc_Create_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_HasBeenActivated__Activated);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_DetectDragIfPressed_ReturnValue);
	enum class ESlateVisibility GetRankVisibility(bool CallFunc_EqualEqual_IntInt_ReturnValue);
	class FText GetRankText(int32 Temp_int_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText K2Node_Select_Default);
	void Set_Image(bool CallFunc_IsValid_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle_1, bool CallFunc_HasBeenUnlocked__Unlocked);
	void Set_AbilityData(bool CallFunc_IsValid_ReturnValue, const struct FS_AbilityData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void BndEvt__Button_Ability_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void On_RightClick();
	void BndEvt__Button_Ability_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void BndEvt__Button_Ability_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void Create_AbilitySlot();
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void Destruct();
	void WidgetAnimationEvt_DelayAnim_K2Node_WidgetAnimationEvent_1();
	void Toggle_Gamepad_Inputs();
	void On_Gamepad_Toggled(bool Gamepad_Controls);
	void Assign_to_AbilitiesBar();
	void ExecuteUbergraph_WB_AbilityTreeSlot(int32 EntryPoint, class FText Temp_text_Variable, class UWB_ToolTipAbilities_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasBeenPermanentlyUnlocked__Unlocked, bool CallFunc_HasBeenActivated__Activated, bool CallFunc_HasBeenUnlocked__Unlocked, bool CallFunc_HasBeenActivated__Activated_1, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, bool CallFunc_GotEnoughAbilityPoints__Got, bool CallFunc_HasBeenUnlocked__Unlocked_1, bool CallFunc_GotEnoughAbilityPoints__Got_1, bool CallFunc_HasBeenActivated__Activated_2, bool CallFunc_HasBeenUnlocked__Unlocked_2, bool CallFunc_HasBeenActivated__Activated_3, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, class UWB_ToolTipAbilities_C* CallFunc_Create_ReturnValue_1, bool CallFunc_HasBeenUnlocked__Unlocked_3, bool CallFunc_GotEnoughAbilityPoints__Got_2, const struct FFocusEvent& K2Node_Event_InFocusEvent, class UWB_ToolTipAbilities_C* CallFunc_Create_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UWB_ToolTipAbilities_C* CallFunc_Create_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_2, class UWB_InventoryNotify_C* CallFunc_Create_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_3, bool K2Node_CustomEvent_Gamepad_Controls, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_HasBeenActivated__Activated_4, bool CallFunc_HasBeenActivated__Activated_5, bool CallFunc_Using_Gamepad__Gamepad, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue);
};

}


