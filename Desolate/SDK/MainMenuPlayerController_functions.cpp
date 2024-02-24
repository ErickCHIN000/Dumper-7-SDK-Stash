#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MainMenuPlayerController.MainMenuPlayerController_C
// (Actor, PlayerController)

class UClass* AMainMenuPlayerController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuPlayerController_C");

	return Clss;
}


// MainMenuPlayerController_C MainMenuPlayerController.Default__MainMenuPlayerController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMainMenuPlayerController_C* AMainMenuPlayerController_C::GetDefaultObj()
{
	static class AMainMenuPlayerController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMainMenuPlayerController_C*>(AMainMenuPlayerController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainMenuPlayerController.MainMenuPlayerController_C.OnFailure_82AF670845DF3BDD03BCBA9E28AC346F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenuPlayerController_C::OnFailure_82AF670845DF3BDD03BCBA9E28AC346F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuPlayerController_C", "OnFailure_82AF670845DF3BDD03BCBA9E28AC346F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuPlayerController.MainMenuPlayerController_C.OnSuccess_82AF670845DF3BDD03BCBA9E28AC346F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenuPlayerController_C::OnSuccess_82AF670845DF3BDD03BCBA9E28AC346F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuPlayerController_C", "OnSuccess_82AF670845DF3BDD03BCBA9E28AC346F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuPlayerController.MainMenuPlayerController_C.OnSessionInviteAccepted
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FSHUniqueNetId              PersonInviting                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBlueprintSessionResult     SearchResult                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AMainMenuPlayerController_C::OnSessionInviteAccepted(const struct FSHUniqueNetId& PersonInviting, struct FBlueprintSessionResult& SearchResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuPlayerController_C", "OnSessionInviteAccepted");

	Params::AMainMenuPlayerController_C_OnSessionInviteAccepted_Params Parms{};

	Parms.PersonInviting = PersonInviting;
	Parms.SearchResult = SearchResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuPlayerController.MainMenuPlayerController_C.ExecuteUbergraph_MainMenuPlayerController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FSHUniqueNetId              K2Node_Event_PersonInviting                                      (None)
// struct FBlueprintSessionResult     K2Node_Event_SearchResult                                        (ConstParm)
// class UJoinSessionCallbackProxy*   CallFunc_JoinSession_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMainMenuPlayerController_C::ExecuteUbergraph_MainMenuPlayerController(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FSHUniqueNetId& K2Node_Event_PersonInviting, const struct FBlueprintSessionResult& K2Node_Event_SearchResult, class UJoinSessionCallbackProxy* CallFunc_JoinSession_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuPlayerController_C", "ExecuteUbergraph_MainMenuPlayerController");

	Params::AMainMenuPlayerController_C_ExecuteUbergraph_MainMenuPlayerController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_PersonInviting = K2Node_Event_PersonInviting;
	Parms.K2Node_Event_SearchResult = K2Node_Event_SearchResult;
	Parms.CallFunc_JoinSession_ReturnValue = CallFunc_JoinSession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


