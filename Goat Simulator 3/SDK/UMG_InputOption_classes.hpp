#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x470 - 0x418)
// WidgetBlueprintGeneratedClass UMG_InputOption.UMG_InputOption_C
class UUMG_InputOption_C : public UGGOptionInputUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x418(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimRebound;                                       // 0x420(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimPulse;                                         // 0x428(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Background;                                        // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ConflictIcon_1;                                    // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ConflictIconBG;                                    // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              ConflictingIcon;                                   // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                KeyboardAndMouseSeparator;                         // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MouseAndGamepadSeparator;                          // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWidget*>                       PC_Widgets;                                        // 0x460(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UUMG_InputOption_C* GetDefaultObj();

	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue);
	void Construct();
	void OnReboundAnimationFinished();
	void OnResetButtonInteracted(class UGGUserWidget* Widget, const struct FPointerEvent& PointerEvent, const struct FKeyEvent& KeyEvent);
	void PreConstruct(bool IsDesignTime);
	void RefreshOption();
	void ExecuteUbergraph_UMG_InputOption(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UGGUserWidget* K2Node_CustomEvent_Widget, const struct FPointerEvent& K2Node_CustomEvent_PointerEvent, const struct FKeyEvent& K2Node_CustomEvent_KeyEvent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, bool CallFunc_IsDesktopPlatform_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& K2Node_MakeArray_Array, bool CallFunc_HasAnyConflictingAction_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UPanelWidget* CallFunc_GetParent_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class USizeBox* K2Node_DynamicCast_AsSize_Box, bool K2Node_DynamicCast_bSuccess, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue);
};

}


