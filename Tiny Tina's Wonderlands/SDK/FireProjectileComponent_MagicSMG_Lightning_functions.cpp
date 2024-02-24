#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FireProjectileComponent_MagicSMG_Lightning.FireProjectileComponent_MagicSMG_Lightning_C
// (None)

class UClass* UFireProjectileComponent_MagicSMG_Lightning_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FireProjectileComponent_MagicSMG_Lightning_C");

	return Clss;
}


// FireProjectileComponent_MagicSMG_Lightning_C FireProjectileComponent_MagicSMG_Lightning.Default__FireProjectileComponent_MagicSMG_Lightning_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFireProjectileComponent_MagicSMG_Lightning_C* UFireProjectileComponent_MagicSMG_Lightning_C::GetDefaultObj()
{
	static class UFireProjectileComponent_MagicSMG_Lightning_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFireProjectileComponent_MagicSMG_Lightning_C*>(UFireProjectileComponent_MagicSMG_Lightning_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FireProjectileComponent_MagicSMG_Lightning.FireProjectileComponent_MagicSMG_Lightning_C.DoSpecialBarrelBehavior
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFireProjectileComponent_MagicSMG_Lightning_C::DoSpecialBarrelBehavior()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireProjectileComponent_MagicSMG_Lightning_C", "DoSpecialBarrelBehavior");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FireProjectileComponent_MagicSMG_Lightning.FireProjectileComponent_MagicSMG_Lightning_C.K2_OnDeactivated
// (Event, Public, BlueprintEvent)
// Parameters:

void UFireProjectileComponent_MagicSMG_Lightning_C::K2_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireProjectileComponent_MagicSMG_Lightning_C", "K2_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FireProjectileComponent_MagicSMG_Lightning.FireProjectileComponent_MagicSMG_Lightning_C.K2_OnActivated
// (Event, Public, BlueprintEvent)
// Parameters:

void UFireProjectileComponent_MagicSMG_Lightning_C::K2_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireProjectileComponent_MagicSMG_Lightning_C", "K2_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FireProjectileComponent_MagicSMG_Lightning.FireProjectileComponent_MagicSMG_Lightning_C.OnPerformMelee_MagicSMG
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerMeleeData*            MeleeData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      MeleeTarget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFireProjectileComponent_MagicSMG_Lightning_C::OnPerformMelee_MagicSMG(class UPlayerMeleeData* MeleeData, bool bSuccess, class AActor* MeleeTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireProjectileComponent_MagicSMG_Lightning_C", "OnPerformMelee_MagicSMG");

	Params::UFireProjectileComponent_MagicSMG_Lightning_C_OnPerformMelee_MagicSMG_Params Parms{};

	Parms.MeleeData = MeleeData;
	Parms.bSuccess = bSuccess;
	Parms.MeleeTarget = MeleeTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FireProjectileComponent_MagicSMG_Lightning.FireProjectileComponent_MagicSMG_Lightning_C.MagicSMG_ReloadStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                     EventWeapon                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bAutoReload                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFireProjectileComponent_MagicSMG_Lightning_C::MagicSMG_ReloadStarted(class AWeapon* EventWeapon, bool bAutoReload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireProjectileComponent_MagicSMG_Lightning_C", "MagicSMG_ReloadStarted");

	Params::UFireProjectileComponent_MagicSMG_Lightning_C_MagicSMG_ReloadStarted_Params Parms{};

	Parms.EventWeapon = EventWeapon;
	Parms.bAutoReload = bAutoReload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FireProjectileComponent_MagicSMG_Lightning.FireProjectileComponent_MagicSMG_Lightning_C.ExecuteUbergraph_FireProjectileComponent_MagicSMG_Lightning
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeapon*                     K2Node_CustomEvent_EventWeapon                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bAutoReload                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakGbxAttributeFloat_Value                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakGbxAttributeFloat_BaseValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLightBeamAttachment        K2Node_MakeStruct_LightBeamAttachment                            (NoDestructor, ContainsInstancedReference)
// struct FOakLightBeamInitializationDataK2Node_MakeStruct_OakLightBeamInitializationData                 (ContainsInstancedReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerMeleeData*            K2Node_CustomEvent_MeleeData                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_MeleeTarget                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerMeleeStateComponent*  CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)

void UFireProjectileComponent_MagicSMG_Lightning_C::ExecuteUbergraph_FireProjectileComponent_MagicSMG_Lightning(int32 EntryPoint, class AWeapon* K2Node_CustomEvent_EventWeapon, bool K2Node_CustomEvent_bAutoReload, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, float CallFunc_BreakGbxAttributeFloat_Value, float CallFunc_BreakGbxAttributeFloat_BaseValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FLightBeamAttachment& K2Node_MakeStruct_LightBeamAttachment, const struct FOakLightBeamInitializationData& K2Node_MakeStruct_OakLightBeamInitializationData, class AActor* CallFunc_GetOwner_ReturnValue2, class AActor* CallFunc_GetOwner_ReturnValue3, class AActor* CallFunc_GetOwner_ReturnValue4, class UPlayerMeleeData* K2Node_CustomEvent_MeleeData, bool K2Node_CustomEvent_bSuccess, class AActor* K2Node_CustomEvent_MeleeTarget, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess1, class UPlayerMeleeStateComponent* CallFunc_GetComponentByClass_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireProjectileComponent_MagicSMG_Lightning_C", "ExecuteUbergraph_FireProjectileComponent_MagicSMG_Lightning");

	Params::UFireProjectileComponent_MagicSMG_Lightning_C_ExecuteUbergraph_FireProjectileComponent_MagicSMG_Lightning_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_EventWeapon = K2Node_CustomEvent_EventWeapon;
	Parms.K2Node_CustomEvent_bAutoReload = K2Node_CustomEvent_bAutoReload;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue1 = CallFunc_GetOwner_ReturnValue1;
	Parms.CallFunc_BreakGbxAttributeFloat_Value = CallFunc_BreakGbxAttributeFloat_Value;
	Parms.CallFunc_BreakGbxAttributeFloat_BaseValue = CallFunc_BreakGbxAttributeFloat_BaseValue;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_LightBeamAttachment = K2Node_MakeStruct_LightBeamAttachment;
	Parms.K2Node_MakeStruct_OakLightBeamInitializationData = K2Node_MakeStruct_OakLightBeamInitializationData;
	Parms.CallFunc_GetOwner_ReturnValue2 = CallFunc_GetOwner_ReturnValue2;
	Parms.CallFunc_GetOwner_ReturnValue3 = CallFunc_GetOwner_ReturnValue3;
	Parms.CallFunc_GetOwner_ReturnValue4 = CallFunc_GetOwner_ReturnValue4;
	Parms.K2Node_CustomEvent_MeleeData = K2Node_CustomEvent_MeleeData;
	Parms.K2Node_CustomEvent_bSuccess = K2Node_CustomEvent_bSuccess;
	Parms.K2Node_CustomEvent_MeleeTarget = K2Node_CustomEvent_MeleeTarget;
	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;

	UObject::ProcessEvent(Func, &Parms);

}

}


