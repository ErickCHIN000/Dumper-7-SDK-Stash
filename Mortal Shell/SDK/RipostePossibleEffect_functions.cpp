#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RipostePossibleEffect.RipostePossibleEffect_C
// (Actor)

class UClass* ARipostePossibleEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RipostePossibleEffect_C");

	return Clss;
}


// RipostePossibleEffect_C RipostePossibleEffect.Default__RipostePossibleEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARipostePossibleEffect_C* ARipostePossibleEffect_C::GetDefaultObj()
{
	static class ARipostePossibleEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARipostePossibleEffect_C*>(ARipostePossibleEffect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RipostePossibleEffect.RipostePossibleEffect_C.Animate__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ARipostePossibleEffect_C::Animate__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RipostePossibleEffect_C", "Animate__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RipostePossibleEffect.RipostePossibleEffect_C.Animate__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ARipostePossibleEffect_C::Animate__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RipostePossibleEffect_C", "Animate__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RipostePossibleEffect.RipostePossibleEffect_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ARipostePossibleEffect_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RipostePossibleEffect_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RipostePossibleEffect.RipostePossibleEffect_C.ExecuteUbergraph_RipostePossibleEffect
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARipostePossibleEffect_C::ExecuteUbergraph_RipostePossibleEffect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RipostePossibleEffect_C", "ExecuteUbergraph_RipostePossibleEffect");

	Params::ARipostePossibleEffect_C_ExecuteUbergraph_RipostePossibleEffect_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


