#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QuackerDeathContainer_Alpha.QuackerDeathContainer_Alpha_C
// (Actor)

class UClass* AQuackerDeathContainer_Alpha_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuackerDeathContainer_Alpha_C");

	return Clss;
}


// QuackerDeathContainer_Alpha_C QuackerDeathContainer_Alpha.Default__QuackerDeathContainer_Alpha_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AQuackerDeathContainer_Alpha_C* AQuackerDeathContainer_Alpha_C::GetDefaultObj()
{
	static class AQuackerDeathContainer_Alpha_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AQuackerDeathContainer_Alpha_C*>(AQuackerDeathContainer_Alpha_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QuackerDeathContainer_Alpha.QuackerDeathContainer_Alpha_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AQuackerDeathContainer_Alpha_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuackerDeathContainer_Alpha_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuackerDeathContainer_Alpha.QuackerDeathContainer_Alpha_C.ExecuteUbergraph_QuackerDeathContainer_Alpha
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuackerDeathContainer_Alpha_C::ExecuteUbergraph_QuackerDeathContainer_Alpha(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuackerDeathContainer_Alpha_C", "ExecuteUbergraph_QuackerDeathContainer_Alpha");

	Params::AQuackerDeathContainer_Alpha_C_ExecuteUbergraph_QuackerDeathContainer_Alpha_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


