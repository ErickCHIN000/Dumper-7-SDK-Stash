#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GorlanDeathContainer.GorlanDeathContainer_C
// (Actor)

class UClass* AGorlanDeathContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GorlanDeathContainer_C");

	return Clss;
}


// GorlanDeathContainer_C GorlanDeathContainer.Default__GorlanDeathContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGorlanDeathContainer_C* AGorlanDeathContainer_C::GetDefaultObj()
{
	static class AGorlanDeathContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGorlanDeathContainer_C*>(AGorlanDeathContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GorlanDeathContainer.GorlanDeathContainer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGorlanDeathContainer_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GorlanDeathContainer_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GorlanDeathContainer.GorlanDeathContainer_C.ExecuteUbergraph_GorlanDeathContainer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGorlanDeathContainer_C::ExecuteUbergraph_GorlanDeathContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GorlanDeathContainer_C", "ExecuteUbergraph_GorlanDeathContainer");

	Params::AGorlanDeathContainer_C_ExecuteUbergraph_GorlanDeathContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


