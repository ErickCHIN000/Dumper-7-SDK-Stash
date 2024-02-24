#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Clay_Vase_E.BP_Clay_Vase_E_C
// (Actor)

class UClass* ABP_Clay_Vase_E_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Clay_Vase_E_C");

	return Clss;
}


// BP_Clay_Vase_E_C BP_Clay_Vase_E.Default__BP_Clay_Vase_E_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Clay_Vase_E_C* ABP_Clay_Vase_E_C::GetDefaultObj()
{
	static class ABP_Clay_Vase_E_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Clay_Vase_E_C*>(ABP_Clay_Vase_E_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Clay_Vase_E.BP_Clay_Vase_E_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Clay_Vase_E_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Clay_Vase_E_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Clay_Vase_E.BP_Clay_Vase_E_C.ExecuteUbergraph_BP_Clay_Vase_E
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Clay_Vase_E_C::ExecuteUbergraph_BP_Clay_Vase_E(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Clay_Vase_E_C", "ExecuteUbergraph_BP_Clay_Vase_E");

	Params::ABP_Clay_Vase_E_C_ExecuteUbergraph_BP_Clay_Vase_E_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


