#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_KotC_AS3_BreathWeapon.Action_KotC_AS3_BreathWeapon_C
// (None)

class UClass* UAction_KotC_AS3_BreathWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_KotC_AS3_BreathWeapon_C");

	return Clss;
}


// Action_KotC_AS3_BreathWeapon_C Action_KotC_AS3_BreathWeapon.Default__Action_KotC_AS3_BreathWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_KotC_AS3_BreathWeapon_C* UAction_KotC_AS3_BreathWeapon_C::GetDefaultObj()
{
	static class UAction_KotC_AS3_BreathWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_KotC_AS3_BreathWeapon_C*>(UAction_KotC_AS3_BreathWeapon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_KotC_AS3_BreathWeapon.Action_KotC_AS3_BreathWeapon_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_KotC_AS3_BreathWeapon_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_KotC_AS3_BreathWeapon_C", "OnBegin");

	Params::UAction_KotC_AS3_BreathWeapon_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_KotC_AS3_BreathWeapon.Action_KotC_AS3_BreathWeapon_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EGbxActionEndState      ActionEndState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_KotC_AS3_BreathWeapon_C::OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_KotC_AS3_BreathWeapon_C", "OnEnd");

	Params::UAction_KotC_AS3_BreathWeapon_C_OnEnd_Params Parms{};

	Parms.ActionEndState = ActionEndState;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_KotC_AS3_BreathWeapon.Action_KotC_AS3_BreathWeapon_C.StartFireBreath
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_KotC_AS3_BreathWeapon_C::StartFireBreath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_KotC_AS3_BreathWeapon_C", "StartFireBreath");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_KotC_AS3_BreathWeapon.Action_KotC_AS3_BreathWeapon_C.AN_StartBreath
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_KotC_AS3_BreathWeapon_C::AN_StartBreath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_KotC_AS3_BreathWeapon_C", "AN_StartBreath");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_KotC_AS3_BreathWeapon.Action_KotC_AS3_BreathWeapon_C.AN_StopBreath
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_KotC_AS3_BreathWeapon_C::AN_StopBreath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_KotC_AS3_BreathWeapon_C", "AN_StopBreath");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_KotC_AS3_BreathWeapon.Action_KotC_AS3_BreathWeapon_C.ExecuteUbergraph_Action_KotC_AS3_BreathWeapon
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_Actor1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxActionEndState      K2Node_Event_ActionEndState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakActionAbility*           CallFunc_GetPrimaryActionAbility_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetAssociatedPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetAssociatedPlayerController_ReturnValue1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetAssociatedPlayerController_ReturnValue2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AOakCharacter*               K2Node_DynamicCast_AsOak_Character                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakFirstPersonComponent*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakFirstPersonComponent*    CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetUpVector_ReturnValue                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AProj_KotC_AS3_BreathAttack_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakPlayerAbilityManagerComponent*CallFunc_GetComponentByClass_ReturnValue2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAbility*                 CallFunc_FindAbility_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPassive_KotC_24_C*          K2Node_DynamicCast_AsPassive_Kot_C_24                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_KotC_AS3_BreathWeapon_C::ExecuteUbergraph_Action_KotC_AS3_BreathWeapon(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable1, class AActor* K2Node_Event_Actor1, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, class UOakActionAbility* CallFunc_GetPrimaryActionAbility_ReturnValue, bool Temp_bool_IsClosed_Variable1, class AActor* CallFunc_K2_GetActor_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue1, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue1, class AActor* CallFunc_K2_GetActor_ReturnValue2, class AActor* CallFunc_K2_GetActor_ReturnValue3, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue2, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess1, class AActor* CallFunc_K2_GetActor_ReturnValue4, class AActor* CallFunc_K2_GetActor_ReturnValue5, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess2, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_IsLocallyControlled_ReturnValue, class UOakFirstPersonComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue6, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UOakFirstPersonComponent* CallFunc_GetComponentByClass_ReturnValue1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetUpVector_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue7, class AProj_KotC_AS3_BreathAttack_C* CallFunc_FinishSpawningActor_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue8, class UOakPlayerAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue2, class UGbxAbility* CallFunc_FindAbility_ReturnValue, class UPassive_KotC_24_C* K2Node_DynamicCast_AsPassive_Kot_C_24, bool K2Node_DynamicCast_bSuccess4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_KotC_AS3_BreathWeapon_C", "ExecuteUbergraph_Action_KotC_AS3_BreathWeapon");

	Params::UAction_KotC_AS3_BreathWeapon_C_ExecuteUbergraph_Action_KotC_AS3_BreathWeapon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable1 = Temp_bool_Has_Been_Initd_Variable1;
	Parms.K2Node_Event_Actor1 = K2Node_Event_Actor1;
	Parms.K2Node_Event_ActionEndState = K2Node_Event_ActionEndState;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPrimaryActionAbility_ReturnValue = CallFunc_GetPrimaryActionAbility_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable1 = Temp_bool_IsClosed_Variable1;
	Parms.CallFunc_K2_GetActor_ReturnValue = CallFunc_K2_GetActor_ReturnValue;
	Parms.CallFunc_K2_GetActor_ReturnValue1 = CallFunc_K2_GetActor_ReturnValue1;
	Parms.CallFunc_GetAssociatedPlayerController_ReturnValue = CallFunc_GetAssociatedPlayerController_ReturnValue;
	Parms.CallFunc_GetAssociatedPlayerController_ReturnValue1 = CallFunc_GetAssociatedPlayerController_ReturnValue1;
	Parms.CallFunc_K2_GetActor_ReturnValue2 = CallFunc_K2_GetActor_ReturnValue2;
	Parms.CallFunc_K2_GetActor_ReturnValue3 = CallFunc_K2_GetActor_ReturnValue3;
	Parms.CallFunc_GetAssociatedPlayerController_ReturnValue2 = CallFunc_GetAssociatedPlayerController_ReturnValue2;
	Parms.K2Node_DynamicCast_AsIBPChar_Player = K2Node_DynamicCast_AsIBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_K2_GetActor_ReturnValue4 = CallFunc_K2_GetActor_ReturnValue4;
	Parms.CallFunc_K2_GetActor_ReturnValue5 = CallFunc_K2_GetActor_ReturnValue5;
	Parms.K2Node_DynamicCast_AsIBPChar_Player1 = K2Node_DynamicCast_AsIBPChar_Player1;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_DynamicCast_AsOak_Character = K2Node_DynamicCast_AsOak_Character;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_K2_GetActor_ReturnValue6 = CallFunc_K2_GetActor_ReturnValue6;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetUpVector_ReturnValue = CallFunc_GetUpVector_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_K2_GetActor_ReturnValue7 = CallFunc_K2_GetActor_ReturnValue7;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_K2_GetActor_ReturnValue8 = CallFunc_K2_GetActor_ReturnValue8;
	Parms.CallFunc_GetComponentByClass_ReturnValue2 = CallFunc_GetComponentByClass_ReturnValue2;
	Parms.CallFunc_FindAbility_ReturnValue = CallFunc_FindAbility_ReturnValue;
	Parms.K2Node_DynamicCast_AsPassive_Kot_C_24 = K2Node_DynamicCast_AsPassive_Kot_C_24;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;

	UObject::ProcessEvent(Func, &Parms);

}

}


