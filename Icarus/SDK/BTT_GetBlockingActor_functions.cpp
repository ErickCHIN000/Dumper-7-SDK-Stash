#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTT_GetBlockingActor.BTT_GetBlockingActor_C
// (None)

class UClass* UBTT_GetBlockingActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTT_GetBlockingActor_C");

	return Clss;
}


// BTT_GetBlockingActor_C BTT_GetBlockingActor.Default__BTT_GetBlockingActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTT_GetBlockingActor_C* UBTT_GetBlockingActor_C::GetDefaultObj()
{
	static class UBTT_GetBlockingActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTT_GetBlockingActor_C*>(UBTT_GetBlockingActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTT_GetBlockingActor.BTT_GetBlockingActor_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_GetBlockingActor_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_GetBlockingActor_C", "ReceiveExecuteAI");

	Params::UBTT_GetBlockingActor_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_GetBlockingActor.BTT_GetBlockingActor_C.ExecuteUbergraph_BTT_GetBlockingActor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetBlockingDurableActor_BlockingActor                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBTT_GetBlockingActor_C::ExecuteUbergraph_BTT_GetBlockingActor(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class AActor* CallFunc_GetBlockingDurableActor_BlockingActor, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_GetBlockingActor_C", "ExecuteUbergraph_BTT_GetBlockingActor");

	Params::UBTT_GetBlockingActor_C_ExecuteUbergraph_BTT_GetBlockingActor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_GetBlockingDurableActor_BlockingActor = CallFunc_GetBlockingDurableActor_BlockingActor;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


