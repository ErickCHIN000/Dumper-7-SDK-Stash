#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FactionBoss_Controller.BP_FactionBoss_Controller_C
// (Actor)

class UClass* ABP_FactionBoss_Controller_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FactionBoss_Controller_C");

	return Clss;
}


// BP_FactionBoss_Controller_C BP_FactionBoss_Controller.Default__BP_FactionBoss_Controller_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FactionBoss_Controller_C* ABP_FactionBoss_Controller_C::GetDefaultObj()
{
	static class ABP_FactionBoss_Controller_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FactionBoss_Controller_C*>(ABP_FactionBoss_Controller_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FactionBoss_Controller.BP_FactionBoss_Controller_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_FactionBoss_Controller_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FactionBoss_Controller_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FactionBoss_Controller.BP_FactionBoss_Controller_C.ExecuteUbergraph_BP_FactionBoss_Controller
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RunBehaviorTree_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_UseBlackboard_BlackboardComponent                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UseBlackboard_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FactionBoss_Controller_C::ExecuteUbergraph_BP_FactionBoss_Controller(int32 EntryPoint, bool CallFunc_RunBehaviorTree_ReturnValue, class UBlackboardComponent* CallFunc_UseBlackboard_BlackboardComponent, bool CallFunc_UseBlackboard_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FactionBoss_Controller_C", "ExecuteUbergraph_BP_FactionBoss_Controller");

	Params::ABP_FactionBoss_Controller_C_ExecuteUbergraph_BP_FactionBoss_Controller_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RunBehaviorTree_ReturnValue = CallFunc_RunBehaviorTree_ReturnValue;
	Parms.CallFunc_UseBlackboard_BlackboardComponent = CallFunc_UseBlackboard_BlackboardComponent;
	Parms.CallFunc_UseBlackboard_ReturnValue = CallFunc_UseBlackboard_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


