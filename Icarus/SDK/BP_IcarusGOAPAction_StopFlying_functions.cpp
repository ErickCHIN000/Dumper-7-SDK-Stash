#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusGOAPAction_StopFlying.BP_IcarusGOAPAction_StopFlying_C
// (None)

class UClass* UBP_IcarusGOAPAction_StopFlying_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusGOAPAction_StopFlying_C");

	return Clss;
}


// BP_IcarusGOAPAction_StopFlying_C BP_IcarusGOAPAction_StopFlying.Default__BP_IcarusGOAPAction_StopFlying_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusGOAPAction_StopFlying_C* UBP_IcarusGOAPAction_StopFlying_C::GetDefaultObj()
{
	static class UBP_IcarusGOAPAction_StopFlying_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusGOAPAction_StopFlying_C*>(UBP_IcarusGOAPAction_StopFlying_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusGOAPAction_StopFlying.BP_IcarusGOAPAction_StopFlying_C.IsInRange
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInRange_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_StopFlying_C::IsInRange(class AIcarusNPCGOAPController* Controller, bool CallFunc_IsInRange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_StopFlying_C", "IsInRange");

	Params::UBP_IcarusGOAPAction_StopFlying_C_IsInRange_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_IsInRange_ReturnValue = CallFunc_IsInRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusGOAPAction_StopFlying.BP_IcarusGOAPAction_StopFlying_C.CheckContextualPreconditions
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckContextualPreconditions_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_StopFlying_C::CheckContextualPreconditions(class AIcarusNPCGOAPController* Controller, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_CheckContextualPreconditions_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_StopFlying_C", "CheckContextualPreconditions");

	Params::UBP_IcarusGOAPAction_StopFlying_C_CheckContextualPreconditions_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_CheckContextualPreconditions_ReturnValue = CallFunc_CheckContextualPreconditions_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter = K2Node_DynamicCast_AsCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


