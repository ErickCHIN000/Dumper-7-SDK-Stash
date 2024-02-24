#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x191 (0x3F1 - 0x260)
// WidgetBlueprintGeneratedClass UMG_NotificationPopup.UMG_NotificationPopup_C
class UUMG_NotificationPopup_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FNotification                         Notification;                                      // 0x268(0x78)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            Close;                                             // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FProspectCompleteInformation          Prospect_Information;                              // 0x2F0(0x100)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         ShowCloseButton;                                   // 0x3F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUMG_NotificationPopup_C* GetDefaultObj();

	void UpdateAttachments();
	void GetLoadingWidget(class UWidget** Loading);
	void UpdateProspect();
	void Update();
	void OnFail_5E3F90A94463A9573E2CEFBB8066B33B(struct FResGetProspectSummary& Response);
	void OnSuccess_5E3F90A94463A9573E2CEFBB8066B33B(struct FResGetProspectSummary& Response);
	void Show(const struct FNotification& Notification);
	void Claim_Mail_Items();
	void Delete_Mail();
	void PlayShowEffects();
	void ExecuteUbergraph_UMG_NotificationPopup(int32 EntryPoint, const struct FResGetProspectSummary& K2Node_CustomEvent_Response_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FResGetProspectSummary& K2Node_CustomEvent_Response, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FResGetProspectSummary& Temp_struct_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AIcarusPlayerState* K2Node_DynamicCast_AsIcarus_Player_State, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetUserID_ReturnValue, const struct FOnlineProfileCharacter& CallFunc_GetActiveCharacter_ReturnValue, class UWidget* CallFunc_GetLoadingWidget_Loading, class UWidget* CallFunc_GetLoadingWidget_Loading_1, class UBackendProxyComponent* CallFunc_GetBackendProxyComponent_BackendProxyComponent, bool CallFunc_GetBackendProxyComponent_bSuccess, class UBackendProxyComponent* CallFunc_GetBackendProxyComponent_BackendProxyComponent_1, bool CallFunc_GetBackendProxyComponent_bSuccess_1, const struct FNotification& K2Node_CustomEvent_Notification, class UWidget* CallFunc_GetLoadingWidget_Loading_2, class UWidget* CallFunc_GetLoadingWidget_Loading_3, const struct FReqGetProspectSummary& K2Node_MakeStruct_ReqGetProspectSummary, class UGetProspectSummaryCallbackProxyGen* CallFunc_GetProspectSummary_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Close__DelegateSignature();
};

}


