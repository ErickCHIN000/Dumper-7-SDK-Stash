#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Pride.Pride_C
// (Actor, Pawn)

class UClass* APride_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pride_C");

	return Clss;
}


// Pride_C Pride.Default__Pride_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APride_C* APride_C::GetDefaultObj()
{
	static class APride_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APride_C*>(APride_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Pride.Pride_C.OnSexEnd
// (Event, Public, BlueprintEvent)
// Parameters:

void APride_C::OnSexEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Pride_C", "OnSexEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Pride.Pride_C.OnStartSex
// (Event, Public, BlueprintEvent)
// Parameters:

void APride_C::OnStartSex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Pride_C", "OnStartSex");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Pride.Pride_C.ExecuteUbergraph_Pride
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APride_C::ExecuteUbergraph_Pride(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Pride_C", "ExecuteUbergraph_Pride");

	Params::APride_C_ExecuteUbergraph_Pride_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


