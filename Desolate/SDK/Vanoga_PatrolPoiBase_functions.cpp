#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vanoga_PatrolPoiBase.Vanoga_PatrolPoiBase_C
// (Actor)

class UClass* AVanoga_PatrolPoiBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vanoga_PatrolPoiBase_C");

	return Clss;
}


// Vanoga_PatrolPoiBase_C Vanoga_PatrolPoiBase.Default__Vanoga_PatrolPoiBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVanoga_PatrolPoiBase_C* AVanoga_PatrolPoiBase_C::GetDefaultObj()
{
	static class AVanoga_PatrolPoiBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVanoga_PatrolPoiBase_C*>(AVanoga_PatrolPoiBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Vanoga_PatrolPoiBase.Vanoga_PatrolPoiBase_C.ReadyCooldown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AVanoga_PatrolPoiBase_C::ReadyCooldown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_PatrolPoiBase_C", "ReadyCooldown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Vanoga_PatrolPoiBase.Vanoga_PatrolPoiBase_C.IsReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AVanoga_PatrolPoiBase_C::IsReady(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_PatrolPoiBase_C", "IsReady");

	Params::AVanoga_PatrolPoiBase_C_IsReady_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function Vanoga_PatrolPoiBase.Vanoga_PatrolPoiBase_C.Use
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void AVanoga_PatrolPoiBase_C::Use(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_PatrolPoiBase_C", "Use");

	Params::AVanoga_PatrolPoiBase_C_Use_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Vanoga_PatrolPoiBase.Vanoga_PatrolPoiBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AVanoga_PatrolPoiBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_PatrolPoiBase_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Vanoga_PatrolPoiBase.Vanoga_PatrolPoiBase_C.ExecuteUbergraph_Vanoga_PatrolPoiBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVanoga_PatrolPoiBase_C::ExecuteUbergraph_Vanoga_PatrolPoiBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vanoga_PatrolPoiBase_C", "ExecuteUbergraph_Vanoga_PatrolPoiBase");

	Params::AVanoga_PatrolPoiBase_C_ExecuteUbergraph_Vanoga_PatrolPoiBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


