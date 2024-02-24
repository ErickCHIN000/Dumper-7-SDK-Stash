#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MountAIController.BP_MountAIController_C
// (Actor)

class UClass* ABP_MountAIController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MountAIController_C");

	return Clss;
}


// BP_MountAIController_C BP_MountAIController.Default__BP_MountAIController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MountAIController_C* ABP_MountAIController_C::GetDefaultObj()
{
	static class ABP_MountAIController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MountAIController_C*>(ABP_MountAIController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MountAIController.BP_MountAIController_C.ReceiveUnPossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       UnpossessedPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MountAIController_C::ReceiveUnPossess(class APawn* UnpossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MountAIController_C", "ReceiveUnPossess");

	Params::ABP_MountAIController_C_ReceiveUnPossess_Params Parms{};

	Parms.UnpossessedPawn = UnpossessedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MountAIController.BP_MountAIController_C.ExecuteUbergraph_BP_MountAIController
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_UnpossessedPawn                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MountAIController_C::ExecuteUbergraph_BP_MountAIController(int32 EntryPoint, class APawn* K2Node_Event_UnpossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MountAIController_C", "ExecuteUbergraph_BP_MountAIController");

	Params::ABP_MountAIController_C_ExecuteUbergraph_BP_MountAIController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_UnpossessedPawn = K2Node_Event_UnpossessedPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


