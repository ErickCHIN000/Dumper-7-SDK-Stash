#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIActionOuterComponent.AIActionOuterComponent_C
// (None)

class UClass* UAIActionOuterComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIActionOuterComponent_C");

	return Clss;
}


// AIActionOuterComponent_C AIActionOuterComponent.Default__AIActionOuterComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIActionOuterComponent_C* UAIActionOuterComponent_C::GetDefaultObj()
{
	static class UAIActionOuterComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIActionOuterComponent_C*>(UAIActionOuterComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIActionOuterComponent.AIActionOuterComponent_C.FireOuterSupportWeapon
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FireOuterSupportWeapon_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UArsenalMovement_C*          CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOuterCharacter_C*           K2Node_DynamicCast_AsOuter_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryStartAim_isStartAim                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAIActionOuterComponent_C::FireOuterSupportWeapon(class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_FireOuterSupportWeapon_ReturnValue, class UArsenalMovement_C* CallFunc_GetComponentByClass_ReturnValue, class AOuterCharacter_C* K2Node_DynamicCast_AsOuter_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_TryStartAim_isStartAim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionOuterComponent_C", "FireOuterSupportWeapon");

	Params::UAIActionOuterComponent_C_FireOuterSupportWeapon_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_FireOuterSupportWeapon_ReturnValue = CallFunc_FireOuterSupportWeapon_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsOuter_Character = K2Node_DynamicCast_AsOuter_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_TryStartAim_isStartAim = CallFunc_TryStartAim_isStartAim;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIActionOuterComponent.AIActionOuterComponent_C.FireOuterSubWeapon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AOuterCharacter_C*           K2Node_DynamicCast_AsOuter_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FireOuterSubWeapon_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAIActionOuterComponent_C::FireOuterSubWeapon(class AOuterCharacter_C* K2Node_DynamicCast_AsOuter_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_FireOuterSubWeapon_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionOuterComponent_C", "FireOuterSubWeapon");

	Params::UAIActionOuterComponent_C_FireOuterSubWeapon_Params Parms{};

	Parms.K2Node_DynamicCast_AsOuter_Character = K2Node_DynamicCast_AsOuter_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_FireOuterSubWeapon_ReturnValue = CallFunc_FireOuterSubWeapon_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIActionOuterComponent.AIActionOuterComponent_C.AttackOuterWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsMainWeapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UArsenalFireControlComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ProcessFireInput_Result                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIActionOuterComponent_C::AttackOuterWeapon(bool IsMainWeapon, bool* Result, bool CallFunc_Not_PreBool_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, class UArsenalFireControlComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_ProcessFireInput_Result, bool CallFunc_IsValid_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionOuterComponent_C", "AttackOuterWeapon");

	Params::UAIActionOuterComponent_C_AttackOuterWeapon_Params Parms{};

	Parms.IsMainWeapon = IsMainWeapon;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_ProcessFireInput_Result = CallFunc_ProcessFireInput_Result;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function AIActionOuterComponent.AIActionOuterComponent_C.FireOuterMainWeapon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AttackOuterWeapon_Result                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FireOuterMainWeapon_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAIActionOuterComponent_C::FireOuterMainWeapon(bool CallFunc_AttackOuterWeapon_Result, bool CallFunc_FireOuterMainWeapon_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionOuterComponent_C", "FireOuterMainWeapon");

	Params::UAIActionOuterComponent_C_FireOuterMainWeapon_Params Parms{};

	Parms.CallFunc_AttackOuterWeapon_Result = CallFunc_AttackOuterWeapon_Result;
	Parms.CallFunc_FireOuterMainWeapon_ReturnValue = CallFunc_FireOuterMainWeapon_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIActionOuterComponent.AIActionOuterComponent_C.FinishAttackWeaponRightBP
// (Event, Public, BlueprintEvent)
// Parameters:

void UAIActionOuterComponent_C::FinishAttackWeaponRightBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionOuterComponent_C", "FinishAttackWeaponRightBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIActionOuterComponent.AIActionOuterComponent_C.FinishAttackWeaponShoulderBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAIActionOuterComponent_C::FinishAttackWeaponShoulderBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionOuterComponent_C", "FinishAttackWeaponShoulderBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIActionOuterComponent.AIActionOuterComponent_C.FinishAttackWeaponLeftBP
// (Event, Public, BlueprintEvent)
// Parameters:

void UAIActionOuterComponent_C::FinishAttackWeaponLeftBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionOuterComponent_C", "FinishAttackWeaponLeftBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIActionOuterComponent.AIActionOuterComponent_C.StartGetOnBP
// (Event, Public, BlueprintEvent)
// Parameters:

void UAIActionOuterComponent_C::StartGetOnBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionOuterComponent_C", "StartGetOnBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIActionOuterComponent.AIActionOuterComponent_C.ExecuteUbergraph_AIActionOuterComponent
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAIController*               CallFunc_GetAIController_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLAIController*            K2Node_DynamicCast_AsTTLAIController                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBasicStatusComponent_C*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTTLArsenalMovementComponent*CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AArsenalCharacter_C*         K2Node_DynamicCast_AsArsenal_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UArsenalMovement_C*          CallFunc_GetComponentByClass_ReturnValue2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTTLAIActionComponent*       CallFunc_GetComponentByClass_ReturnValue3                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIActionOuterComponent_C::ExecuteUbergraph_AIActionOuterComponent(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class AAIController* CallFunc_GetAIController_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ATTLAIController* K2Node_DynamicCast_AsTTLAIController, bool K2Node_DynamicCast_bSuccess2, class UBasicStatusComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UTTLArsenalMovementComponent* CallFunc_GetComponentByClass_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue1, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess3, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class UArsenalMovement_C* CallFunc_GetComponentByClass_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UTTLAIActionComponent* CallFunc_GetComponentByClass_ReturnValue3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionOuterComponent_C", "ExecuteUbergraph_AIActionOuterComponent");

	Params::UAIActionOuterComponent_C_ExecuteUbergraph_AIActionOuterComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBase_Character1 = K2Node_DynamicCast_AsBase_Character1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetAIController_ReturnValue = CallFunc_GetAIController_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsTTLAIController = K2Node_DynamicCast_AsTTLAIController;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.CallFunc_GetOwner_ReturnValue1 = CallFunc_GetOwner_ReturnValue1;
	Parms.K2Node_DynamicCast_AsArsenal_Character = K2Node_DynamicCast_AsArsenal_Character;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue2 = CallFunc_GetComponentByClass_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue3 = CallFunc_GetComponentByClass_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}

}


