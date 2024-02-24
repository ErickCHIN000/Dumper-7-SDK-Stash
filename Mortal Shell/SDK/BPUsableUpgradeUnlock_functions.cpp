#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPUsableUpgradeUnlock.BPUsableUpgradeUnlock_C
// (Actor)

class UClass* ABPUsableUpgradeUnlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPUsableUpgradeUnlock_C");

	return Clss;
}


// BPUsableUpgradeUnlock_C BPUsableUpgradeUnlock.Default__BPUsableUpgradeUnlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPUsableUpgradeUnlock_C* ABPUsableUpgradeUnlock_C::GetDefaultObj()
{
	static class ABPUsableUpgradeUnlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPUsableUpgradeUnlock_C*>(ABPUsableUpgradeUnlock_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPUsableUpgradeUnlock.BPUsableUpgradeUnlock_C.OnActorUsed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnActorUsed_Success                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_UpgradeUnlocked_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPUsableUpgradeUnlock_C::OnActorUsed(class APlayerController* Controller, bool* Success, bool CallFunc_OnActorUsed_Success, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_UpgradeUnlocked_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsableUpgradeUnlock_C", "OnActorUsed");

	Params::ABPUsableUpgradeUnlock_C_OnActorUsed_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_OnActorUsed_Success = CallFunc_OnActorUsed_Success;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPUsableUpgradeUnlock.BPUsableUpgradeUnlock_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABPUsableUpgradeUnlock_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsableUpgradeUnlock_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPUsableUpgradeUnlock.BPUsableUpgradeUnlock_C.UpdateState
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPUsableUpgradeUnlock_C::UpdateState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsableUpgradeUnlock_C", "UpdateState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPUsableUpgradeUnlock.BPUsableUpgradeUnlock_C.ExecuteUbergraph_BPUsableUpgradeUnlock
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPUsableUpgradeUnlock_C::ExecuteUbergraph_BPUsableUpgradeUnlock(int32 EntryPoint, bool CallFunc_IsUpgradeUnlocked_bUnlocked, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsableUpgradeUnlock_C", "ExecuteUbergraph_BPUsableUpgradeUnlock");

	Params::ABPUsableUpgradeUnlock_C_ExecuteUbergraph_BPUsableUpgradeUnlock_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked = CallFunc_IsUpgradeUnlocked_bUnlocked;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


