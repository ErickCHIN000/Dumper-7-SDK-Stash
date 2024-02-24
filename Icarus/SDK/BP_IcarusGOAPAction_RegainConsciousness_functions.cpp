#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusGOAPAction_RegainConsciousness.BP_IcarusGOAPAction_RegainConsciousness_C
// (None)

class UClass* UBP_IcarusGOAPAction_RegainConsciousness_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusGOAPAction_RegainConsciousness_C");

	return Clss;
}


// BP_IcarusGOAPAction_RegainConsciousness_C BP_IcarusGOAPAction_RegainConsciousness.Default__BP_IcarusGOAPAction_RegainConsciousness_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusGOAPAction_RegainConsciousness_C* UBP_IcarusGOAPAction_RegainConsciousness_C::GetDefaultObj()
{
	static class UBP_IcarusGOAPAction_RegainConsciousness_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusGOAPAction_RegainConsciousness_C*>(UBP_IcarusGOAPAction_RegainConsciousness_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusGOAPAction_RegainConsciousness.BP_IcarusGOAPAction_RegainConsciousness_C.ActionReset
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Interrupted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ActionReset_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_RegainConsciousness_C::ActionReset(bool Interrupted, bool CallFunc_ActionReset_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_RegainConsciousness_C", "ActionReset");

	Params::UBP_IcarusGOAPAction_RegainConsciousness_C_ActionReset_Params Parms{};

	Parms.Interrupted = Interrupted;
	Parms.CallFunc_ActionReset_ReturnValue = CallFunc_ActionReset_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusGOAPAction_RegainConsciousness.BP_IcarusGOAPAction_RegainConsciousness_C.ResetSightPerception
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*               Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAIPerceptionComponent*      CallFunc_GetAIPerceptionComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_IcarusGOAPAction_RegainConsciousness_C::ResetSightPerception(class AAIController* Target, bool CallFunc_IsValid_ReturnValue, class UAIPerceptionComponent* CallFunc_GetAIPerceptionComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_RegainConsciousness_C", "ResetSightPerception");

	Params::UBP_IcarusGOAPAction_RegainConsciousness_C_ResetSightPerception_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAIPerceptionComponent_ReturnValue = CallFunc_GetAIPerceptionComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusGOAPAction_RegainConsciousness.BP_IcarusGOAPAction_RegainConsciousness_C.GOAPAnimNotify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GOAPAnimNotify_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAIPerceptionComponent*      CallFunc_GetAIPerceptionComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_RegainConsciousness_C::GOAPAnimNotify(const class FString& NotifyName, class AIcarusNPCGOAPController* Controller, bool CallFunc_GOAPAnimNotify_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAIPerceptionComponent* CallFunc_GetAIPerceptionComponent_ReturnValue, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_RegainConsciousness_C", "GOAPAnimNotify");

	Params::UBP_IcarusGOAPAction_RegainConsciousness_C_GOAPAnimNotify_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Controller = Controller;
	Parms.CallFunc_GOAPAnimNotify_ReturnValue = CallFunc_GOAPAnimNotify_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAIPerceptionComponent_ReturnValue = CallFunc_GetAIPerceptionComponent_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusGOAPAction_RegainConsciousness.BP_IcarusGOAPAction_RegainConsciousness_C.ExecutionComplete
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ExecutionComplete_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateMotivationValue_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FModifier                   K2Node_MakeStruct_Modifier                                       (NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddModifierState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_IcarusGOAPAction_RegainConsciousness_C::ExecutionComplete(class AIcarusNPCGOAPController* Controller, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ExecutionComplete_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_UpdateMotivationValue_ReturnValue, const struct FModifier& K2Node_MakeStruct_Modifier, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_AddModifierState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_RegainConsciousness_C", "ExecutionComplete");

	Params::UBP_IcarusGOAPAction_RegainConsciousness_C_ExecutionComplete_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ExecutionComplete_ReturnValue = CallFunc_ExecutionComplete_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_UpdateMotivationValue_ReturnValue = CallFunc_UpdateMotivationValue_ReturnValue;
	Parms.K2Node_MakeStruct_Modifier = K2Node_MakeStruct_Modifier;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_AddModifierState_ReturnValue = CallFunc_AddModifierState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


