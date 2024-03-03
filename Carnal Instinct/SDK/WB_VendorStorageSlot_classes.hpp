#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x178 (0x3D8 - 0x260)
// WidgetBlueprintGeneratedClass WB_VendorStorageSlot.WB_VendorStorageSlot_C
class UWB_VendorStorageSlot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                      HighlightAnim;                                     // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_0;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Glow;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Item_Button;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Quantity;                                          // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAC_Inventory_C*                       Inventory_Component;                               // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Storage_;                                          // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8A7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemData                           Item_Data;                                         // 0x2A0(0xE8)(Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         GamepadControls;                                   // 0x388(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8AF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWB_VendorStorageInventory_C*          VendorStorageInventoryRef;                         // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FGeometry                             GeometryCache;                                     // 0x398(0x38)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UWB_ToolTip_C*                         ToolTipRef;                                        // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_VendorStorageSlot_C* GetDefaultObj();

	void Highlight_Slot(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& KeyInput, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_Using_Gamepad__Gamepad, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Set_ToolTip_Position_and_Alignment(float L_Vertical_Alignment, float L_Horizontal_Alignment, float L_Vertical_Position, float L_Horizontal_Position, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, bool Temp_bool_Variable_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, bool Temp_bool_Variable_3, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition_1, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition_1, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, float CallFunc_GetViewportScale_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue_1, float CallFunc_BreakVector2D_X_3, float CallFunc_BreakVector2D_Y_3, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition_2, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X_4, float CallFunc_BreakVector2D_Y_4, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, bool CallFunc_InRange_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition_3, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition_3, float CallFunc_BreakVector2D_X_5, float CallFunc_BreakVector2D_Y_5, float K2Node_Select_Default, const struct FVector2D& K2Node_Select_Default_1, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_1, float CallFunc_BreakVector2D_X_6, float CallFunc_BreakVector2D_Y_6, float CallFunc_BreakVector2D_X_7, float CallFunc_BreakVector2D_Y_7, float CallFunc_GetViewportScale_ReturnValue_1, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue_1, float CallFunc_BreakVector2D_X_8, float CallFunc_BreakVector2D_Y_8, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_InRange_FloatFloat_ReturnValue_1, const struct FVector2D& K2Node_Select_Default_2, float K2Node_Select_Default_3, float CallFunc_BreakVector2D_X_9, float CallFunc_BreakVector2D_Y_9);
	void Using_Gamepad_(bool* Gamepad);
	class FText Set_Quantity(bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class UDragDrop_ItemData_C* K2Node_DynamicCast_AsDrag_Drop_Item_Data, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void Swap_Slots(const struct FS_ItemData& Dragged_Item_Data, const struct FS_ItemData& Temp_struct_Variable);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, const struct FS_ItemData& Dragged_Item_Data, class UDragDrop_ItemData_C* K2Node_DynamicCast_AsDrag_Drop_Item_Data, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1);
	void OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, class UDragDrop_ItemData_C* CallFunc_CreateDragDropOperation_ReturnValue, class UWB_DragAndDrop_C* CallFunc_Create_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_NotEqual_ClassClass_ReturnValue);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_DetectDragIfPressed_ReturnValue);
	void RightClick();
	void BndEvt__Item_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Item_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void Toggle_Gamepad_Inputs();
	void On_Gamepad_Toggled(bool Gamepad_Controls);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void Event_Focus_Received();
	void Construct();
	void Destruct();
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void ExecuteUbergraph_WB_VendorStorageSlot(int32 EntryPoint, class UWB_ToolTip_C* CallFunc_Create_ReturnValue, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, const struct FPointerEvent& K2Node_Event_PointerEvent, class UDragDropOperation* K2Node_Event_Operation, bool Temp_bool_Variable, class UDragDrop_ItemData_C* K2Node_DynamicCast_AsDrag_Drop_Item_Data, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_Gamepad_Controls, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, bool CallFunc_Using_Gamepad__Gamepad, bool CallFunc_IsValid_ReturnValue_1, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_Using_Gamepad__Gamepad_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UWB_ToolTip_C* CallFunc_Create_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, enum class E_WidgetType Temp_byte_Variable, enum class E_WidgetType Temp_byte_Variable_1, enum class E_WidgetType K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


