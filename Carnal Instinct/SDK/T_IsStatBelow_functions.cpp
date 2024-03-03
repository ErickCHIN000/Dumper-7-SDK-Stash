#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass T_IsStatBelow.T_IsStatBelow_C
// (None)

class UClass* UT_IsStatBelow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("T_IsStatBelow_C");

	return Clss;
}


// T_IsStatBelow_C T_IsStatBelow.Default__T_IsStatBelow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UT_IsStatBelow_C* UT_IsStatBelow_C::GetDefaultObj()
{
	static class UT_IsStatBelow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UT_IsStatBelow_C*>(UT_IsStatBelow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function T_IsStatBelow.T_IsStatBelow_C.PerformConditionCheckAI
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UExtendedStatComponent_C*    L_StatComponent                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxValue_Value                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCurrentValue_CurrentValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UExtendedStatComponent_C*    CallFunc_GetExtendedStatComponent_Comp                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UT_IsStatBelow_C::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, class UExtendedStatComponent_C* L_StatComponent, float CallFunc_GetMaxValue_Value, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetCurrentValue_CurrentValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UExtendedStatComponent_C* CallFunc_GetExtendedStatComponent_Comp, bool CallFunc_Less_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("T_IsStatBelow_C", "PerformConditionCheckAI");

	Params::UT_IsStatBelow_C_PerformConditionCheckAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.L_StatComponent = L_StatComponent;
	Parms.CallFunc_GetMaxValue_Value = CallFunc_GetMaxValue_Value;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentValue_CurrentValue = CallFunc_GetCurrentValue_CurrentValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetExtendedStatComponent_Comp = CallFunc_GetExtendedStatComponent_Comp;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


