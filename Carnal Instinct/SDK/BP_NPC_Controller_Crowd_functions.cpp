#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NPC_Controller_Crowd.BP_NPC_Controller_Crowd_C
// (Actor)

class UClass* ABP_NPC_Controller_Crowd_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NPC_Controller_Crowd_C");

	return Clss;
}


// BP_NPC_Controller_Crowd_C BP_NPC_Controller_Crowd.Default__BP_NPC_Controller_Crowd_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_NPC_Controller_Crowd_C* ABP_NPC_Controller_Crowd_C::GetDefaultObj()
{
	static class ABP_NPC_Controller_Crowd_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_NPC_Controller_Crowd_C*>(ABP_NPC_Controller_Crowd_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_NPC_Controller_Crowd.BP_NPC_Controller_Crowd_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_NPC_Controller_Crowd_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_Controller_Crowd_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NPC_Controller_Crowd.BP_NPC_Controller_Crowd_C.ExecuteUbergraph_BP_NPC_Controller_Crowd
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RunBehaviorTree_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_NPC_Controller_Crowd_C::ExecuteUbergraph_BP_NPC_Controller_Crowd(int32 EntryPoint, bool CallFunc_RunBehaviorTree_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_Controller_Crowd_C", "ExecuteUbergraph_BP_NPC_Controller_Crowd");

	Params::ABP_NPC_Controller_Crowd_C_ExecuteUbergraph_BP_NPC_Controller_Crowd_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RunBehaviorTree_ReturnValue = CallFunc_RunBehaviorTree_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


