#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Railing_Base.BP_Railing_Base_C
// (Actor)

class UClass* ABP_Railing_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Railing_Base_C");

	return Clss;
}


// BP_Railing_Base_C BP_Railing_Base.Default__BP_Railing_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Railing_Base_C* ABP_Railing_Base_C::GetDefaultObj()
{
	static class ABP_Railing_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Railing_Base_C*>(ABP_Railing_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Railing_Base.BP_Railing_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Railing_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Railing_Base_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Railing_Base.BP_Railing_Base_C.ExecuteUbergraph_BP_Railing_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Railing_Base_C::ExecuteUbergraph_BP_Railing_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Railing_Base_C", "ExecuteUbergraph_BP_Railing_Base");

	Params::ABP_Railing_Base_C_ExecuteUbergraph_BP_Railing_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

