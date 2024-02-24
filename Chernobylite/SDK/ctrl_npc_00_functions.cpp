#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ctrl_npc_00.ctrl_npc_00_C
// (Actor)

class UClass* ACtrl_npc_00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ctrl_npc_00_C");

	return Clss;
}


// ctrl_npc_00_C ctrl_npc_00.Default__ctrl_npc_00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACtrl_npc_00_C* ACtrl_npc_00_C::GetDefaultObj()
{
	static class ACtrl_npc_00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACtrl_npc_00_C*>(ACtrl_npc_00_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ctrl_npc_00.ctrl_npc_00_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ACtrl_npc_00_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ctrl_npc_00_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ctrl_npc_00.ctrl_npc_00_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       PossessedPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACtrl_npc_00_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ctrl_npc_00_C", "ReceivePossess");

	Params::ACtrl_npc_00_C_ReceivePossess_Params Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ctrl_npc_00.ctrl_npc_00_C.ExecuteUbergraph_ctrl_npc_00
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RunBehaviorTree_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       K2Node_Event_PossessedPawn                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACtrl_npc_00_C::ExecuteUbergraph_ctrl_npc_00(int32 EntryPoint, bool CallFunc_RunBehaviorTree_ReturnValue, class APawn* K2Node_Event_PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ctrl_npc_00_C", "ExecuteUbergraph_ctrl_npc_00");

	Params::ACtrl_npc_00_C_ExecuteUbergraph_ctrl_npc_00_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RunBehaviorTree_ReturnValue = CallFunc_RunBehaviorTree_ReturnValue;
	Parms.K2Node_Event_PossessedPawn = K2Node_Event_PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


