#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Condition_Amulet_IgnoreAmuletBaseName.Condition_Amulet_IgnoreAmuletBaseName_C
// (None)

class UClass* UCondition_Amulet_IgnoreAmuletBaseName_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Condition_Amulet_IgnoreAmuletBaseName_C");

	return Clss;
}


// Condition_Amulet_IgnoreAmuletBaseName_C Condition_Amulet_IgnoreAmuletBaseName.Default__Condition_Amulet_IgnoreAmuletBaseName_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCondition_Amulet_IgnoreAmuletBaseName_C* UCondition_Amulet_IgnoreAmuletBaseName_C::GetDefaultObj()
{
	static class UCondition_Amulet_IgnoreAmuletBaseName_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCondition_Amulet_IgnoreAmuletBaseName_C*>(UCondition_Amulet_IgnoreAmuletBaseName_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Condition_Amulet_IgnoreAmuletBaseName.Condition_Amulet_IgnoreAmuletBaseName_C.EvaluateCondition
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     OptionalContext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ABPClass_Amulet_C*           K2Node_DynamicCast_AsBPClass_Amulet                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCondition_Amulet_IgnoreAmuletBaseName_C::EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class ABPClass_Amulet_C* K2Node_DynamicCast_AsBPClass_Amulet, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Condition_Amulet_IgnoreAmuletBaseName_C", "EvaluateCondition");

	Params::UCondition_Amulet_IgnoreAmuletBaseName_C_EvaluateCondition_Params Parms{};

	Parms.Context = Context;
	Parms.OptionalContext = OptionalContext;
	Parms.K2Node_DynamicCast_AsBPClass_Amulet = K2Node_DynamicCast_AsBPClass_Amulet;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


