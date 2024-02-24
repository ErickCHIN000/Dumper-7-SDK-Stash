#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_SetCHLuckyBuffer.CF_SetCHLuckyBuffer_C
// (None)

class UClass* UCF_SetCHLuckyBuffer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_SetCHLuckyBuffer_C");

	return Clss;
}


// CF_SetCHLuckyBuffer_C CF_SetCHLuckyBuffer.Default__CF_SetCHLuckyBuffer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_SetCHLuckyBuffer_C* UCF_SetCHLuckyBuffer_C::GetDefaultObj()
{
	static class UCF_SetCHLuckyBuffer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_SetCHLuckyBuffer_C*>(UCF_SetCHLuckyBuffer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_SetCHLuckyBuffer.CF_SetCHLuckyBuffer_C.Execute
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCF_SetCHLuckyBuffer_C::Execute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_SetCHLuckyBuffer_C", "Execute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_SetCHLuckyBuffer.CF_SetCHLuckyBuffer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCF_SetCHLuckyBuffer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_SetCHLuckyBuffer_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_SetCHLuckyBuffer.CF_SetCHLuckyBuffer_C.ExecuteUbergraph_CF_SetCHLuckyBuffer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerControllerSurvival*K2Node_DynamicCast_AsIcarus_Player_Controller_Survival           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIcarusCriticalHitComponent* CallFunc_GetCriticalHitComponent_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetLuckyBuffer_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_Controller_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerControllerSurvival*K2Node_DynamicCast_AsIcarus_Player_Controller_Survival_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIcarusCriticalHitComponent* CallFunc_GetCriticalHitComponent_ReturnValue_1                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_SetCHLuckyBuffer_C::ExecuteUbergraph_CF_SetCHLuckyBuffer(int32 EntryPoint, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_Controller, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess, class UIcarusCriticalHitComponent* CallFunc_GetCriticalHitComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetLuckyBuffer_ReturnValue, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_Controller_1, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival_1, bool K2Node_DynamicCast_bSuccess_1, class UIcarusCriticalHitComponent* CallFunc_GetCriticalHitComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_SetCHLuckyBuffer_C", "ExecuteUbergraph_CF_SetCHLuckyBuffer");

	Params::UCF_SetCHLuckyBuffer_C_ExecuteUbergraph_CF_SetCHLuckyBuffer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetIcarusPlayerController_Controller = CallFunc_GetIcarusPlayerController_Controller;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller_Survival = K2Node_DynamicCast_AsIcarus_Player_Controller_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCriticalHitComponent_ReturnValue = CallFunc_GetCriticalHitComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLuckyBuffer_ReturnValue = CallFunc_GetLuckyBuffer_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_Controller_1 = CallFunc_GetIcarusPlayerController_Controller_1;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller_Survival_1 = K2Node_DynamicCast_AsIcarus_Player_Controller_Survival_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCriticalHitComponent_ReturnValue_1 = CallFunc_GetCriticalHitComponent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


