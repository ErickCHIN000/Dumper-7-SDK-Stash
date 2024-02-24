#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTT_SetMountLastMoveResult.BTT_SetMountLastMoveResult_C
// (None)

class UClass* UBTT_SetMountLastMoveResult_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTT_SetMountLastMoveResult_C");

	return Clss;
}


// BTT_SetMountLastMoveResult_C BTT_SetMountLastMoveResult.Default__BTT_SetMountLastMoveResult_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTT_SetMountLastMoveResult_C* UBTT_SetMountLastMoveResult_C::GetDefaultObj()
{
	static class UBTT_SetMountLastMoveResult_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTT_SetMountLastMoveResult_C*>(UBTT_SetMountLastMoveResult_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTT_SetMountLastMoveResult.BTT_SetMountLastMoveResult_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_SetMountLastMoveResult_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_SetMountLastMoveResult_C", "ReceiveExecute");

	Params::UBTT_SetMountLastMoveResult_C_ReceiveExecute_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_SetMountLastMoveResult.BTT_SetMountLastMoveResult_C.ExecuteUbergraph_BTT_SetMountLastMoveResult
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_SetMountLastMoveResult_C::ExecuteUbergraph_BTT_SetMountLastMoveResult(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_SetMountLastMoveResult_C", "ExecuteUbergraph_BTT_SetMountLastMoveResult");

	Params::UBTT_SetMountLastMoveResult_C_ExecuteUbergraph_BTT_SetMountLastMoveResult_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


