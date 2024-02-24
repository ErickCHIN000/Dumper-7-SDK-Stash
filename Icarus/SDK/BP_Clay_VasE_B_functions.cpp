#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Clay_VasE_B.BP_Clay_Vase_B_C
// (Actor)

class UClass* ABP_Clay_Vase_B_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Clay_Vase_B_C");

	return Clss;
}


// BP_Clay_Vase_B_C BP_Clay_VasE_B.Default__BP_Clay_Vase_B_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Clay_Vase_B_C* ABP_Clay_Vase_B_C::GetDefaultObj()
{
	static class ABP_Clay_Vase_B_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Clay_Vase_B_C*>(ABP_Clay_Vase_B_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Clay_VasE_B.BP_Clay_Vase_B_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Clay_Vase_B_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Clay_Vase_B_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Clay_VasE_B.BP_Clay_Vase_B_C.ExecuteUbergraph_BP_Clay_Vase_B
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Clay_Vase_B_C::ExecuteUbergraph_BP_Clay_Vase_B(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Clay_Vase_B_C", "ExecuteUbergraph_BP_Clay_Vase_B");

	Params::ABP_Clay_Vase_B_C_ExecuteUbergraph_BP_Clay_Vase_B_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


