#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Procedural_Exit_Target.Procedural_Exit_Target_C
// (Actor)

class UClass* AProcedural_Exit_Target_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Procedural_Exit_Target_C");

	return Clss;
}


// Procedural_Exit_Target_C Procedural_Exit_Target.Default__Procedural_Exit_Target_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProcedural_Exit_Target_C* AProcedural_Exit_Target_C::GetDefaultObj()
{
	static class AProcedural_Exit_Target_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProcedural_Exit_Target_C*>(AProcedural_Exit_Target_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Procedural_Exit_Target.Procedural_Exit_Target_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AProcedural_Exit_Target_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Procedural_Exit_Target_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Procedural_Exit_Target.Procedural_Exit_Target_C.ExecuteUbergraph_Procedural_Exit_Target
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProcedural_Exit_Target_C::ExecuteUbergraph_Procedural_Exit_Target(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Procedural_Exit_Target_C", "ExecuteUbergraph_Procedural_Exit_Target");

	Params::AProcedural_Exit_Target_C_ExecuteUbergraph_Procedural_Exit_Target_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


