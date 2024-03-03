#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x130 (0x390 - 0x260)
// WidgetBlueprintGeneratedClass WB_CraftingRequiredSlot.WB_CraftingRequiredSlot_C
class UWB_CraftingRequiredSlot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBorder*                               Border_0;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ItemButton;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Quantity_current;                                  // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Quantity_need;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FS_ItemData                           Item_Data;                                         // 0x288(0xE8)(Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Current_Item_Quantity;                             // 0x370(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FCA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWB_ToolTip_C*                         ToolTip_Ref;                                       // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GamepadControls;                                   // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FD3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAC_Inventory_C*                       Inventory_Component;                               // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_CraftingRequiredSlot_C* GetDefaultObj();

	void Using_Gamepad_(bool* Gamepad);
	void Set_ToolTip_Position_and_Alignment(float L_Vertical_Alignment, float L_Horizontal_Alignment, float L_Vertical_Position, float L_Horizontal_Position, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, bool Temp_bool_Variable_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool Temp_bool_Variable_3, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_GetViewportScale_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X_3, float CallFunc_BreakVector2D_Y_3, bool CallFunc_InRange_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition_1, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition_1, float K2Node_Select_Default, const struct FVector2D& K2Node_Select_Default_1, float CallFunc_BreakVector2D_X_4, float CallFunc_BreakVector2D_Y_4, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_1, float CallFunc_GetViewportScale_ReturnValue_1, float CallFunc_BreakVector2D_X_5, float CallFunc_BreakVector2D_Y_5, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue_1, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue_1, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue_1, float CallFunc_BreakVector2D_X_6, float CallFunc_BreakVector2D_Y_6, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition_2, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_BreakVector2D_X_7, float CallFunc_BreakVector2D_Y_7, float CallFunc_Subtract_FloatFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition_3, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition_3, float CallFunc_BreakVector2D_X_8, float CallFunc_BreakVector2D_Y_8, bool CallFunc_InRange_FloatFloat_ReturnValue_1, const struct FVector2D& K2Node_Select_Default_2, float K2Node_Select_Default_3, float CallFunc_BreakVector2D_X_9, float CallFunc_BreakVector2D_Y_9);
	struct FSlateColor Set_Color(const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	class FText Set_Required_Quantity(class FText CallFunc_Conv_IntToText_ReturnValue);
	class FText Set_Current_Quantity(class FText CallFunc_Conv_IntToText_ReturnValue);
	void Construct();
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_48_OnButtonHoverEvent__DelegateSignature();
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void Destruct();
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void Toggle_Gamepad_Inputs();
	void On_Gamepad_Toggled(bool Gamepad_Controls);
	void ExecuteUbergraph_WB_CraftingRequiredSlot(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAC_Crafting_C* CallFunc_Get_AC_Crafting_AC_Crafting, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, class UWB_ToolTip_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool K2Node_CustomEvent_Gamepad_Controls, bool CallFunc_IsValid_ReturnValue_2, class UWB_ToolTip_C* CallFunc_Create_ReturnValue_1, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, bool CallFunc_Using_Gamepad__Gamepad, bool CallFunc_Using_Gamepad__Gamepad_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_3);
};

}


