#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Window_Basic_Glass.BP_Window_Basic_Glass_C
// (Actor)

class UClass* ABP_Window_Basic_Glass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Window_Basic_Glass_C");

	return Clss;
}


// BP_Window_Basic_Glass_C BP_Window_Basic_Glass.Default__BP_Window_Basic_Glass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Window_Basic_Glass_C* ABP_Window_Basic_Glass_C::GetDefaultObj()
{
	static class ABP_Window_Basic_Glass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Window_Basic_Glass_C*>(ABP_Window_Basic_Glass_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Window_Basic_Glass.BP_Window_Basic_Glass_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Window_Basic_Glass_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Window_Basic_Glass_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Window_Basic_Glass.BP_Window_Basic_Glass_C.ExecuteUbergraph_BP_Window_Basic_Glass
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Window_Basic_Glass_C::ExecuteUbergraph_BP_Window_Basic_Glass(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Window_Basic_Glass_C", "ExecuteUbergraph_BP_Window_Basic_Glass");

	Params::ABP_Window_Basic_Glass_C_ExecuteUbergraph_BP_Window_Basic_Glass_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


