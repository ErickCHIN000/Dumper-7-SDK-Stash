#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7D (0x3C5 - 0x348)
// WidgetBlueprintGeneratedClass WBP_HUD_InteractHint_txt.WBP_HUD_InteractHint_txt_C
class UWBP_HUD_InteractHint_txt_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonActionWidget*                   CommonActionWidget;                                // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Interact_Backdrop;                                 // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Interact_Image;                                    // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverLay_Hint;                                      // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PowerLevel;                                        // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        Richtxt_InteractHint;                              // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_interactVerb;                                  // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Component_Small_Flourish_Center_C* WBP_Component_Small_Flourish_Center;               // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Component_SoftEdge_Divider_C*     WBP_Component_SoftEdge_Divider;                    // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         SubTextVisible;                                    // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           DisabledTint;                                      // 0x39C(0x14)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           EnabledTint;                                       // 0x3B0(0x14)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         CacheUsingGamepad;                                 // 0x3C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_HUD_InteractHint_txt_C* GetDefaultObj();

	void InputMethodChanged(enum class ECommonInputType NewInputType, bool K2Node_SwitchEnum_CmpSuccess);
	void UnbindEvents();
	void BindEvents();
	void UpdateTextFromContext(const struct FInteractionUIContext& InteractionUIContext, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_TextIsEmpty_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, const struct FSlateColor& K2Node_Select_Default_3);
	void SetDisabledState(bool IsDisabled);
	void Construct();
	void UpdateText(const struct FInteractionUIContext& InteractionContext);
	void Destruct();
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType);
	void ExecuteUbergraph_WBP_HUD_InteractHint_txt(int32 EntryPoint, enum class ECommonInputType K2Node_Event_CurrentInputType, const struct FInteractionUIContext& K2Node_CustomEvent_InteractionContext, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue);
};

}


