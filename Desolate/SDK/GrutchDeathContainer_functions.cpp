#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GrutchDeathContainer.GrutchDeathContainer_C
// (Actor)

class UClass* AGrutchDeathContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GrutchDeathContainer_C");

	return Clss;
}


// GrutchDeathContainer_C GrutchDeathContainer.Default__GrutchDeathContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGrutchDeathContainer_C* AGrutchDeathContainer_C::GetDefaultObj()
{
	static class AGrutchDeathContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGrutchDeathContainer_C*>(AGrutchDeathContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GrutchDeathContainer.GrutchDeathContainer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGrutchDeathContainer_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GrutchDeathContainer_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GrutchDeathContainer.GrutchDeathContainer_C.ExecuteUbergraph_GrutchDeathContainer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGrutchDeathContainer_C::ExecuteUbergraph_GrutchDeathContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GrutchDeathContainer_C", "ExecuteUbergraph_GrutchDeathContainer");

	Params::AGrutchDeathContainer_C_ExecuteUbergraph_GrutchDeathContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


