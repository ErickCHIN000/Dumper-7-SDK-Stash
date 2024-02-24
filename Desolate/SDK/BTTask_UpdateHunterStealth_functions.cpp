#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTTask_UpdateHunterStealth.BTTask_UpdateHunterStealth_C
// (None)

class UClass* UBTTask_UpdateHunterStealth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_UpdateHunterStealth_C");

	return Clss;
}


// BTTask_UpdateHunterStealth_C BTTask_UpdateHunterStealth.Default__BTTask_UpdateHunterStealth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTTask_UpdateHunterStealth_C* UBTTask_UpdateHunterStealth_C::GetDefaultObj()
{
	static class UBTTask_UpdateHunterStealth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_UpdateHunterStealth_C*>(UBTTask_UpdateHunterStealth_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTTask_UpdateHunterStealth.BTTask_UpdateHunterStealth_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_UpdateHunterStealth_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_UpdateHunterStealth_C", "ReceiveExecute");

	Params::UBTTask_UpdateHunterStealth_C_ReceiveExecute_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_UpdateHunterStealth.BTTask_UpdateHunterStealth_C.ExecuteUbergraph_BTTask_UpdateHunterStealth
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_DynamicCast_AsAIController                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHunter_Character_C*         K2Node_DynamicCast_AsHunter_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBTTask_UpdateHunterStealth_C::ExecuteUbergraph_BTTask_UpdateHunterStealth(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class AAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AHunter_Character_C* K2Node_DynamicCast_AsHunter_Character, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_UpdateHunterStealth_C", "ExecuteUbergraph_BTTask_UpdateHunterStealth");

	Params::UBTTask_UpdateHunterStealth_C_ExecuteUbergraph_BTTask_UpdateHunterStealth_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_DynamicCast_AsAIController = K2Node_DynamicCast_AsAIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsHunter_Character = K2Node_DynamicCast_AsHunter_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


