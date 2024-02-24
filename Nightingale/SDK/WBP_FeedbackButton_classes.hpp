#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x360 - 0x340)
// WidgetBlueprintGeneratedClass WBP_FeedbackButton.WBP_FeedbackButton_C
class UWBP_FeedbackButton_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_button_base_C*                    WBP_button_base;                                   // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnFeedbackButtonClicked;                           // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_FeedbackButton_C* GetDefaultObj();

	class UWidget* GetTooltipWidget_0(class FText Temp_text_Variable, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue);
	void Construct();
	void BndEvt__WBP_button_base_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature();
	void ExecuteUbergraph_WBP_FeedbackButton(int32 EntryPoint, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void OnFeedbackButtonClicked__DelegateSignature();
};

}


