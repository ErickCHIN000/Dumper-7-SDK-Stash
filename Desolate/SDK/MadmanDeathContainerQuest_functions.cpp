#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MadmanDeathContainerQuest.MadmanDeathContainerQuest_C
// (Actor)

class UClass* AMadmanDeathContainerQuest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MadmanDeathContainerQuest_C");

	return Clss;
}


// MadmanDeathContainerQuest_C MadmanDeathContainerQuest.Default__MadmanDeathContainerQuest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMadmanDeathContainerQuest_C* AMadmanDeathContainerQuest_C::GetDefaultObj()
{
	static class AMadmanDeathContainerQuest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMadmanDeathContainerQuest_C*>(AMadmanDeathContainerQuest_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MadmanDeathContainerQuest.MadmanDeathContainerQuest_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMadmanDeathContainerQuest_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MadmanDeathContainerQuest_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MadmanDeathContainerQuest.MadmanDeathContainerQuest_C.ExecuteUbergraph_MadmanDeathContainerQuest
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMadmanDeathContainerQuest_C::ExecuteUbergraph_MadmanDeathContainerQuest(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MadmanDeathContainerQuest_C", "ExecuteUbergraph_MadmanDeathContainerQuest");

	Params::AMadmanDeathContainerQuest_C_ExecuteUbergraph_MadmanDeathContainerQuest_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


