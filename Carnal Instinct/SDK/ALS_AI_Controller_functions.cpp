#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ALS_AI_Controller.ALS_AI_Controller_C
// (Actor)

class UClass* AALS_AI_Controller_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALS_AI_Controller_C");

	return Clss;
}


// ALS_AI_Controller_C ALS_AI_Controller.Default__ALS_AI_Controller_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AALS_AI_Controller_C* AALS_AI_Controller_C::GetDefaultObj()
{
	static class AALS_AI_Controller_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AALS_AI_Controller_C*>(AALS_AI_Controller_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ALS_AI_Controller.ALS_AI_Controller_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       PossessedPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AALS_AI_Controller_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_AI_Controller_C", "ReceivePossess");

	Params::AALS_AI_Controller_C_ReceivePossess_Params Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ALS_AI_Controller.ALS_AI_Controller_C.ExecuteUbergraph_ALS_AI_Controller
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RunBehaviorTree_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       K2Node_Event_PossessedPawn                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AALS_AI_Controller_C::ExecuteUbergraph_ALS_AI_Controller(int32 EntryPoint, bool CallFunc_RunBehaviorTree_ReturnValue, class APawn* K2Node_Event_PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_AI_Controller_C", "ExecuteUbergraph_ALS_AI_Controller");

	Params::AALS_AI_Controller_C_ExecuteUbergraph_ALS_AI_Controller_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RunBehaviorTree_ReturnValue = CallFunc_RunBehaviorTree_ReturnValue;
	Parms.K2Node_Event_PossessedPawn = K2Node_Event_PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


