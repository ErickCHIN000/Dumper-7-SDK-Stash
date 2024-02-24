#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChurakaDeathContainer_Alpha.ChurakaDeathContainer_Alpha_C
// (Actor)

class UClass* AChurakaDeathContainer_Alpha_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChurakaDeathContainer_Alpha_C");

	return Clss;
}


// ChurakaDeathContainer_Alpha_C ChurakaDeathContainer_Alpha.Default__ChurakaDeathContainer_Alpha_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChurakaDeathContainer_Alpha_C* AChurakaDeathContainer_Alpha_C::GetDefaultObj()
{
	static class AChurakaDeathContainer_Alpha_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChurakaDeathContainer_Alpha_C*>(AChurakaDeathContainer_Alpha_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ChurakaDeathContainer_Alpha.ChurakaDeathContainer_Alpha_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AChurakaDeathContainer_Alpha_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChurakaDeathContainer_Alpha_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChurakaDeathContainer_Alpha.ChurakaDeathContainer_Alpha_C.ExecuteUbergraph_ChurakaDeathContainer_Alpha
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChurakaDeathContainer_Alpha_C::ExecuteUbergraph_ChurakaDeathContainer_Alpha(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChurakaDeathContainer_Alpha_C", "ExecuteUbergraph_ChurakaDeathContainer_Alpha");

	Params::AChurakaDeathContainer_Alpha_C_ExecuteUbergraph_ChurakaDeathContainer_Alpha_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


