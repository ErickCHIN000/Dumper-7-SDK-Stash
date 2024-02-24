#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_NotificationPopup.UMG_NotificationPopup_C
// (None)

class UClass* UUMG_NotificationPopup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_NotificationPopup_C");

	return Clss;
}


// UMG_NotificationPopup_C UMG_NotificationPopup.Default__UMG_NotificationPopup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_NotificationPopup_C* UUMG_NotificationPopup_C::GetDefaultObj()
{
	static class UUMG_NotificationPopup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_NotificationPopup_C*>(UUMG_NotificationPopup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_NotificationPopup.UMG_NotificationPopup_C.UpdateAttachments
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_NotificationPopup_C::UpdateAttachments()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NotificationPopup_C", "UpdateAttachments");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_NotificationPopup.UMG_NotificationPopup_C.GetLoadingWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     Loading                                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_NotificationPopup_C::GetLoadingWidget(class UWidget** Loading)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NotificationPopup_C", "GetLoadingWidget");

	Params::UUMG_NotificationPopup_C_GetLoadingWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Loading != nullptr)
		*Loading = Parms.Loading;

}


// Function UMG_NotificationPopup.UMG_NotificationPopup_C.UpdateProspect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_NotificationPopup_C::UpdateProspect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NotificationPopup_C", "UpdateProspect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_NotificationPopup.UMG_NotificationPopup_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_NotificationPopup_C::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NotificationPopup_C", "Update");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_NotificationPopup.UMG_NotificationPopup_C.OnFail_5E3F90A94463A9573E2CEFBB8066B33B
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResGetProspectSummary      Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_NotificationPopup_C::OnFail_5E3F90A94463A9573E2CEFBB8066B33B(struct FResGetProspectSummary& Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NotificationPopup_C", "OnFail_5E3F90A94463A9573E2CEFBB8066B33B");

	Params::UUMG_NotificationPopup_C_OnFail_5E3F90A94463A9573E2CEFBB8066B33B_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_NotificationPopup.UMG_NotificationPopup_C.OnSuccess_5E3F90A94463A9573E2CEFBB8066B33B
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResGetProspectSummary      Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_NotificationPopup_C::OnSuccess_5E3F90A94463A9573E2CEFBB8066B33B(struct FResGetProspectSummary& Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NotificationPopup_C", "OnSuccess_5E3F90A94463A9573E2CEFBB8066B33B");

	Params::UUMG_NotificationPopup_C_OnSuccess_5E3F90A94463A9573E2CEFBB8066B33B_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_NotificationPopup.UMG_NotificationPopup_C.Show
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNotification               Notification                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_NotificationPopup_C::Show(const struct FNotification& Notification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NotificationPopup_C", "Show");

	Params::UUMG_NotificationPopup_C_Show_Params Parms{};

	Parms.Notification = Notification;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_NotificationPopup.UMG_NotificationPopup_C.Claim Mail Items
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_NotificationPopup_C::Claim_Mail_Items()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NotificationPopup_C", "Claim Mail Items");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_NotificationPopup.UMG_NotificationPopup_C.Delete Mail
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_NotificationPopup_C::Delete_Mail()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NotificationPopup_C", "Delete Mail");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_NotificationPopup.UMG_NotificationPopup_C.PlayShowEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_NotificationPopup_C::PlayShowEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NotificationPopup_C", "PlayShowEffects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_NotificationPopup.UMG_NotificationPopup_C.ExecuteUbergraph_UMG_NotificationPopup
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FResGetProspectSummary      K2Node_CustomEvent_Response_1                                    (ConstParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FResGetProspectSummary      K2Node_CustomEvent_Response                                      (ConstParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FResGetProspectSummary      Temp_struct_Variable                                             (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerState*          K2Node_DynamicCast_AsIcarus_Player_State                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetUserID_ReturnValue                                   (ZeroConstructor, HasGetValueTypeHash)
// struct FOnlineProfileCharacter     CallFunc_GetActiveCharacter_ReturnValue                          (ConstParm)
// class UWidget*                     CallFunc_GetLoadingWidget_Loading                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetLoadingWidget_Loading_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBackendProxyComponent*      CallFunc_GetBackendProxyComponent_BackendProxyComponent          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBackendProxyComponent_bSuccess                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBackendProxyComponent*      CallFunc_GetBackendProxyComponent_BackendProxyComponent_1        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBackendProxyComponent_bSuccess_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FNotification               K2Node_CustomEvent_Notification                                  (None)
// class UWidget*                     CallFunc_GetLoadingWidget_Loading_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetLoadingWidget_Loading_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FReqGetProspectSummary      K2Node_MakeStruct_ReqGetProspectSummary                          (None)
// class UGetProspectSummaryCallbackProxyGen*CallFunc_GetProspectSummary_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_NotificationPopup_C::ExecuteUbergraph_UMG_NotificationPopup(int32 EntryPoint, const struct FResGetProspectSummary& K2Node_CustomEvent_Response_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FResGetProspectSummary& K2Node_CustomEvent_Response, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FResGetProspectSummary& Temp_struct_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AIcarusPlayerState* K2Node_DynamicCast_AsIcarus_Player_State, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetUserID_ReturnValue, const struct FOnlineProfileCharacter& CallFunc_GetActiveCharacter_ReturnValue, class UWidget* CallFunc_GetLoadingWidget_Loading, class UWidget* CallFunc_GetLoadingWidget_Loading_1, class UBackendProxyComponent* CallFunc_GetBackendProxyComponent_BackendProxyComponent, bool CallFunc_GetBackendProxyComponent_bSuccess, class UBackendProxyComponent* CallFunc_GetBackendProxyComponent_BackendProxyComponent_1, bool CallFunc_GetBackendProxyComponent_bSuccess_1, const struct FNotification& K2Node_CustomEvent_Notification, class UWidget* CallFunc_GetLoadingWidget_Loading_2, class UWidget* CallFunc_GetLoadingWidget_Loading_3, const struct FReqGetProspectSummary& K2Node_MakeStruct_ReqGetProspectSummary, class UGetProspectSummaryCallbackProxyGen* CallFunc_GetProspectSummary_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NotificationPopup_C", "ExecuteUbergraph_UMG_NotificationPopup");

	Params::UUMG_NotificationPopup_C_ExecuteUbergraph_UMG_NotificationPopup_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Response_1 = K2Node_CustomEvent_Response_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Response = K2Node_CustomEvent_Response;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_State = K2Node_DynamicCast_AsIcarus_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUserID_ReturnValue = CallFunc_GetUserID_ReturnValue;
	Parms.CallFunc_GetActiveCharacter_ReturnValue = CallFunc_GetActiveCharacter_ReturnValue;
	Parms.CallFunc_GetLoadingWidget_Loading = CallFunc_GetLoadingWidget_Loading;
	Parms.CallFunc_GetLoadingWidget_Loading_1 = CallFunc_GetLoadingWidget_Loading_1;
	Parms.CallFunc_GetBackendProxyComponent_BackendProxyComponent = CallFunc_GetBackendProxyComponent_BackendProxyComponent;
	Parms.CallFunc_GetBackendProxyComponent_bSuccess = CallFunc_GetBackendProxyComponent_bSuccess;
	Parms.CallFunc_GetBackendProxyComponent_BackendProxyComponent_1 = CallFunc_GetBackendProxyComponent_BackendProxyComponent_1;
	Parms.CallFunc_GetBackendProxyComponent_bSuccess_1 = CallFunc_GetBackendProxyComponent_bSuccess_1;
	Parms.K2Node_CustomEvent_Notification = K2Node_CustomEvent_Notification;
	Parms.CallFunc_GetLoadingWidget_Loading_2 = CallFunc_GetLoadingWidget_Loading_2;
	Parms.CallFunc_GetLoadingWidget_Loading_3 = CallFunc_GetLoadingWidget_Loading_3;
	Parms.K2Node_MakeStruct_ReqGetProspectSummary = K2Node_MakeStruct_ReqGetProspectSummary;
	Parms.CallFunc_GetProspectSummary_ReturnValue = CallFunc_GetProspectSummary_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_NotificationPopup.UMG_NotificationPopup_C.Close__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_NotificationPopup_C::Close__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NotificationPopup_C", "Close__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


