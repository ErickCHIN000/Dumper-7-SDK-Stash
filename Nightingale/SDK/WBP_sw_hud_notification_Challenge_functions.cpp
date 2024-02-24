#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_sw_hud_notification_Challenge.WBP_sw_hud_notification_Challenge_C
// (None)

class UClass* UWBP_sw_hud_notification_Challenge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_sw_hud_notification_Challenge_C");

	return Clss;
}


// WBP_sw_hud_notification_Challenge_C WBP_sw_hud_notification_Challenge.Default__WBP_sw_hud_notification_Challenge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_sw_hud_notification_Challenge_C* UWBP_sw_hud_notification_Challenge_C::GetDefaultObj()
{
	static class UWBP_sw_hud_notification_Challenge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_sw_hud_notification_Challenge_C*>(UWBP_sw_hud_notification_Challenge_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_sw_hud_notification_Challenge.WBP_sw_hud_notification_Challenge_C.WBP_sw_hud_notification_Challenge_AutoGenFunc
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExperienceStateID          ChallengeID                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IChallengeDefinition>CallFunc_GetChallengeDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetTitle_ReturnValue                                    (None)

void UWBP_sw_hud_notification_Challenge_C::WBP_sw_hud_notification_Challenge_AutoGenFunc(struct FExperienceStateID& ChallengeID, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, TScriptInterface<class IChallengeDefinition> CallFunc_GetChallengeDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetTitle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_hud_notification_Challenge_C", "WBP_sw_hud_notification_Challenge_AutoGenFunc");

	Params::UWBP_sw_hud_notification_Challenge_C_WBP_sw_hud_notification_Challenge_AutoGenFunc_Params Parms{};

	Parms.ChallengeID = ChallengeID;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_GetChallengeDefinition_ReturnValue = CallFunc_GetChallengeDefinition_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTitle_ReturnValue = CallFunc_GetTitle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_hud_notification_Challenge.WBP_sw_hud_notification_Challenge_C.HideNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_hud_notification_Challenge_C::HideNotification(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_hud_notification_Challenge_C", "HideNotification");

	Params::UWBP_sw_hud_notification_Challenge_C_HideNotification_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_hud_notification_Challenge.WBP_sw_hud_notification_Challenge_C.DisplayCompletedChallengeNotification
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Challenge_Name                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Challenge_Description                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// TSoftObjectPtr<class UTexture2D>   SoftTexture                                                      (BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_hud_notification_Challenge_C::DisplayCompletedChallengeNotification(class FText Challenge_Name, class FText Challenge_Description, TSoftObjectPtr<class UTexture2D> SoftTexture, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_hud_notification_Challenge_C", "DisplayCompletedChallengeNotification");

	Params::UWBP_sw_hud_notification_Challenge_C_DisplayCompletedChallengeNotification_Params Parms{};

	Parms.Challenge_Name = Challenge_Name;
	Parms.Challenge_Description = Challenge_Description;
	Parms.SoftTexture = SoftTexture;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_hud_notification_Challenge.WBP_sw_hud_notification_Challenge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_sw_hud_notification_Challenge_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_hud_notification_Challenge_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_hud_notification_Challenge.WBP_sw_hud_notification_Challenge_C.OnPlayerControllerReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_hud_notification_Challenge_C::OnPlayerControllerReady(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_hud_notification_Challenge_C", "OnPlayerControllerReady");

	Params::UWBP_sw_hud_notification_Challenge_C_OnPlayerControllerReady_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_hud_notification_Challenge.WBP_sw_hud_notification_Challenge_C.ExecuteUbergraph_WBP_sw_hud_notification_Challenge
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class IInterface>      Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FDelegateHandleBPWrapper    CallFunc_AwaitBP_Handle                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IChallengeSystemObservable>K2Node_DynamicCast_AsChallenge_System_Observable                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UWBP_sw_hud_notification_Challenge_C::ExecuteUbergraph_WBP_sw_hud_notification_Challenge(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, TSubclassOf<class IInterface> Temp_class_Variable, TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput, const struct FDelegateHandleBPWrapper& CallFunc_AwaitBP_Handle, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class UObject* CallFunc_FindFirstImplementor_ReturnValue, bool K2Node_CustomEvent_Success, TScriptInterface<class IChallengeSystemObservable> K2Node_DynamicCast_AsChallenge_System_Observable, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_hud_notification_Challenge_C", "ExecuteUbergraph_WBP_sw_hud_notification_Challenge");

	Params::UWBP_sw_hud_notification_Challenge_C_ExecuteUbergraph_WBP_sw_hud_notification_Challenge_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_AwaitBP_Awaitable_CastInput = CallFunc_AwaitBP_Awaitable_CastInput;
	Parms.CallFunc_AwaitBP_Handle = CallFunc_AwaitBP_Handle;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_1 = CallFunc_GetOwningPlayerController_ReturnValue_1;
	Parms.CallFunc_FindFirstImplementor_ReturnValue = CallFunc_FindFirstImplementor_ReturnValue;
	Parms.K2Node_CustomEvent_Success = K2Node_CustomEvent_Success;
	Parms.K2Node_DynamicCast_AsChallenge_System_Observable = K2Node_DynamicCast_AsChallenge_System_Observable;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


