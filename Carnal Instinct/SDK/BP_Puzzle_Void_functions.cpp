#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Puzzle_Void.BP_Puzzle_Void_C
// (Actor)

class UClass* ABP_Puzzle_Void_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Puzzle_Void_C");

	return Clss;
}


// BP_Puzzle_Void_C BP_Puzzle_Void.Default__BP_Puzzle_Void_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Puzzle_Void_C* ABP_Puzzle_Void_C::GetDefaultObj()
{
	static class ABP_Puzzle_Void_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Puzzle_Void_C*>(ABP_Puzzle_Void_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Puzzle_Void.BP_Puzzle_Void_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Puzzle_Void_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Puzzle_Void_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Puzzle_Void.BP_Puzzle_Void_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Puzzle_Void_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Puzzle_Void_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Puzzle_Void.BP_Puzzle_Void_C.Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Puzzle_Void_C::Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Puzzle_Void_C", "Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Puzzle_Void.BP_Puzzle_Void_C.End Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Puzzle_Void_C::End_Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Puzzle_Void_C", "End Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Puzzle_Void.BP_Puzzle_Void_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Puzzle_Void_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Puzzle_Void_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Puzzle_Void.BP_Puzzle_Void_C.Remove Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Puzzle_Void_C::Remove_Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Puzzle_Void_C", "Remove Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Puzzle_Void.BP_Puzzle_Void_C.Game Load
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Puzzle_Void_C::Game_Load()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Puzzle_Void_C", "Game Load");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Puzzle_Void.BP_Puzzle_Void_C.Move Forward
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Puzzle_Void_C::Move_Forward()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Puzzle_Void_C", "Move Forward");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Puzzle_Void.BP_Puzzle_Void_C.Move Backward
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Puzzle_Void_C::Move_Backward()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Puzzle_Void_C", "Move Backward");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Puzzle_Void.BP_Puzzle_Void_C.ExecuteUbergraph_BP_Puzzle_Void
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<class UPrimitiveComponent*>   K2Node_MakeSet_Set                                               (ContainsInstancedReference)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_RLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_2                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Puzzle_Void_C::ExecuteUbergraph_BP_Puzzle_Void(int32 EntryPoint, TSet<class UPrimitiveComponent*> K2Node_MakeSet_Set, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_RLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_NotEqual_IntInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Puzzle_Void_C", "ExecuteUbergraph_BP_Puzzle_Void");

	Params::ABP_Puzzle_Void_C_ExecuteUbergraph_BP_Puzzle_Void_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeSet_Set = K2Node_MakeSet_Set;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_RLerp_ReturnValue = CallFunc_RLerp_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_1 = CallFunc_K2_SetRelativeRotation_SweepHitResult_1;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_2 = CallFunc_K2_SetRelativeRotation_SweepHitResult_2;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


