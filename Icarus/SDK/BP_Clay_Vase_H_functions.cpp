#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Clay_Vase_H.BP_Clay_Vase_H_C
// (Actor)

class UClass* ABP_Clay_Vase_H_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Clay_Vase_H_C");

	return Clss;
}


// BP_Clay_Vase_H_C BP_Clay_Vase_H.Default__BP_Clay_Vase_H_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Clay_Vase_H_C* ABP_Clay_Vase_H_C::GetDefaultObj()
{
	static class ABP_Clay_Vase_H_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Clay_Vase_H_C*>(ABP_Clay_Vase_H_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Clay_Vase_H.BP_Clay_Vase_H_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Clay_Vase_H_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Clay_Vase_H_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Clay_Vase_H.BP_Clay_Vase_H_C.ExecuteUbergraph_BP_Clay_Vase_H
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Clay_Vase_H_C::ExecuteUbergraph_BP_Clay_Vase_H(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Clay_Vase_H_C", "ExecuteUbergraph_BP_Clay_Vase_H");

	Params::ABP_Clay_Vase_H_C_ExecuteUbergraph_BP_Clay_Vase_H_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


