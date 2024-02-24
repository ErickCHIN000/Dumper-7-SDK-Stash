#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Condition_IsAbleToSpeak.Condition_IsAbleToSpeak_C
// (None)

class UClass* UCondition_IsAbleToSpeak_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Condition_IsAbleToSpeak_C");

	return Clss;
}


// Condition_IsAbleToSpeak_C Condition_IsAbleToSpeak.Default__Condition_IsAbleToSpeak_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCondition_IsAbleToSpeak_C* UCondition_IsAbleToSpeak_C::GetDefaultObj()
{
	static class UCondition_IsAbleToSpeak_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCondition_IsAbleToSpeak_C*>(UCondition_IsAbleToSpeak_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Condition_IsAbleToSpeak.Condition_IsAbleToSpeak_C.EvaluateCondition
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     OptionalContext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIDrone_PlayerCompanionParent_C>K2Node_DynamicCast_AsIDrone_Player_Companion_Parent              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakDialogComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCompanionInCombat_Res                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSpeakerClearToPlayDialog_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCondition_IsAbleToSpeak_C::EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IIDrone_PlayerCompanionParent_C> K2Node_DynamicCast_AsIDrone_Player_Companion_Parent, bool K2Node_DynamicCast_bSuccess1, class UOakDialogComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsCompanionInCombat_Res, bool CallFunc_IsSpeakerClearToPlayDialog_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Condition_IsAbleToSpeak_C", "EvaluateCondition");

	Params::UCondition_IsAbleToSpeak_C_EvaluateCondition_Params Parms{};

	Parms.Context = Context;
	Parms.OptionalContext = OptionalContext;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsIDrone_Player_Companion_Parent = K2Node_DynamicCast_AsIDrone_Player_Companion_Parent;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsCompanionInCombat_Res = CallFunc_IsCompanionInCombat_Res;
	Parms.CallFunc_IsSpeakerClearToPlayDialog_ReturnValue = CallFunc_IsSpeakerClearToPlayDialog_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


