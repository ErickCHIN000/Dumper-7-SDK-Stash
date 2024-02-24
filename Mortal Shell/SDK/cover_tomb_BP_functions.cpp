#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass cover_tomb_BP.cover_tomb_BP_C
// (Actor)

class UClass* ACover_tomb_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("cover_tomb_BP_C");

	return Clss;
}


// cover_tomb_BP_C cover_tomb_BP.Default__cover_tomb_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACover_tomb_BP_C* ACover_tomb_BP_C::GetDefaultObj()
{
	static class ACover_tomb_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACover_tomb_BP_C*>(ACover_tomb_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function cover_tomb_BP.cover_tomb_BP_C.JiggleLid__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ACover_tomb_BP_C::JiggleLid__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("cover_tomb_BP_C", "JiggleLid__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function cover_tomb_BP.cover_tomb_BP_C.JiggleLid__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ACover_tomb_BP_C::JiggleLid__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("cover_tomb_BP_C", "JiggleLid__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function cover_tomb_BP.cover_tomb_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ACover_tomb_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("cover_tomb_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function cover_tomb_BP.cover_tomb_BP_C.PuzzleCompleted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACover_tomb_BP_C::PuzzleCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("cover_tomb_BP_C", "PuzzleCompleted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function cover_tomb_BP.cover_tomb_BP_C.ExecuteUbergraph_cover_tomb_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ACover_tomb_BP_C::ExecuteUbergraph_cover_tomb_BP(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("cover_tomb_BP_C", "ExecuteUbergraph_cover_tomb_BP");

	Params::ACover_tomb_BP_C_ExecuteUbergraph_cover_tomb_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}


