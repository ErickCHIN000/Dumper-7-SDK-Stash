#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTD_IsAtOrAboveRunSpeed.BTD_IsAtOrAboveRunSpeed_C
// (None)

class UClass* UBTD_IsAtOrAboveRunSpeed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTD_IsAtOrAboveRunSpeed_C");

	return Clss;
}


// BTD_IsAtOrAboveRunSpeed_C BTD_IsAtOrAboveRunSpeed.Default__BTD_IsAtOrAboveRunSpeed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTD_IsAtOrAboveRunSpeed_C* UBTD_IsAtOrAboveRunSpeed_C::GetDefaultObj()
{
	static class UBTD_IsAtOrAboveRunSpeed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTD_IsAtOrAboveRunSpeed_C*>(UBTD_IsAtOrAboveRunSpeed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTD_IsAtOrAboveRunSpeed.BTD_IsAtOrAboveRunSpeed_C.PerformConditionCheckAI
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXAICharacter*             K2Node_DynamicCast_AsNWXAICharacter                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsNearOrAboveRunSpeed_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBTD_IsAtOrAboveRunSpeed_C::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, class ANWXAICharacter* K2Node_DynamicCast_AsNWXAICharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetIsNearOrAboveRunSpeed_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTD_IsAtOrAboveRunSpeed_C", "PerformConditionCheckAI");

	Params::UBTD_IsAtOrAboveRunSpeed_C_PerformConditionCheckAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.K2Node_DynamicCast_AsNWXAICharacter = K2Node_DynamicCast_AsNWXAICharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetIsNearOrAboveRunSpeed_ReturnValue = CallFunc_GetIsNearOrAboveRunSpeed_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


