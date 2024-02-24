#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShieldAug_PowerNap.ShieldAug_PowerNap_C
// (None)

class UClass* UShieldAug_PowerNap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShieldAug_PowerNap_C");

	return Clss;
}


// ShieldAug_PowerNap_C ShieldAug_PowerNap.Default__ShieldAug_PowerNap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShieldAug_PowerNap_C* UShieldAug_PowerNap_C::GetDefaultObj()
{
	static class UShieldAug_PowerNap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShieldAug_PowerNap_C*>(UShieldAug_PowerNap_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShieldAug_PowerNap.ShieldAug_PowerNap_C.K2_OnShieldUnequipped
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShield*                     Shield                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter*               Equipper                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAugmentData                StackData                                                        (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)

void UShieldAug_PowerNap_C::K2_OnShieldUnequipped(class AShield* Shield, class AOakCharacter* Equipper, struct FAugmentData& StackData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShieldAug_PowerNap_C", "K2_OnShieldUnequipped");

	Params::UShieldAug_PowerNap_C_K2_OnShieldUnequipped_Params Parms{};

	Parms.Shield = Shield;
	Parms.Equipper = Equipper;
	Parms.StackData = StackData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShieldAug_PowerNap.ShieldAug_PowerNap_C.K2_OnShieldNotFilled
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShield*                     Shield                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameResourcePoolReference  ResourcePool                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
// struct FAugmentData                StackData                                                        (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)

void UShieldAug_PowerNap_C::K2_OnShieldNotFilled(class AShield* Shield, const struct FGameResourcePoolReference& ResourcePool, struct FAugmentData& StackData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShieldAug_PowerNap_C", "K2_OnShieldNotFilled");

	Params::UShieldAug_PowerNap_C_K2_OnShieldNotFilled_Params Parms{};

	Parms.Shield = Shield;
	Parms.ResourcePool = ResourcePool;
	Parms.StackData = StackData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShieldAug_PowerNap.ShieldAug_PowerNap_C.K2_NativeDelayCallback
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShield*                     Shield                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAugmentData                StackData                                                        (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
// class FName                        DelayName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbility_PowerNap_C*         PowerNapAbility                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue                           (None)
// class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAbility*                 CallFunc_FindAbility_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbility_PowerNap_C*         K2Node_DynamicCast_AsAbility_Power_Nap                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueOfAttribute_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShieldAug_PowerNap_C::K2_NativeDelayCallback(class AShield* Shield, struct FAugmentData& StackData, class FName DelayName, class UAbility_PowerNap_C* PowerNapAbility, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, class UAbility_PowerNap_C* K2Node_DynamicCast_AsAbility_Power_Nap, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetValueOfAttribute_ReturnValue1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShieldAug_PowerNap_C", "K2_NativeDelayCallback");

	Params::UShieldAug_PowerNap_C_K2_NativeDelayCallback_Params Parms{};

	Parms.Shield = Shield;
	Parms.StackData = StackData;
	Parms.DelayName = DelayName;
	Parms.PowerNapAbility = PowerNapAbility;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_PostAttachedEvent_ReturnValue = CallFunc_PostAttachedEvent_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_FindAbility_ReturnValue = CallFunc_FindAbility_ReturnValue;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.K2Node_DynamicCast_AsAbility_Power_Nap = K2Node_DynamicCast_AsAbility_Power_Nap;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue1 = CallFunc_GetValueOfAttribute_ReturnValue1;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShieldAug_PowerNap.ShieldAug_PowerNap_C.K2_OnShieldFilled
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShield*                     Shield                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameResourcePoolReference  ResourcePool                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
// struct FAugmentData                StackData                                                        (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)

void UShieldAug_PowerNap_C::K2_OnShieldFilled(class AShield* Shield, const struct FGameResourcePoolReference& ResourcePool, struct FAugmentData& StackData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShieldAug_PowerNap_C", "K2_OnShieldFilled");

	Params::UShieldAug_PowerNap_C_K2_OnShieldFilled_Params Parms{};

	Parms.Shield = Shield;
	Parms.ResourcePool = ResourcePool;
	Parms.StackData = StackData;

	UObject::ProcessEvent(Func, &Parms);

}

}


