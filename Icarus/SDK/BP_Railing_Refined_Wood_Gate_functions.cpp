#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Railing_Refined_Wood_Gate.BP_Railing_Refined_Wood_Gate_C
// (Actor)

class UClass* ABP_Railing_Refined_Wood_Gate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Railing_Refined_Wood_Gate_C");

	return Clss;
}


// BP_Railing_Refined_Wood_Gate_C BP_Railing_Refined_Wood_Gate.Default__BP_Railing_Refined_Wood_Gate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Railing_Refined_Wood_Gate_C* ABP_Railing_Refined_Wood_Gate_C::GetDefaultObj()
{
	static class ABP_Railing_Refined_Wood_Gate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Railing_Refined_Wood_Gate_C*>(ABP_Railing_Refined_Wood_Gate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Railing_Refined_Wood_Gate.BP_Railing_Refined_Wood_Gate_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Railing_Refined_Wood_Gate_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Railing_Refined_Wood_Gate_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Railing_Refined_Wood_Gate.BP_Railing_Refined_Wood_Gate_C.ExecuteUbergraph_BP_Railing_Refined_Wood_Gate
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Railing_Refined_Wood_Gate_C::ExecuteUbergraph_BP_Railing_Refined_Wood_Gate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Railing_Refined_Wood_Gate_C", "ExecuteUbergraph_BP_Railing_Refined_Wood_Gate");

	Params::ABP_Railing_Refined_Wood_Gate_C_ExecuteUbergraph_BP_Railing_Refined_Wood_Gate_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


