#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DummyCharacter.BP_DummyCharacter_C
// (Actor, Pawn)

class UClass* ABP_DummyCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DummyCharacter_C");

	return Clss;
}


// BP_DummyCharacter_C BP_DummyCharacter.Default__BP_DummyCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DummyCharacter_C* ABP_DummyCharacter_C::GetDefaultObj()
{
	static class ABP_DummyCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DummyCharacter_C*>(ABP_DummyCharacter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DummyCharacter.BP_DummyCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_DummyCharacter_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DummyCharacter_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DummyCharacter.BP_DummyCharacter_C.ExecuteUbergraph_BP_DummyCharacter
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DummyCharacter_C::ExecuteUbergraph_BP_DummyCharacter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DummyCharacter_C", "ExecuteUbergraph_BP_DummyCharacter");

	Params::ABP_DummyCharacter_C_ExecuteUbergraph_BP_DummyCharacter_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


