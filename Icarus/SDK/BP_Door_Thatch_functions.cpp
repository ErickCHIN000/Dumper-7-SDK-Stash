#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Door_Thatch.BP_Door_Thatch_C
// (Actor)

class UClass* ABP_Door_Thatch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Door_Thatch_C");

	return Clss;
}


// BP_Door_Thatch_C BP_Door_Thatch.Default__BP_Door_Thatch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Door_Thatch_C* ABP_Door_Thatch_C::GetDefaultObj()
{
	static class ABP_Door_Thatch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Door_Thatch_C*>(ABP_Door_Thatch_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Door_Thatch.BP_Door_Thatch_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Door_Thatch_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Door_Thatch_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Door_Thatch.BP_Door_Thatch_C.ExecuteUbergraph_BP_Door_Thatch
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Door_Thatch_C::ExecuteUbergraph_BP_Door_Thatch(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Door_Thatch_C", "ExecuteUbergraph_BP_Door_Thatch");

	Params::ABP_Door_Thatch_C_ExecuteUbergraph_BP_Door_Thatch_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


