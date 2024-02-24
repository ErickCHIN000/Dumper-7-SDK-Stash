#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MaterialProcessor.BP_MaterialProcessor_C
// (Actor)

class UClass* ABP_MaterialProcessor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MaterialProcessor_C");

	return Clss;
}


// BP_MaterialProcessor_C BP_MaterialProcessor.Default__BP_MaterialProcessor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MaterialProcessor_C* ABP_MaterialProcessor_C::GetDefaultObj()
{
	static class ABP_MaterialProcessor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MaterialProcessor_C*>(ABP_MaterialProcessor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MaterialProcessor.BP_MaterialProcessor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_MaterialProcessor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MaterialProcessor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MaterialProcessor.BP_MaterialProcessor_C.ExecuteUbergraph_BP_MaterialProcessor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MaterialProcessor_C::ExecuteUbergraph_BP_MaterialProcessor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MaterialProcessor_C", "ExecuteUbergraph_BP_MaterialProcessor");

	Params::ABP_MaterialProcessor_C_ExecuteUbergraph_BP_MaterialProcessor_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


