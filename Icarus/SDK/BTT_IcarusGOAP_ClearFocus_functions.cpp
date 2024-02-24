#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTT_IcarusGOAP_ClearFocus.BTT_IcarusGOAP_ClearFocus_C
// (None)

class UClass* UBTT_IcarusGOAP_ClearFocus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTT_IcarusGOAP_ClearFocus_C");

	return Clss;
}


// BTT_IcarusGOAP_ClearFocus_C BTT_IcarusGOAP_ClearFocus.Default__BTT_IcarusGOAP_ClearFocus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTT_IcarusGOAP_ClearFocus_C* UBTT_IcarusGOAP_ClearFocus_C::GetDefaultObj()
{
	static class UBTT_IcarusGOAP_ClearFocus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTT_IcarusGOAP_ClearFocus_C*>(UBTT_IcarusGOAP_ClearFocus_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTT_IcarusGOAP_ClearFocus.BTT_IcarusGOAP_ClearFocus_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_IcarusGOAP_ClearFocus_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_IcarusGOAP_ClearFocus_C", "ReceiveExecuteAI");

	Params::UBTT_IcarusGOAP_ClearFocus_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_IcarusGOAP_ClearFocus.BTT_IcarusGOAP_ClearFocus_C.ExecuteUbergraph_BTT_IcarusGOAP_ClearFocus
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_IcarusGOAP_ClearFocus_C::ExecuteUbergraph_BTT_IcarusGOAP_ClearFocus(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_IcarusGOAP_ClearFocus_C", "ExecuteUbergraph_BTT_IcarusGOAP_ClearFocus");

	Params::UBTT_IcarusGOAP_ClearFocus_C_ExecuteUbergraph_BTT_IcarusGOAP_ClearFocus_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


