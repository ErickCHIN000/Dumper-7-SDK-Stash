#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MadmanDeathContainer.MadmanDeathContainer_C
// (Actor)

class UClass* AMadmanDeathContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MadmanDeathContainer_C");

	return Clss;
}


// MadmanDeathContainer_C MadmanDeathContainer.Default__MadmanDeathContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMadmanDeathContainer_C* AMadmanDeathContainer_C::GetDefaultObj()
{
	static class AMadmanDeathContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMadmanDeathContainer_C*>(AMadmanDeathContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MadmanDeathContainer.MadmanDeathContainer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMadmanDeathContainer_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MadmanDeathContainer_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MadmanDeathContainer.MadmanDeathContainer_C.ExecuteUbergraph_MadmanDeathContainer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMadmanDeathContainer_C::ExecuteUbergraph_MadmanDeathContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MadmanDeathContainer_C", "ExecuteUbergraph_MadmanDeathContainer");

	Params::AMadmanDeathContainer_C_ExecuteUbergraph_MadmanDeathContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


