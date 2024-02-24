#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GrutchDeathContainer_Alpha.GrutchDeathContainer_Alpha_C
// (Actor)

class UClass* AGrutchDeathContainer_Alpha_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GrutchDeathContainer_Alpha_C");

	return Clss;
}


// GrutchDeathContainer_Alpha_C GrutchDeathContainer_Alpha.Default__GrutchDeathContainer_Alpha_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGrutchDeathContainer_Alpha_C* AGrutchDeathContainer_Alpha_C::GetDefaultObj()
{
	static class AGrutchDeathContainer_Alpha_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGrutchDeathContainer_Alpha_C*>(AGrutchDeathContainer_Alpha_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GrutchDeathContainer_Alpha.GrutchDeathContainer_Alpha_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGrutchDeathContainer_Alpha_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GrutchDeathContainer_Alpha_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GrutchDeathContainer_Alpha.GrutchDeathContainer_Alpha_C.ExecuteUbergraph_GrutchDeathContainer_Alpha
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGrutchDeathContainer_Alpha_C::ExecuteUbergraph_GrutchDeathContainer_Alpha(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GrutchDeathContainer_Alpha_C", "ExecuteUbergraph_GrutchDeathContainer_Alpha");

	Params::AGrutchDeathContainer_Alpha_C_ExecuteUbergraph_GrutchDeathContainer_Alpha_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


