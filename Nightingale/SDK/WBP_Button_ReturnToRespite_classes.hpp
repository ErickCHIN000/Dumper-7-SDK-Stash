#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x36 (0x16C8 - 0x1692)
// WidgetBlueprintGeneratedClass WBP_Button_ReturnToRespite.WBP_Button_ReturnToRespite_C
class UWBP_Button_ReturnToRespite_C : public UWBP_Common_Button_Base_C
{
public:
	uint8                                        Pad_13AE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1698(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            ConfirmationPopup;                                 // 0x16A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_Popup_General_C*                  RespiteWindow;                                     // 0x16B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnLocalTravel;                                     // 0x16B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_Button_ReturnToRespite_C* GetDefaultObj();

	void DisableButton(class FText ReasonLocalized);
	void HandleButtonClick(class FText Temp_text_Variable, bool Temp_bool_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class FText Temp_text_Variable_3, bool CallFunc_IsPlayerInRespiteRealm_ReturnValue, class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class FText K2Node_Select_Default, class UWBP_Popup_General_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void HandleRespiteConfirmationWindowClosed(class UNWXCommonWindowWidget* Window);
	void CloseRespiteConfirmationWindow(bool CallFunc_IsValid_ReturnValue);
	void TravelToRespite(const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, bool CallFunc_IsPlayerInRespiteRealm_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, bool CallFunc_TryTravelToRespitePoint_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_3, bool CallFunc_DoesPlayerHaveRespitePoint_ReturnValue);
	void BU_Click_Event();
	void Construct();
	void ExecuteUbergraph_WBP_Button_ReturnToRespite(int32 EntryPoint, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, const struct FNWXPlayerDeploymentRequest& CallFunc_GetPlayerDeploymentRequest_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, bool CallFunc_CanTravelToRespite_ReturnValue);
	void OnLocalTravel__DelegateSignature();
	void ConfirmationPopup__DelegateSignature(bool ConfirmOpened);
};

}


