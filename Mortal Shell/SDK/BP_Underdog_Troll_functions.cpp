#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Underdog_Troll.BP_Underdog_Troll_C
// (Actor, Pawn)

class UClass* ABP_Underdog_Troll_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Underdog_Troll_C");

	return Clss;
}


// BP_Underdog_Troll_C BP_Underdog_Troll.Default__BP_Underdog_Troll_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Underdog_Troll_C* ABP_Underdog_Troll_C::GetDefaultObj()
{
	static class ABP_Underdog_Troll_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Underdog_Troll_C*>(ABP_Underdog_Troll_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Underdog_Troll.BP_Underdog_Troll_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Underdog_Troll_C::UserConstructionScript(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Underdog_Troll_C", "UserConstructionScript");

	Params::ABP_Underdog_Troll_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Underdog_Troll.BP_Underdog_Troll_C.DisableTrolling
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Underdog_Troll_C::DisableTrolling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Underdog_Troll_C", "DisableTrolling");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Underdog_Troll.BP_Underdog_Troll_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Underdog_Troll_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Underdog_Troll_C", "ReceiveTick");

	Params::ABP_Underdog_Troll_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Underdog_Troll.BP_Underdog_Troll_C.ThrowSword
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Underdog_Troll_C::ThrowSword()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Underdog_Troll_C", "ThrowSword");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Underdog_Troll.BP_Underdog_Troll_C.OverlapStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Underdog_Troll_C::OverlapStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Underdog_Troll_C", "OverlapStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Underdog_Troll.BP_Underdog_Troll_C.OverlapEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Underdog_Troll_C::OverlapEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Underdog_Troll_C", "OverlapEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Underdog_Troll.BP_Underdog_Troll_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Underdog_Troll_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Underdog_Troll_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Underdog_Troll.BP_Underdog_Troll_C.ExecuteUbergraph_BP_Underdog_Troll
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Underdog_Troll_C::ExecuteUbergraph_BP_Underdog_Troll(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Underdog_Troll_C", "ExecuteUbergraph_BP_Underdog_Troll");

	Params::ABP_Underdog_Troll_C_ExecuteUbergraph_BP_Underdog_Troll_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


