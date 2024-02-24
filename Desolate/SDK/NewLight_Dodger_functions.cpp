#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NewLight_Dodger.NewLight_Dodger_C
// (Actor, Pawn)

class UClass* ANewLight_Dodger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NewLight_Dodger_C");

	return Clss;
}


// NewLight_Dodger_C NewLight_Dodger.Default__NewLight_Dodger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANewLight_Dodger_C* ANewLight_Dodger_C::GetDefaultObj()
{
	static class ANewLight_Dodger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANewLight_Dodger_C*>(ANewLight_Dodger_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NewLight_Dodger.NewLight_Dodger_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ANewLight_Dodger_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewLight_Dodger_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NewLight_Dodger.NewLight_Dodger_C.ExecuteUbergraph_NewLight_Dodger
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANewLight_Dodger_C::ExecuteUbergraph_NewLight_Dodger(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewLight_Dodger_C", "ExecuteUbergraph_NewLight_Dodger");

	Params::ANewLight_Dodger_C_ExecuteUbergraph_NewLight_Dodger_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


