#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x1620 - 0x15E0)
// WidgetBlueprintGeneratedClass WBP_Common_Button_No_Text.WBP_Common_Button_No_Text_C
class UWBP_Common_Button_No_Text_C : public UNWXCommonButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                              InputActionWidgetSizeBox;                          // 0x15E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_1;                                         // 0x15F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EUIPosition                       InputActionWidgetPosition;                         // 0x15F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C43[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Input_Action_Size;                                 // 0x1600(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               InputActionPadding;                                // 0x1610(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWBP_Common_Button_No_Text_C* GetDefaultObj();

	void AdjustInputActionSize(double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
	void AdjustInputActionWidget(class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_Common_Button_No_Text(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


