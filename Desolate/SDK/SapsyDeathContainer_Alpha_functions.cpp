#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SapsyDeathContainer_Alpha.SapsyDeathContainer_Alpha_C
// (Actor)

class UClass* ASapsyDeathContainer_Alpha_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SapsyDeathContainer_Alpha_C");

	return Clss;
}


// SapsyDeathContainer_Alpha_C SapsyDeathContainer_Alpha.Default__SapsyDeathContainer_Alpha_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASapsyDeathContainer_Alpha_C* ASapsyDeathContainer_Alpha_C::GetDefaultObj()
{
	static class ASapsyDeathContainer_Alpha_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASapsyDeathContainer_Alpha_C*>(ASapsyDeathContainer_Alpha_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SapsyDeathContainer_Alpha.SapsyDeathContainer_Alpha_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASapsyDeathContainer_Alpha_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SapsyDeathContainer_Alpha_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SapsyDeathContainer_Alpha.SapsyDeathContainer_Alpha_C.ExecuteUbergraph_SapsyDeathContainer_Alpha
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASapsyDeathContainer_Alpha_C::ExecuteUbergraph_SapsyDeathContainer_Alpha(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SapsyDeathContainer_Alpha_C", "ExecuteUbergraph_SapsyDeathContainer_Alpha");

	Params::ASapsyDeathContainer_Alpha_C_ExecuteUbergraph_SapsyDeathContainer_Alpha_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


