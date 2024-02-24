#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTT_IcarusGOAP_FlipComplete.BTT_IcarusGOAP_FlipComplete_C
// (None)

class UClass* UBTT_IcarusGOAP_FlipComplete_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTT_IcarusGOAP_FlipComplete_C");

	return Clss;
}


// BTT_IcarusGOAP_FlipComplete_C BTT_IcarusGOAP_FlipComplete.Default__BTT_IcarusGOAP_FlipComplete_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTT_IcarusGOAP_FlipComplete_C* UBTT_IcarusGOAP_FlipComplete_C::GetDefaultObj()
{
	static class UBTT_IcarusGOAP_FlipComplete_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTT_IcarusGOAP_FlipComplete_C*>(UBTT_IcarusGOAP_FlipComplete_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTT_IcarusGOAP_FlipComplete.BTT_IcarusGOAP_FlipComplete_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_IcarusGOAP_FlipComplete_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_IcarusGOAP_FlipComplete_C", "ReceiveExecute");

	Params::UBTT_IcarusGOAP_FlipComplete_C_ReceiveExecute_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_IcarusGOAP_FlipComplete.BTT_IcarusGOAP_FlipComplete_C.ExecuteUbergraph_BTT_IcarusGOAP_FlipComplete
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_IcarusGOAP_FlipComplete_C::ExecuteUbergraph_BTT_IcarusGOAP_FlipComplete(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_IcarusGOAP_FlipComplete_C", "ExecuteUbergraph_BTT_IcarusGOAP_FlipComplete");

	Params::UBTT_IcarusGOAP_FlipComplete_C_ExecuteUbergraph_BTT_IcarusGOAP_FlipComplete_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


