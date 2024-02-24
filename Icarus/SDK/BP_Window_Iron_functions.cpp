#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Window_Iron.BP_Window_Iron_C
// (Actor)

class UClass* ABP_Window_Iron_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Window_Iron_C");

	return Clss;
}


// BP_Window_Iron_C BP_Window_Iron.Default__BP_Window_Iron_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Window_Iron_C* ABP_Window_Iron_C::GetDefaultObj()
{
	static class ABP_Window_Iron_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Window_Iron_C*>(ABP_Window_Iron_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Window_Iron.BP_Window_Iron_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Window_Iron_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Window_Iron_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Window_Iron.BP_Window_Iron_C.ExecuteUbergraph_BP_Window_Iron
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Window_Iron_C::ExecuteUbergraph_BP_Window_Iron(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Window_Iron_C", "ExecuteUbergraph_BP_Window_Iron");

	Params::ABP_Window_Iron_C_ExecuteUbergraph_BP_Window_Iron_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


