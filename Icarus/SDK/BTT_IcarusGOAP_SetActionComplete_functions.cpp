#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTT_IcarusGOAP_SetActionComplete.BTT_IcarusGOAP_SetActionComplete_C
// (None)

class UClass* UBTT_IcarusGOAP_SetActionComplete_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTT_IcarusGOAP_SetActionComplete_C");

	return Clss;
}


// BTT_IcarusGOAP_SetActionComplete_C BTT_IcarusGOAP_SetActionComplete.Default__BTT_IcarusGOAP_SetActionComplete_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTT_IcarusGOAP_SetActionComplete_C* UBTT_IcarusGOAP_SetActionComplete_C::GetDefaultObj()
{
	static class UBTT_IcarusGOAP_SetActionComplete_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTT_IcarusGOAP_SetActionComplete_C*>(UBTT_IcarusGOAP_SetActionComplete_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTT_IcarusGOAP_SetActionComplete.BTT_IcarusGOAP_SetActionComplete_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_IcarusGOAP_SetActionComplete_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_IcarusGOAP_SetActionComplete_C", "ReceiveExecute");

	Params::UBTT_IcarusGOAP_SetActionComplete_C_ReceiveExecute_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_IcarusGOAP_SetActionComplete.BTT_IcarusGOAP_SetActionComplete_C.ExecuteUbergraph_BTT_IcarusGOAP_SetActionComplete
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusNPCGOAPController*    K2Node_DynamicCast_AsIcarus_NPCGOAPController                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CompleteCurrentAction_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBTT_IcarusGOAP_SetActionComplete_C::ExecuteUbergraph_BTT_IcarusGOAP_SetActionComplete(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class AIcarusNPCGOAPController* K2Node_DynamicCast_AsIcarus_NPCGOAPController, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CompleteCurrentAction_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_IcarusGOAP_SetActionComplete_C", "ExecuteUbergraph_BTT_IcarusGOAP_SetActionComplete");

	Params::UBTT_IcarusGOAP_SetActionComplete_C_ExecuteUbergraph_BTT_IcarusGOAP_SetActionComplete_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_DynamicCast_AsIcarus_NPCGOAPController = K2Node_DynamicCast_AsIcarus_NPCGOAPController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CompleteCurrentAction_ReturnValue = CallFunc_CompleteCurrentAction_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


