#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_FragmentRain.Ability_FragmentRain_C
// (None)

class UClass* UAbility_FragmentRain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_FragmentRain_C");

	return Clss;
}


// Ability_FragmentRain_C Ability_FragmentRain.Default__Ability_FragmentRain_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_FragmentRain_C* UAbility_FragmentRain_C::GetDefaultObj()
{
	static class UAbility_FragmentRain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_FragmentRain_C*>(UAbility_FragmentRain_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_FragmentRain.Ability_FragmentRain_C.FragmentRain_GetTargetExternal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      FragmentRainTarget                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_FragmentRain_GetTarget_FragmentRainTarget               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FragmentRain_GetTarget_Res                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbility_FragmentRain_C::FragmentRain_GetTargetExternal(class AActor** FragmentRainTarget, bool* Res, class AActor* CallFunc_FragmentRain_GetTarget_FragmentRainTarget, bool CallFunc_FragmentRain_GetTarget_Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_FragmentRain_C", "FragmentRain_GetTargetExternal");

	Params::UAbility_FragmentRain_C_FragmentRain_GetTargetExternal_Params Parms{};

	Parms.CallFunc_FragmentRain_GetTarget_FragmentRainTarget = CallFunc_FragmentRain_GetTarget_FragmentRainTarget;
	Parms.CallFunc_FragmentRain_GetTarget_Res = CallFunc_FragmentRain_GetTarget_Res;

	UObject::ProcessEvent(Func, &Parms);

	if (FragmentRainTarget != nullptr)
		*FragmentRainTarget = Parms.FragmentRainTarget;

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Ability_FragmentRain.Ability_FragmentRain_C.FragmentRain_CleanTargetList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_FragmentRain_C::FragmentRain_CleanTargetList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_FragmentRain_C", "FragmentRain_CleanTargetList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_FragmentRain.Ability_FragmentRain_C.FragmentRain_GetTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      FragmentRainTarget                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      LocalTarget                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_FragmentRain_GetTarget_FragmentRainTarget               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FragmentRain_GetTarget_Res                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FragmentRain_GenerateTargetList_Res                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbility_FragmentRain_C::FragmentRain_GetTarget(class AActor** FragmentRainTarget, bool* Res, class AActor* LocalTarget, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_FragmentRain_GetTarget_FragmentRainTarget, bool CallFunc_FragmentRain_GetTarget_Res, class AActor* CallFunc_Array_Get_Item, bool CallFunc_FragmentRain_GenerateTargetList_Res, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_FragmentRain_C", "FragmentRain_GetTarget");

	Params::UAbility_FragmentRain_C_FragmentRain_GetTarget_Params Parms{};

	Parms.LocalTarget = LocalTarget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FragmentRain_GetTarget_FragmentRainTarget = CallFunc_FragmentRain_GetTarget_FragmentRainTarget;
	Parms.CallFunc_FragmentRain_GetTarget_Res = CallFunc_FragmentRain_GetTarget_Res;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_FragmentRain_GenerateTargetList_Res = CallFunc_FragmentRain_GenerateTargetList_Res;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FragmentRainTarget != nullptr)
		*FragmentRainTarget = Parms.FragmentRainTarget;

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Ability_FragmentRain.Ability_FragmentRain_C.FragmentRain_GenerateTargetList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_RunEnvQueryForAllActors_ResultActors                    (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_RunEnvQueryForAllActors_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbility_FragmentRain_C::FragmentRain_GenerateTargetList(bool* Res, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetAbilityOwner_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_FragmentRain_C", "FragmentRain_GenerateTargetList");

	Params::UAbility_FragmentRain_C_FragmentRain_GenerateTargetList_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_RunEnvQueryForAllActors_ResultActors = CallFunc_RunEnvQueryForAllActors_ResultActors;
	Parms.CallFunc_RunEnvQueryForAllActors_ReturnValue = CallFunc_RunEnvQueryForAllActors_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}

}


