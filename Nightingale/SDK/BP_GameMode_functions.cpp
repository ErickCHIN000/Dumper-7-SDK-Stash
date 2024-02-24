#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GameMode.BP_GameMode_C
// (Actor)

class UClass* ABP_GameMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GameMode_C");

	return Clss;
}


// BP_GameMode_C BP_GameMode.Default__BP_GameMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GameMode_C* ABP_GameMode_C::GetDefaultObj()
{
	static class ABP_GameMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GameMode_C*>(ABP_GameMode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GameMode.BP_GameMode_C.OnLogoutHandler
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 ExitingController                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameMode_C::OnLogoutHandler(class AController* ExitingController, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameMode_C", "OnLogoutHandler");

	Params::ABP_GameMode_C_OnLogoutHandler_Params Parms{};

	Parms.ExitingController = ExitingController;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GameMode.BP_GameMode_C.OnPostLoginHandler
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           NewPlayer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameMode_C::OnPostLoginHandler(class APlayerController* NewPlayer, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameMode_C", "OnPostLoginHandler");

	Params::ABP_GameMode_C_OnPostLoginHandler_Params Parms{};

	Parms.NewPlayer = NewPlayer;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GameMode.BP_GameMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_GameMode_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameMode_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GameMode.BP_GameMode_C.K2_PostLogin
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*           NewPlayer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_GameMode_C::K2_PostLogin(class APlayerController* NewPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameMode_C", "K2_PostLogin");

	Params::ABP_GameMode_C_K2_PostLogin_Params Parms{};

	Parms.NewPlayer = NewPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GameMode.BP_GameMode_C.OnAwaitGameModeReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXGameModeBase*            GameMode                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsReady                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameMode_C::OnAwaitGameModeReady(class ANWXGameModeBase* GameMode, bool bIsReady)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameMode_C", "OnAwaitGameModeReady");

	Params::ABP_GameMode_C_OnAwaitGameModeReady_Params Parms{};

	Parms.GameMode = GameMode;
	Parms.bIsReady = bIsReady;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GameMode.BP_GameMode_C.K2_OnLogout
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                 ExitingController                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_GameMode_C::K2_OnLogout(class AController* ExitingController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameMode_C", "K2_OnLogout");

	Params::ABP_GameMode_C_K2_OnLogout_Params Parms{};

	Parms.ExitingController = ExitingController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GameMode.BP_GameMode_C.ExecuteUbergraph_BP_GameMode
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDelegateHandleBPWrapper    CallFunc_AwaitGameModeBPTimed_Handle                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           K2Node_Event_NewPlayer                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXGameModeBase*            K2Node_CustomEvent_GameMode                                      (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsReady                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SimulationStateManager_C*CallFunc_GetManager_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_ExitingController                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_GameMode_C::ExecuteUbergraph_BP_GameMode(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDelegateHandleBPWrapper& CallFunc_AwaitGameModeBPTimed_Handle, class APlayerController* K2Node_Event_NewPlayer, class ANWXGameModeBase* K2Node_CustomEvent_GameMode, bool K2Node_CustomEvent_bIsReady, class ABP_SimulationStateManager_C* CallFunc_GetManager_ReturnValue, class AController* K2Node_Event_ExitingController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameMode_C", "ExecuteUbergraph_BP_GameMode");

	Params::ABP_GameMode_C_ExecuteUbergraph_BP_GameMode_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AwaitGameModeBPTimed_Handle = CallFunc_AwaitGameModeBPTimed_Handle;
	Parms.K2Node_Event_NewPlayer = K2Node_Event_NewPlayer;
	Parms.K2Node_CustomEvent_GameMode = K2Node_CustomEvent_GameMode;
	Parms.K2Node_CustomEvent_bIsReady = K2Node_CustomEvent_bIsReady;
	Parms.CallFunc_GetManager_ReturnValue = CallFunc_GetManager_ReturnValue;
	Parms.K2Node_Event_ExitingController = K2Node_Event_ExitingController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GameMode.BP_GameMode_C.OnLogout__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 ExitingController                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_GameMode_C::OnLogout__DelegateSignature(class AController* ExitingController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameMode_C", "OnLogout__DelegateSignature");

	Params::ABP_GameMode_C_OnLogout__DelegateSignature_Params Parms{};

	Parms.ExitingController = ExitingController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GameMode.BP_GameMode_C.OnPostLogin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           NewPlayer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_GameMode_C::OnPostLogin__DelegateSignature(class APlayerController* NewPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameMode_C", "OnPostLogin__DelegateSignature");

	Params::ABP_GameMode_C_OnPostLogin__DelegateSignature_Params Parms{};

	Parms.NewPlayer = NewPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GameMode.BP_GameMode_C.GameModeReady__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GameMode_C::GameModeReady__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameMode_C", "GameModeReady__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


