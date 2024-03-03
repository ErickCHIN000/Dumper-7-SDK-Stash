#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SplineNPC_Controller.BP_SplineNPC_Controller_C
// (Actor)

class UClass* ABP_SplineNPC_Controller_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SplineNPC_Controller_C");

	return Clss;
}


// BP_SplineNPC_Controller_C BP_SplineNPC_Controller.Default__BP_SplineNPC_Controller_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SplineNPC_Controller_C* ABP_SplineNPC_Controller_C::GetDefaultObj()
{
	static class ABP_SplineNPC_Controller_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SplineNPC_Controller_C*>(ABP_SplineNPC_Controller_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SplineNPC_Controller.BP_SplineNPC_Controller_C.EventRunBT
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SplineNPC_Controller_C::EventRunBT()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SplineNPC_Controller_C", "EventRunBT");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SplineNPC_Controller.BP_SplineNPC_Controller_C.ExecuteUbergraph_BP_SplineNPC_Controller
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RunBehaviorTree_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SplineNPC_Controller_C::ExecuteUbergraph_BP_SplineNPC_Controller(int32 EntryPoint, bool CallFunc_RunBehaviorTree_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SplineNPC_Controller_C", "ExecuteUbergraph_BP_SplineNPC_Controller");

	Params::ABP_SplineNPC_Controller_C_ExecuteUbergraph_BP_SplineNPC_Controller_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RunBehaviorTree_ReturnValue = CallFunc_RunBehaviorTree_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


