#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Railing_Concrete.BP_Railing_Concrete_C
// (Actor)

class UClass* ABP_Railing_Concrete_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Railing_Concrete_C");

	return Clss;
}


// BP_Railing_Concrete_C BP_Railing_Concrete.Default__BP_Railing_Concrete_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Railing_Concrete_C* ABP_Railing_Concrete_C::GetDefaultObj()
{
	static class ABP_Railing_Concrete_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Railing_Concrete_C*>(ABP_Railing_Concrete_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Railing_Concrete.BP_Railing_Concrete_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Railing_Concrete_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Railing_Concrete_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Railing_Concrete.BP_Railing_Concrete_C.ExecuteUbergraph_BP_Railing_Concrete
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Railing_Concrete_C::ExecuteUbergraph_BP_Railing_Concrete(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Railing_Concrete_C", "ExecuteUbergraph_BP_Railing_Concrete");

	Params::ABP_Railing_Concrete_C_ExecuteUbergraph_BP_Railing_Concrete_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


