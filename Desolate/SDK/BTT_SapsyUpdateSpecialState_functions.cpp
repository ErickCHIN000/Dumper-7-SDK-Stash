#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTT_SapsyUpdateSpecialState.BTT_SapsyUpdateSpecialState_C
// (None)

class UClass* UBTT_SapsyUpdateSpecialState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTT_SapsyUpdateSpecialState_C");

	return Clss;
}


// BTT_SapsyUpdateSpecialState_C BTT_SapsyUpdateSpecialState.Default__BTT_SapsyUpdateSpecialState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTT_SapsyUpdateSpecialState_C* UBTT_SapsyUpdateSpecialState_C::GetDefaultObj()
{
	static class UBTT_SapsyUpdateSpecialState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTT_SapsyUpdateSpecialState_C*>(UBTT_SapsyUpdateSpecialState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTT_SapsyUpdateSpecialState.BTT_SapsyUpdateSpecialState_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_SapsyUpdateSpecialState_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_SapsyUpdateSpecialState_C", "ReceiveExecute");

	Params::UBTT_SapsyUpdateSpecialState_C_ReceiveExecute_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_SapsyUpdateSpecialState.BTT_SapsyUpdateSpecialState_C.ExecuteUbergraph_BTT_SapsyUpdateSpecialState
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_DynamicCast_AsAIController                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASapsy_Character_C*          K2Node_DynamicCast_AsSapsy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBTT_SapsyUpdateSpecialState_C::ExecuteUbergraph_BTT_SapsyUpdateSpecialState(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class AAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ASapsy_Character_C* K2Node_DynamicCast_AsSapsy_Character, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_SapsyUpdateSpecialState_C", "ExecuteUbergraph_BTT_SapsyUpdateSpecialState");

	Params::UBTT_SapsyUpdateSpecialState_C_ExecuteUbergraph_BTT_SapsyUpdateSpecialState_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_DynamicCast_AsAIController = K2Node_DynamicCast_AsAIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsSapsy_Character = K2Node_DynamicCast_AsSapsy_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


