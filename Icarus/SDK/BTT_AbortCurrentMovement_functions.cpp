#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTT_AbortCurrentMovement.BTT_AbortCurrentMovement_C
// (None)

class UClass* UBTT_AbortCurrentMovement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTT_AbortCurrentMovement_C");

	return Clss;
}


// BTT_AbortCurrentMovement_C BTT_AbortCurrentMovement.Default__BTT_AbortCurrentMovement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTT_AbortCurrentMovement_C* UBTT_AbortCurrentMovement_C::GetDefaultObj()
{
	static class UBTT_AbortCurrentMovement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTT_AbortCurrentMovement_C*>(UBTT_AbortCurrentMovement_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTT_AbortCurrentMovement.BTT_AbortCurrentMovement_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_AbortCurrentMovement_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_AbortCurrentMovement_C", "ReceiveExecuteAI");

	Params::UBTT_AbortCurrentMovement_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_AbortCurrentMovement.BTT_AbortCurrentMovement_C.ExecuteUbergraph_BTT_AbortCurrentMovement
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_AbortCurrentMovement_C::ExecuteUbergraph_BTT_AbortCurrentMovement(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_AbortCurrentMovement_C", "ExecuteUbergraph_BTT_AbortCurrentMovement");

	Params::UBTT_AbortCurrentMovement_C_ExecuteUbergraph_BTT_AbortCurrentMovement_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


