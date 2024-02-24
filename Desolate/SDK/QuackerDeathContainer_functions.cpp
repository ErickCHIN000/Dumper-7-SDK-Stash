#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QuackerDeathContainer.QuackerDeathContainer_C
// (Actor)

class UClass* AQuackerDeathContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuackerDeathContainer_C");

	return Clss;
}


// QuackerDeathContainer_C QuackerDeathContainer.Default__QuackerDeathContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AQuackerDeathContainer_C* AQuackerDeathContainer_C::GetDefaultObj()
{
	static class AQuackerDeathContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AQuackerDeathContainer_C*>(AQuackerDeathContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QuackerDeathContainer.QuackerDeathContainer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AQuackerDeathContainer_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuackerDeathContainer_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuackerDeathContainer.QuackerDeathContainer_C.ExecuteUbergraph_QuackerDeathContainer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuackerDeathContainer_C::ExecuteUbergraph_QuackerDeathContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuackerDeathContainer_C", "ExecuteUbergraph_QuackerDeathContainer");

	Params::AQuackerDeathContainer_C_ExecuteUbergraph_QuackerDeathContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


