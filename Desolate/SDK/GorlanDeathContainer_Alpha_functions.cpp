#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GorlanDeathContainer_Alpha.GorlanDeathContainer_Alpha_C
// (Actor)

class UClass* AGorlanDeathContainer_Alpha_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GorlanDeathContainer_Alpha_C");

	return Clss;
}


// GorlanDeathContainer_Alpha_C GorlanDeathContainer_Alpha.Default__GorlanDeathContainer_Alpha_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGorlanDeathContainer_Alpha_C* AGorlanDeathContainer_Alpha_C::GetDefaultObj()
{
	static class AGorlanDeathContainer_Alpha_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGorlanDeathContainer_Alpha_C*>(AGorlanDeathContainer_Alpha_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GorlanDeathContainer_Alpha.GorlanDeathContainer_Alpha_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGorlanDeathContainer_Alpha_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GorlanDeathContainer_Alpha_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GorlanDeathContainer_Alpha.GorlanDeathContainer_Alpha_C.ExecuteUbergraph_GorlanDeathContainer_Alpha
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGorlanDeathContainer_Alpha_C::ExecuteUbergraph_GorlanDeathContainer_Alpha(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GorlanDeathContainer_Alpha_C", "ExecuteUbergraph_GorlanDeathContainer_Alpha");

	Params::AGorlanDeathContainer_Alpha_C_ExecuteUbergraph_GorlanDeathContainer_Alpha_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


