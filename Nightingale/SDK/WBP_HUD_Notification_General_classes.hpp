#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x3C0 - 0x348)
// WidgetBlueprintGeneratedClass WBP_HUD_Notification_General.WBP_HUD_Notification_General_C
class UWBP_HUD_Notification_General_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_FadeIn;                                       // 0x350(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBackgroundBlur*                       CenteredTutorial;                                  // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Hb_InputPrompt;                                    // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_description;                                   // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_InputDescription;                              // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TXT_Title;                                         // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Component_Small_Flourish_Right_C* WBP_Component_Small_Flourish_Right;                // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Component_SoftEdge_Divider_C*     WBP_Component_SoftEdge_Divider;                    // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InputActionPresentationWidget_C*  WBP_InputActionPresentationWidget;                 // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UInputAction>           InputAction;                                       // 0x398(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_HUD_Notification_General_C* GetDefaultObj();

	void UpdateInputPresentation(TSoftObjectPtr<class UInputAction> InputAction, class FText InputDescription, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsUsingGamepad_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool Temp_bool_Variable, class UInputAction* K2Node_DynamicCast_AsInput_Action, bool K2Node_DynamicCast_bSuccess, TArray<struct FInputActionPresentationData>& CallFunc_GetInputActionPresentation_OutPresentationDataArray, bool CallFunc_Array_IsNotEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void OnRespiteNotReady(struct FNWXPlayerDeploymentRequest& DeploymentRequest, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsPlayerRespiteDeploymentName_ReturnValue, bool CallFunc_DoesPlayerHaveRespitePoint_ReturnValue, const struct FS_UpdaterNotificatorInfo& K2Node_MakeStruct_S_UpdaterNotificatorInfo);
	void RemoveNotification(bool CallFunc_IsRendered_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void Play_Notification(const struct FS_UpdaterNotificatorInfo& Content, bool Remove_Manual, double Time_to_Display);
	void Construct();
	void OnNumPlayersWaitingToRestChanged(int32 NumPlayersWaitingToRest, int32 TotalPlayers);
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType);
	void ExecuteUbergraph_WBP_HUD_Notification_General(int32 EntryPoint, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, const struct FS_UpdaterNotificatorInfo& K2Node_CustomEvent_Content, bool K2Node_CustomEvent_Remove_Manual, double K2Node_CustomEvent_Time_To_Display, class UInputAction* K2Node_DynamicCast_AsInput_Action, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ANWXGameStateBase* CallFunc_GetNWXGameStateBase_ReturnValue, int32 K2Node_CustomEvent_NumPlayersWaitingToRest, int32 K2Node_CustomEvent_TotalPlayers, class USyncRestComponent* CallFunc_GetSyncRestComponent_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_GetNumPlayersResting_NumPlayersWaitingToRestOut, int32 CallFunc_GetNumPlayersResting_NumTotalPlayersOut, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, const struct FS_UpdaterNotificatorInfo& K2Node_MakeStruct_S_UpdaterNotificatorInfo, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, enum class ECommonInputType K2Node_Event_CurrentInputType, const struct FNWXPlayerDeploymentRequest& CallFunc_GetPlayerDeploymentRequest_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, TArray<struct FInputActionPresentationData>& CallFunc_GetInputActionPresentation_OutPresentationDataArray, bool CallFunc_Array_IsNotEmpty_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class ESlateVisibility K2Node_Select_Default, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
};

}


