#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x69 (0x521 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_Popup_QuitGame.WBP_Popup_QuitGame_C
class UWBP_Popup_QuitGame_C : public UNWXCommonWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      CloseWindow;                                       // 0x4C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OpenWindow;                                        // 0x4C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_CancelQuit;                                    // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_QuitDesktop;                                   // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_quitLogin;                                     // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ExitSurvey_C*                     ExitSurvey;                                        // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Panel_QuitOptions;                                 // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_Survey;                                   // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CountdownDisplay_C*               CountdownDisplay;                                  // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       ShutdownTime;                                      // 0x508(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnCancelButton;                                    // 0x510(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         LoggedIn;                                          // 0x520(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Popup_QuitGame_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget();
	void OnSurveySubmitButtonClicked(class UCommonButtonBase* Button, const struct FMetricsEventAttr& MetricEvents, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr, int32 CallFunc_GetSurveyResponse_SurveyResponse, int32 CallFunc_GetSurveyResponse_SurveyResponse_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr_2, TArray<struct FMetricsEventAttr>& K2Node_MakeArray_Array);
	void InitLogoutState(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	class UWidgetAnimation* GetCloseAnimation();
	class UWidgetAnimation* GetOpenAnimation();
	void DisplayShutdownWidget(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_CountdownDisplay_C* CallFunc_Create_ReturnValue);
	void DisableButtonsAndInput(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void OnQuitOptionSelected(bool QuitToDesktop);
	void OnCountdownDone();
	void BndEvt__WBP_Popup_QuitGame_bu_quitLogin_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Popup_QuitGame_bu_CancelQuit_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Popup_QuitGame_CBU_QuitDesktop_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BP_OnActivated();
	void ExecuteUbergraph_WBP_Popup_QuitGame(int32 EntryPoint, bool K2Node_CustomEvent_QuitToDesktop, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UNWXGameInstance* K2Node_DynamicCast_AsNWXGame_Instance, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsFeatureFlagEnabled_ReturnValue);
	void OnCancelButton__DelegateSignature();
};

}


