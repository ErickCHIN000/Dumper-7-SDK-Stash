#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bc_PawnMovementDetector.bc_PawnMovementDetector_C
// (None)

class UClass* Ubc_PawnMovementDetector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bc_PawnMovementDetector_C");

	return Clss;
}


// bc_PawnMovementDetector_C bc_PawnMovementDetector.Default__bc_PawnMovementDetector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ubc_PawnMovementDetector_C* Ubc_PawnMovementDetector_C::GetDefaultObj()
{
	static class Ubc_PawnMovementDetector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ubc_PawnMovementDetector_C*>(Ubc_PawnMovementDetector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bc_PawnMovementDetector.bc_PawnMovementDetector_C.DisableDetector
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubc_PawnMovementDetector_C::DisableDetector()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_PawnMovementDetector_C", "DisableDetector");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bc_PawnMovementDetector.bc_PawnMovementDetector_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubc_PawnMovementDetector_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_PawnMovementDetector_C", "ReceiveTick");

	Params::Ubc_PawnMovementDetector_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bc_PawnMovementDetector.bc_PawnMovementDetector_C.EnableDetector
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubc_PawnMovementDetector_C::EnableDetector()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_PawnMovementDetector_C", "EnableDetector");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bc_PawnMovementDetector.bc_PawnMovementDetector_C.ExecuteUbergraph_bc_PawnMovementDetector
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCurrentAcceleration_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubc_PawnMovementDetector_C::ExecuteUbergraph_bc_PawnMovementDetector(int32 EntryPoint, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_GetCurrentAcceleration_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_PawnMovementDetector_C", "ExecuteUbergraph_bc_PawnMovementDetector");

	Params::Ubc_PawnMovementDetector_C_ExecuteUbergraph_bc_PawnMovementDetector_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetCurrentAcceleration_ReturnValue = CallFunc_GetCurrentAcceleration_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bc_PawnMovementDetector.bc_PawnMovementDetector_C.OnMovementBegan__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubc_PawnMovementDetector_C::OnMovementBegan__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_PawnMovementDetector_C", "OnMovementBegan__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


