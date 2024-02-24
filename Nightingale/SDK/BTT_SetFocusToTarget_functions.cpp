#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTT_SetFocusToTarget.BTT_SetFocusToTarget_C
// (None)

class UClass* UBTT_SetFocusToTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTT_SetFocusToTarget_C");

	return Clss;
}


// BTT_SetFocusToTarget_C BTT_SetFocusToTarget.Default__BTT_SetFocusToTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTT_SetFocusToTarget_C* UBTT_SetFocusToTarget_C::GetDefaultObj()
{
	static class UBTT_SetFocusToTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTT_SetFocusToTarget_C*>(UBTT_SetFocusToTarget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTT_SetFocusToTarget.BTT_SetFocusToTarget_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_SetFocusToTarget_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_SetFocusToTarget_C", "ReceiveExecuteAI");

	Params::UBTT_SetFocusToTarget_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_SetFocusToTarget.BTT_SetFocusToTarget_C.ExecuteUbergraph_BTT_SetFocusToTarget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetBlackboardValueAsActor_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_SetFocusToTarget_C::ExecuteUbergraph_BTT_SetFocusToTarget(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_SetFocusToTarget_C", "ExecuteUbergraph_BTT_SetFocusToTarget");

	Params::UBTT_SetFocusToTarget_C_ExecuteUbergraph_BTT_SetFocusToTarget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_GetBlackboardValueAsActor_ReturnValue = CallFunc_GetBlackboardValueAsActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


