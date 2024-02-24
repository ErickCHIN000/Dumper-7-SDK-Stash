#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA1 (0x3B9 - 0x318)
// WidgetBlueprintGeneratedClass WBP_SurveyPrompt.WBP_SurveyPrompt_C
class UWBP_SurveyPrompt_C : public USurveyPromptBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_StyledButton_C*                   AbandonButton;                                     // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StyledButton_C*                   AcceptButton;                                      // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StyledButton_C*                   DeclineButton;                                     // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StyledButton_C*                   DismissButton;                                     // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            DismissText;                                       // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          DismissUI;                                         // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ErrorText;                                         // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ErrorUI;                                           // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          PromptUI;                                          // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StyledButton_C*                   ReturnButton;                                      // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SurveyInvitationText;                              // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NotificationHeader_C*             WBP_NotificationHeader;                            // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UParameterizedUrl*                     SurveyUrl;                                         // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  EmptyUrlErrorMessage;                              // 0x388(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class FText                                  UnableToLaunchUrlErrorMessage;                     // 0x3A0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                         AlreadyAccepted;                                   // 0x3B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWBP_SurveyPrompt_C* GetDefaultObj();

	void ShowDismiss();
	void ShowError(class FText ErrorMessage);
	void ShowCurrentPrompt();
	void Display(class FText PromptText, class UParameterizedUrl* URL);
	void BndEvt__WBP_SurveyPrompt_AcceptButton_K2Node_ComponentBoundEvent_1_Pressed__DelegateSignature();
	void BndEvt__WBP_SurveyPrompt_DeclineButton_K2Node_ComponentBoundEvent_2_Pressed__DelegateSignature();
	void DisplayPrompt(class FText& PromptText, class UParameterizedUrl* URL);
	void BndEvt__WBP_SurveyPrompt_DismissButton_K2Node_ComponentBoundEvent_0_Pressed__DelegateSignature();
	void BndEvt__WBP_SurveyPrompt_ReturnButton_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature();
	void BndEvt__WBP_SurveyPrompt_AbandonButton_K2Node_ComponentBoundEvent_4_Pressed__DelegateSignature();
	void ExecuteUbergraph_WBP_SurveyPrompt(int32 EntryPoint, const class FString& CallFunc_ToString_ReturnValue, bool CallFunc_CanLaunchURL_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class FText K2Node_Event_PromptText, class UParameterizedUrl* K2Node_Event_Url, class UGISFeedback* CallFunc_GetGameInstanceSubsystem_ReturnValue);
};

}


