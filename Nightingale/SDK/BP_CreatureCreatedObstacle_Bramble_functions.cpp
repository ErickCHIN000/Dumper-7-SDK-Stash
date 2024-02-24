#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CreatureCreatedObstacle_Bramble.BP_CreatureCreatedObstacle_Bramble_C
// (Actor)

class UClass* ABP_CreatureCreatedObstacle_Bramble_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CreatureCreatedObstacle_Bramble_C");

	return Clss;
}


// BP_CreatureCreatedObstacle_Bramble_C BP_CreatureCreatedObstacle_Bramble.Default__BP_CreatureCreatedObstacle_Bramble_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CreatureCreatedObstacle_Bramble_C* ABP_CreatureCreatedObstacle_Bramble_C::GetDefaultObj()
{
	static class ABP_CreatureCreatedObstacle_Bramble_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CreatureCreatedObstacle_Bramble_C*>(ABP_CreatureCreatedObstacle_Bramble_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CreatureCreatedObstacle_Bramble.BP_CreatureCreatedObstacle_Bramble_C.DeathLogic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAtMinHealth_AtMinHealth                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_Bramble_C::DeathLogic(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsAtMinHealth_AtMinHealth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_Bramble_C", "DeathLogic");

	Params::ABP_CreatureCreatedObstacle_Bramble_C_DeathLogic_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_IsAtMinHealth_AtMinHealth = CallFunc_IsAtMinHealth_AtMinHealth;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle_Bramble.BP_CreatureCreatedObstacle_Bramble_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_CreatureCreatedObstacle_Bramble_C::UserConstructionScript(const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_Bramble_C", "UserConstructionScript");

	Params::ABP_CreatureCreatedObstacle_Bramble_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureCreatedObstacle_Bramble.BP_CreatureCreatedObstacle_Bramble_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_CreatureCreatedObstacle_Bramble_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_Bramble_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CreatureCreatedObstacle_Bramble.BP_CreatureCreatedObstacle_Bramble_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_CreatureCreatedObstacle_Bramble_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_Bramble_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CreatureCreatedObstacle_Bramble.BP_CreatureCreatedObstacle_Bramble_C.Timeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_CreatureCreatedObstacle_Bramble_C::Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_Bramble_C", "Timeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CreatureCreatedObstacle_Bramble.BP_CreatureCreatedObstacle_Bramble_C.Timeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_CreatureCreatedObstacle_Bramble_C::Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_Bramble_C", "Timeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CreatureCreatedObstacle_Bramble.BP_CreatureCreatedObstacle_Bramble_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_CreatureCreatedObstacle_Bramble_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_Bramble_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CreatureCreatedObstacle_Bramble.BP_CreatureCreatedObstacle_Bramble_C.ReverseBramble
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CreatureCreatedObstacle_Bramble_C::ReverseBramble()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_Bramble_C", "ReverseBramble");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CreatureCreatedObstacle_Bramble.BP_CreatureCreatedObstacle_Bramble_C.ExecuteUbergraph_BP_CreatureCreatedObstacle_Bramble
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void ABP_CreatureCreatedObstacle_Bramble_C::ExecuteUbergraph_BP_CreatureCreatedObstacle_Bramble(int32 EntryPoint, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureCreatedObstacle_Bramble_C", "ExecuteUbergraph_BP_CreatureCreatedObstacle_Bramble");

	Params::ABP_CreatureCreatedObstacle_Bramble_C_ExecuteUbergraph_BP_CreatureCreatedObstacle_Bramble_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


