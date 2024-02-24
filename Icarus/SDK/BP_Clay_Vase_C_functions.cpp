#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Clay_Vase_C.BP_Clay_Vase_C_C
// (Actor)

class UClass* ABP_Clay_Vase_C_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Clay_Vase_C_C");

	return Clss;
}


// BP_Clay_Vase_C_C BP_Clay_Vase_C.Default__BP_Clay_Vase_C_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Clay_Vase_C_C* ABP_Clay_Vase_C_C::GetDefaultObj()
{
	static class ABP_Clay_Vase_C_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Clay_Vase_C_C*>(ABP_Clay_Vase_C_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Clay_Vase_C.BP_Clay_Vase_C_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Clay_Vase_C_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Clay_Vase_C_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Clay_Vase_C.BP_Clay_Vase_C_C.ExecuteUbergraph_BP_Clay_Vase_C
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Clay_Vase_C_C::ExecuteUbergraph_BP_Clay_Vase_C(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Clay_Vase_C_C", "ExecuteUbergraph_BP_Clay_Vase_C");

	Params::ABP_Clay_Vase_C_C_ExecuteUbergraph_BP_Clay_Vase_C_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


