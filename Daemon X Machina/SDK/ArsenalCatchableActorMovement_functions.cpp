#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C
// (None)

class UClass* UArsenalCatchableActorMovement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArsenalCatchableActorMovement_C");

	return Clss;
}


// ArsenalCatchableActorMovement_C ArsenalCatchableActorMovement.Default__ArsenalCatchableActorMovement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UArsenalCatchableActorMovement_C* UArsenalCatchableActorMovement_C::GetDefaultObj()
{
	static class UArsenalCatchableActorMovement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UArsenalCatchableActorMovement_C*>(UArsenalCatchableActorMovement_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.TryStartOuterPunchThrow_Throw
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UArsenalCatchableActorMovement_C::TryStartOuterPunchThrow_Throw()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "TryStartOuterPunchThrow_Throw");

	Params::UArsenalCatchableActorMovement_C_TryStartOuterPunchThrow_Throw_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.TryStartOuterPunchThrow_Catch
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryStartCatchActor_isSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryReadyCatch_result                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UArsenalCatchableActorMovement_C::TryStartOuterPunchThrow_Catch(bool CallFunc_TryStartCatchActor_isSuccess, bool CallFunc_TryReadyCatch_result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "TryStartOuterPunchThrow_Catch");

	Params::UArsenalCatchableActorMovement_C_TryStartOuterPunchThrow_Catch_Params Parms{};

	Parms.CallFunc_TryStartCatchActor_isSuccess = CallFunc_TryStartCatchActor_isSuccess;
	Parms.CallFunc_TryReadyCatch_result = CallFunc_TryReadyCatch_result;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.TryCatchGrenadeEitherHand
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NeedCanMoveCheck                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Succeed                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsLeftHandResult                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsLeftHand                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanCatchMovement_OneSideHand_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanCatchMovement_OneSideHand_ReturnValue1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanTryAllMovementCPP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanTryAllMovementCPP_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTTLBasicStatusComponent*    CallFunc_FindOwnerStatus_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalCatchableActorMovement_C::TryCatchGrenadeEitherHand(bool NeedCanMoveCheck, bool* Succeed, bool* IsLeftHandResult, bool IsLeftHand, bool CallFunc_CanCatchMovement_OneSideHand_ReturnValue, bool CallFunc_CanCatchMovement_OneSideHand_ReturnValue1, bool CallFunc_CanTryAllMovementCPP_ReturnValue, bool CallFunc_CanTryAllMovementCPP_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue, class UTTLBasicStatusComponent* CallFunc_FindOwnerStatus_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "TryCatchGrenadeEitherHand");

	Params::UArsenalCatchableActorMovement_C_TryCatchGrenadeEitherHand_Params Parms{};

	Parms.NeedCanMoveCheck = NeedCanMoveCheck;
	Parms.IsLeftHand = IsLeftHand;
	Parms.CallFunc_CanCatchMovement_OneSideHand_ReturnValue = CallFunc_CanCatchMovement_OneSideHand_ReturnValue;
	Parms.CallFunc_CanCatchMovement_OneSideHand_ReturnValue1 = CallFunc_CanCatchMovement_OneSideHand_ReturnValue1;
	Parms.CallFunc_CanTryAllMovementCPP_ReturnValue = CallFunc_CanTryAllMovementCPP_ReturnValue;
	Parms.CallFunc_CanTryAllMovementCPP_ReturnValue1 = CallFunc_CanTryAllMovementCPP_ReturnValue1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_FindOwnerStatus_ReturnValue = CallFunc_FindOwnerStatus_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Succeed != nullptr)
		*Succeed = Parms.Succeed;

	if (IsLeftHandResult != nullptr)
		*IsLeftHandResult = Parms.IsLeftHandResult;

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.ThrowAwayWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeft                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryCatchWeaponCpp_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryStartAim_isStartAim                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalCatchableActorMovement_C::ThrowAwayWeapon(bool IsLeft, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_TryCatchWeaponCpp_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_TryStartAim_isStartAim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "ThrowAwayWeapon");

	Params::UArsenalCatchableActorMovement_C_ThrowAwayWeapon_Params Parms{};

	Parms.IsLeft = IsLeft;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_TryCatchWeaponCpp_ReturnValue = CallFunc_TryCatchWeaponCpp_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_TryStartAim_isStartAim = CallFunc_TryStartAim_isStartAim;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.TryThrowAwayWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalCatchableActorMovement_C::TryThrowAwayWeapon(class AActor* CallFunc_GetOwner_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "TryThrowAwayWeapon");

	Params::UArsenalCatchableActorMovement_C_TryThrowAwayWeapon_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.IsPickableTargetCaught
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCatchableActor_C*           CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UArsenalCatchableActorMovement_C::IsPickableTargetCaught(bool CallFunc_IsValid_ReturnValue, class UCatchableActor_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "IsPickableTargetCaught");

	Params::UArsenalCatchableActorMovement_C_IsPickableTargetCaught_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.CancelThrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTTLArsenalAnimInstance*     K2Node_DynamicCast_AsTTLArsenal_Anim_Instance                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalCatchableActorMovement_C::CancelThrow(bool CallFunc_Not_PreBool_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UTTLArsenalAnimInstance* K2Node_DynamicCast_AsTTLArsenal_Anim_Instance, bool K2Node_DynamicCast_bSuccess1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "CancelThrow");

	Params::UArsenalCatchableActorMovement_C_CancelThrow_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsTTLArsenal_Anim_Instance = K2Node_DynamicCast_AsTTLArsenal_Anim_Instance;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.TryCancelThrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalCatchableActorMovement_C::TryCancelThrow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "TryCancelThrow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.TryPutDown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_TryMoveBackForTransport_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOthersAtPuttingPoint_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_TryGeTransformForTransportCenter_transform              (IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryGeTransformForTransportCenter_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCatchableActor_C*           CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalCatchableActorMovement_C::TryPutDown(bool CallFunc_TryMoveBackForTransport_ReturnValue, bool CallFunc_IsOthersAtPuttingPoint_ReturnValue, const struct FTransform& CallFunc_TryGeTransformForTransportCenter_transform, bool CallFunc_TryGeTransformForTransportCenter_ReturnValue, class UCatchableActor_C* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "TryPutDown");

	Params::UArsenalCatchableActorMovement_C_TryPutDown_Params Parms{};

	Parms.CallFunc_TryMoveBackForTransport_ReturnValue = CallFunc_TryMoveBackForTransport_ReturnValue;
	Parms.CallFunc_IsOthersAtPuttingPoint_ReturnValue = CallFunc_IsOthersAtPuttingPoint_ReturnValue;
	Parms.CallFunc_TryGeTransformForTransportCenter_transform = CallFunc_TryGeTransformForTransportCenter_transform;
	Parms.CallFunc_TryGeTransformForTransportCenter_ReturnValue = CallFunc_TryGeTransformForTransportCenter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.TryCancelCatchMotion
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               EnableOtherAction                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLCharacterCommon*         K2Node_DynamicCast_AsTTLCharacter_Common                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTTLArsenalAnimInstance*     K2Node_DynamicCast_AsTTLArsenal_Anim_Instance                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCurveValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalCatchableActorMovement_C::TryCancelCatchMotion(bool* Result, bool* EnableOtherAction, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue, class ATTLCharacterCommon* K2Node_DynamicCast_AsTTLCharacter_Common, bool K2Node_DynamicCast_bSuccess, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UTTLArsenalAnimInstance* K2Node_DynamicCast_AsTTLArsenal_Anim_Instance, bool K2Node_DynamicCast_bSuccess1, float CallFunc_GetCurveValue_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "TryCancelCatchMotion");

	Params::UArsenalCatchableActorMovement_C_TryCancelCatchMotion_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsTTLCharacter_Common = K2Node_DynamicCast_AsTTLCharacter_Common;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsTTLArsenal_Anim_Instance = K2Node_DynamicCast_AsTTLArsenal_Anim_Instance;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GetCurveValue_ReturnValue = CallFunc_GetCurveValue_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (EnableOtherAction != nullptr)
		*EnableOtherAction = Parms.EnableOtherAction;

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.TryRelinquishActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeft                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanRelinquish_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalCatchableActorMovement_C::TryRelinquishActor(bool IsLeft, bool CallFunc_CanRelinquish_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "TryRelinquishActor");

	Params::UArsenalCatchableActorMovement_C_TryRelinquishActor_Params Parms{};

	Parms.IsLeft = IsLeft;
	Parms.CallFunc_CanRelinquish_ReturnValue = CallFunc_CanRelinquish_ReturnValue;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.RelinquishActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCatchableActor_C*           CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalCatchableActorMovement_C::RelinquishActor(class AActor* CallFunc_GetOwner_ReturnValue, class UCatchableActor_C* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "RelinquishActor");

	Params::UArsenalCatchableActorMovement_C_RelinquishActor_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.GetCatchableActor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CaughtActor                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsCaught                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsLeft                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CollisionCheckRadius                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CollisionCheckEndLoc                                             (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CollisionCheckStartLoc                                           (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               _IsFallingOrFlying                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              _NearestDistanceRight                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      _CaughtActorRight                                                (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               _IsCaughtRight                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
// class AArsenalCharacter_C*         _ArsenalCharacter                                                (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              _NearestDistanceLeft                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      _CaughtActorLeft                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               _IsCaughtLeft                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalCatchableActorMovement_C::GetCatchableActor(class AActor** CaughtActor, bool* IsCaught, bool* IsLeft, float CollisionCheckRadius, const struct FVector& CollisionCheckEndLoc, const struct FVector& CollisionCheckStartLoc, bool _IsFallingOrFlying, float _NearestDistanceRight, class AActor* _CaughtActorRight, bool _IsCaughtRight, class AArsenalCharacter_C* _ArsenalCharacter, float _NearestDistanceLeft, class AActor* _CaughtActorLeft, bool _IsCaughtLeft)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "GetCatchableActor");

	Params::UArsenalCatchableActorMovement_C_GetCatchableActor_Params Parms{};

	Parms.CollisionCheckRadius = CollisionCheckRadius;
	Parms.CollisionCheckEndLoc = CollisionCheckEndLoc;
	Parms.CollisionCheckStartLoc = CollisionCheckStartLoc;
	Parms._IsFallingOrFlying = _IsFallingOrFlying;
	Parms._NearestDistanceRight = _NearestDistanceRight;
	Parms._CaughtActorRight = _CaughtActorRight;
	Parms._IsCaughtRight = _IsCaughtRight;
	Parms._ArsenalCharacter = _ArsenalCharacter;
	Parms._NearestDistanceLeft = _NearestDistanceLeft;
	Parms._CaughtActorLeft = _CaughtActorLeft;
	Parms._IsCaughtLeft = _IsCaughtLeft;

	UObject::ProcessEvent(Func, &Parms);

	if (CaughtActor != nullptr)
		*CaughtActor = Parms.CaughtActor;

	if (IsCaught != nullptr)
		*IsCaught = Parms.IsCaught;

	if (IsLeft != nullptr)
		*IsLeft = Parms.IsLeft;

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.GetThrowBaseTransform
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                  baseTransform                                                    (Parm, OutParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOuterCharacter_C*           K2Node_DynamicCast_AsOuter_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// class AArsenalCharacter_C*         K2Node_DynamicCast_AsArsenal_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue1                         (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_TransformLocation_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)

void UArsenalCatchableActorMovement_C::GetThrowBaseTransform(struct FTransform* baseTransform, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_SelectFloat_ReturnValue, class AOuterCharacter_C* K2Node_DynamicCast_AsOuter_Character, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue1, const struct FVector& CallFunc_TransformLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "GetThrowBaseTransform");

	Params::UArsenalCatchableActorMovement_C_GetThrowBaseTransform_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsOuter_Character = K2Node_DynamicCast_AsOuter_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.K2Node_DynamicCast_AsArsenal_Character = K2Node_DynamicCast_AsArsenal_Character;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GetSocketTransform_ReturnValue1 = CallFunc_GetSocketTransform_ReturnValue1;
	Parms.CallFunc_TransformLocation_ReturnValue = CallFunc_TransformLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (baseTransform != nullptr)
		*baseTransform = std::move(Parms.baseTransform);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.GetWorldAimCameraDestPosition
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Position                                                         (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetWorldAimDirectionCPP_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalCatchableActorMovement_C::GetWorldAimCameraDestPosition(struct FVector* Position, const struct FVector& CallFunc_GetWorldAimDirectionCPP_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "GetWorldAimCameraDestPosition");

	Params::UArsenalCatchableActorMovement_C_GetWorldAimCameraDestPosition_Params Parms{};

	Parms.CallFunc_GetWorldAimDirectionCPP_ReturnValue = CallFunc_GetWorldAimDirectionCPP_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.TryCatchGrenade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeft                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanTryAllMovementCPP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalCatchableActorMovement_C::TryCatchGrenade(bool IsLeft, bool CallFunc_CanTryAllMovementCPP_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "TryCatchGrenade");

	Params::UArsenalCatchableActorMovement_C_TryCatchGrenade_Params Parms{};

	Parms.IsLeft = IsLeft;
	Parms.CallFunc_CanTryAllMovementCPP_ReturnValue = CallFunc_CanTryAllMovementCPP_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.CatchGrenade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeft                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTTLCatchableActorComponent* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCatchableActor_C*           CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCatchableActor_C*           CallFunc_GetComponentByClass_ReturnValue2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCatchableActor_C*           CallFunc_GetComponentByClass_ReturnValue3                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGrenade_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue1                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLGrenade*                 K2Node_DynamicCast_AsTTLGrenade                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_SpawnGrenade_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBasicStatusComponent_C*     CallFunc_GetComponentByClass_ReturnValue4                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArsenalMovement_C*          CallFunc_GetComponentByClass_ReturnValue5                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalcOuterThrowSpeedWithFluctuation_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalCatchableActorMovement_C::CatchGrenade(bool IsLeft, class UTTLCatchableActorComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, class UCatchableActor_C* CallFunc_GetComponentByClass_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, class UCatchableActor_C* CallFunc_GetComponentByClass_ReturnValue2, bool CallFunc_IsValid_ReturnValue2, class UCatchableActor_C* CallFunc_GetComponentByClass_ReturnValue3, bool CallFunc_IsGrenade_ReturnValue, bool CallFunc_IsValid_ReturnValue3, class AActor* CallFunc_GetOwner_ReturnValue1, const class FString& CallFunc_Conv_BoolToString_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue1, bool CallFunc_IsValid_ReturnValue4, class ATTLGrenade* K2Node_DynamicCast_AsTTLGrenade, bool K2Node_DynamicCast_bSuccess2, class AActor* CallFunc_SpawnGrenade_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue2, class UBasicStatusComponent_C* CallFunc_GetComponentByClass_ReturnValue4, class UArsenalMovement_C* CallFunc_GetComponentByClass_ReturnValue5, float CallFunc_CalcOuterThrowSpeedWithFluctuation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "CatchGrenade");

	Params::UArsenalCatchableActorMovement_C_CatchGrenade_Params Parms{};

	Parms.IsLeft = IsLeft;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue = CallFunc_IsLocallyControlledPlayer_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetComponentByClass_ReturnValue2 = CallFunc_GetComponentByClass_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetComponentByClass_ReturnValue3 = CallFunc_GetComponentByClass_ReturnValue3;
	Parms.CallFunc_IsGrenade_ReturnValue = CallFunc_IsGrenade_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_GetOwner_ReturnValue1 = CallFunc_GetOwner_ReturnValue1;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue1 = CallFunc_Concat_StrStr_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.K2Node_DynamicCast_AsTTLGrenade = K2Node_DynamicCast_AsTTLGrenade;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_SpawnGrenade_ReturnValue = CallFunc_SpawnGrenade_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue2 = CallFunc_GetOwner_ReturnValue2;
	Parms.CallFunc_GetComponentByClass_ReturnValue4 = CallFunc_GetComponentByClass_ReturnValue4;
	Parms.CallFunc_GetComponentByClass_ReturnValue5 = CallFunc_GetComponentByClass_ReturnValue5;
	Parms.CallFunc_CalcOuterThrowSpeedWithFluctuation_ReturnValue = CallFunc_CalcOuterThrowSpeedWithFluctuation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.TryOnDead
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBasicStatusComponent_C*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACatchAbleWeaponContainer_C* K2Node_DynamicCast_AsCatch_Able_Weapon_Container                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalCatchableActorMovement_C::TryOnDead(bool CallFunc_IsValid_ReturnValue, class UBasicStatusComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class ACatchAbleWeaponContainer_C* K2Node_DynamicCast_AsCatch_Able_Weapon_Container, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "TryOnDead");

	Params::UArsenalCatchableActorMovement_C_TryOnDead_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.K2Node_DynamicCast_AsCatch_Able_Weapon_Container = K2Node_DynamicCast_AsCatch_Able_Weapon_Container;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.AttachToTargetOnPick_0
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DiffRotationZ                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    NewRotator                                                       (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// struct FVector                     NewLocation                                                      (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorBounds_Origin                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorBounds_BoxExtent                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (IsPlainOldData, NoDestructor)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RLerp_ReturnValue                                       (IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue1                        (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult1                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue2                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue1                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue1                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue1                                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue1                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue2                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue1                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue1                         (IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RLerp_ReturnValue1                                      (IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue1                                (IsPlainOldData, NoDestructor)

void UArsenalCatchableActorMovement_C::AttachToTargetOnPick_0(float DiffRotationZ, const struct FRotator& NewRotator, const struct FVector& NewLocation, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_FMin_ReturnValue, const struct FRotator& CallFunc_RLerp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_BreakRotator_Roll1, float CallFunc_BreakRotator_Pitch1, float CallFunc_BreakRotator_Yaw1, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult1, bool CallFunc_K2_SetActorLocation_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue1, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, float CallFunc_BreakVector_X3, float CallFunc_BreakVector_Y3, float CallFunc_BreakVector_Z3, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FVector& CallFunc_Normal_ReturnValue1, float CallFunc_BreakVector_X4, float CallFunc_BreakVector_Y4, float CallFunc_BreakVector_Z4, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_BreakVector_X5, float CallFunc_BreakVector_Y5, float CallFunc_BreakVector_Z5, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FVector& CallFunc_VLerp_ReturnValue1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue1, float CallFunc_BreakRotator_Roll2, float CallFunc_BreakRotator_Pitch2, float CallFunc_BreakRotator_Yaw2, const struct FRotator& CallFunc_RLerp_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_BreakRotator_Roll3, float CallFunc_BreakRotator_Pitch3, float CallFunc_BreakRotator_Yaw3, float CallFunc_Abs_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "AttachToTargetOnPick_0");

	Params::UArsenalCatchableActorMovement_C_AttachToTargetOnPick_0_Params Parms{};

	Parms.DiffRotationZ = DiffRotationZ;
	Parms.NewRotator = NewRotator;
	Parms.NewLocation = NewLocation;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue = CallFunc_IsLocallyControlledPlayer_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue1 = CallFunc_GetOwner_ReturnValue1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue2 = CallFunc_GetOwner_ReturnValue2;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GetActorBounds_Origin = CallFunc_GetActorBounds_Origin;
	Parms.CallFunc_GetActorBounds_BoxExtent = CallFunc_GetActorBounds_BoxExtent;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue1 = CallFunc_K2_GetActorLocation_ReturnValue1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_RLerp_ReturnValue = CallFunc_RLerp_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue1 = CallFunc_K2_GetActorRotation_ReturnValue1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll1 = CallFunc_BreakRotator_Roll1;
	Parms.CallFunc_BreakRotator_Pitch1 = CallFunc_BreakRotator_Pitch1;
	Parms.CallFunc_BreakRotator_Yaw1 = CallFunc_BreakRotator_Yaw1;
	Parms.CallFunc_BreakVector_X1 = CallFunc_BreakVector_X1;
	Parms.CallFunc_BreakVector_Y1 = CallFunc_BreakVector_Y1;
	Parms.CallFunc_BreakVector_Z1 = CallFunc_BreakVector_Z1;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult1 = CallFunc_K2_SetActorLocation_SweepHitResult1;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue1 = CallFunc_K2_SetActorLocation_ReturnValue1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue2 = CallFunc_K2_GetActorLocation_ReturnValue2;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue1 = CallFunc_Subtract_VectorVector_ReturnValue1;
	Parms.CallFunc_BreakVector_X2 = CallFunc_BreakVector_X2;
	Parms.CallFunc_BreakVector_Y2 = CallFunc_BreakVector_Y2;
	Parms.CallFunc_BreakVector_Z2 = CallFunc_BreakVector_Z2;
	Parms.CallFunc_BreakVector_X3 = CallFunc_BreakVector_X3;
	Parms.CallFunc_BreakVector_Y3 = CallFunc_BreakVector_Y3;
	Parms.CallFunc_BreakVector_Z3 = CallFunc_BreakVector_Z3;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue1 = CallFunc_MakeVector_ReturnValue1;
	Parms.CallFunc_Normal_ReturnValue1 = CallFunc_Normal_ReturnValue1;
	Parms.CallFunc_BreakVector_X4 = CallFunc_BreakVector_X4;
	Parms.CallFunc_BreakVector_Y4 = CallFunc_BreakVector_Y4;
	Parms.CallFunc_BreakVector_Z4 = CallFunc_BreakVector_Z4;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue1 = CallFunc_Multiply_VectorFloat_ReturnValue1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_BreakVector_X5 = CallFunc_BreakVector_X5;
	Parms.CallFunc_BreakVector_Y5 = CallFunc_BreakVector_Y5;
	Parms.CallFunc_BreakVector_Z5 = CallFunc_BreakVector_Z5;
	Parms.CallFunc_MakeVector_ReturnValue2 = CallFunc_MakeVector_ReturnValue2;
	Parms.CallFunc_VLerp_ReturnValue1 = CallFunc_VLerp_ReturnValue1;
	Parms.CallFunc_FindLookAtRotation_ReturnValue1 = CallFunc_FindLookAtRotation_ReturnValue1;
	Parms.CallFunc_BreakRotator_Roll2 = CallFunc_BreakRotator_Roll2;
	Parms.CallFunc_BreakRotator_Pitch2 = CallFunc_BreakRotator_Pitch2;
	Parms.CallFunc_BreakRotator_Yaw2 = CallFunc_BreakRotator_Yaw2;
	Parms.CallFunc_RLerp_ReturnValue1 = CallFunc_RLerp_ReturnValue1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll3 = CallFunc_BreakRotator_Roll3;
	Parms.CallFunc_BreakRotator_Pitch3 = CallFunc_BreakRotator_Pitch3;
	Parms.CallFunc_BreakRotator_Yaw3 = CallFunc_BreakRotator_Yaw3;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue1 = CallFunc_MakeRotator_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.catchActor
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetBulletSpeedCPP_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCatchableActor_C*           CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGrenade_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOuter_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGrenade_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalCatchableActorMovement_C::CatchActor(bool Temp_bool_Variable, float Temp_float_Variable, float CallFunc_GetBulletSpeedCPP_ReturnValue, class UCatchableActor_C* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsGrenade_ReturnValue, bool CallFunc_IsOuter_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsGrenade_ReturnValue1, float CallFunc_SelectFloat_ReturnValue, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "catchActor");

	Params::UArsenalCatchableActorMovement_C_CatchActor_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_GetBulletSpeedCPP_ReturnValue = CallFunc_GetBulletSpeedCPP_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsGrenade_ReturnValue = CallFunc_IsGrenade_ReturnValue;
	Parms.CallFunc_IsOuter_ReturnValue = CallFunc_IsOuter_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsGrenade_ReturnValue1 = CallFunc_IsGrenade_ReturnValue1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.TryCatchActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOuter_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBasicStatusComponent_C*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACatchAbleWeaponContainer_C* K2Node_DynamicCast_AsCatch_Able_Weapon_Container                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCatchableActor_C*           CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalCatchableActorMovement_C::TryCatchActor(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsOuter_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBasicStatusComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class ACatchAbleWeaponContainer_C* K2Node_DynamicCast_AsCatch_Able_Weapon_Container, bool K2Node_DynamicCast_bSuccess, class UCatchableActor_C* CallFunc_GetComponentByClass_ReturnValue1, bool CallFunc_IsValid_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "TryCatchActor");

	Params::UArsenalCatchableActorMovement_C_TryCatchActor_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsOuter_ReturnValue = CallFunc_IsOuter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.K2Node_DynamicCast_AsCatch_Able_Weapon_Container = K2Node_DynamicCast_AsCatch_Able_Weapon_Container;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.TryUnreadyCatch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalCatchableActorMovement_C::TryUnreadyCatch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "TryUnreadyCatch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.TryReadyCatch
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalCatchableActorMovement_C::TryReadyCatch(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "TryReadyCatch");

	Params::UArsenalCatchableActorMovement_C_TryReadyCatch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.TryReleaseActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalCatchableActorMovement_C::TryReleaseActor(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "TryReleaseActor");

	Params::UArsenalCatchableActorMovement_C_TryReleaseActor_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.ReleaseActor
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLWeaponSlot          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLWeaponSlot          Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCatchingPickableCPP_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCatchingWeaponCPP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOuter_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCatchingGrenadeCPP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLWeaponSlot          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArsenalChangeWeaponComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCatchableActor_C*           CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLWeaponBase*              K2Node_DynamicCast_AsTTLWeapon_Base                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLWeaponBase*              CallFunc_ChangeWeapon_OldWeapon                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCatchableActor_C*           CallFunc_GetComponentByClass_ReturnValue2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalCatchableActorMovement_C::ReleaseActor(bool Temp_bool_Variable, enum class ETTLWeaponSlot Temp_byte_Variable, enum class ETTLWeaponSlot Temp_byte_Variable1, bool CallFunc_IsCatchingPickableCPP_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsCatchingWeaponCPP_ReturnValue, bool CallFunc_IsOuter_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsCatchingGrenadeCPP_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, enum class ETTLWeaponSlot K2Node_Select_Default, class UArsenalChangeWeaponComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCatchableActor_C* CallFunc_GetComponentByClass_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, class ATTLWeaponBase* K2Node_DynamicCast_AsTTLWeapon_Base, bool K2Node_DynamicCast_bSuccess1, class ATTLWeaponBase* CallFunc_ChangeWeapon_OldWeapon, class UCatchableActor_C* CallFunc_GetComponentByClass_ReturnValue2, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "ReleaseActor");

	Params::UArsenalCatchableActorMovement_C_ReleaseActor_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_IsCatchingPickableCPP_ReturnValue = CallFunc_IsCatchingPickableCPP_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsCatchingWeaponCPP_ReturnValue = CallFunc_IsCatchingWeaponCPP_ReturnValue;
	Parms.CallFunc_IsOuter_ReturnValue = CallFunc_IsOuter_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsCatchingGrenadeCPP_ReturnValue = CallFunc_IsCatchingGrenadeCPP_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue1 = CallFunc_GetOwner_ReturnValue1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.K2Node_DynamicCast_AsTTLWeapon_Base = K2Node_DynamicCast_AsTTLWeapon_Base;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_ChangeWeapon_OldWeapon = CallFunc_ChangeWeapon_OldWeapon;
	Parms.CallFunc_GetComponentByClass_ReturnValue2 = CallFunc_GetComponentByClass_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.TryEndThrowActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalCatchableActorMovement_C::TryEndThrowActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "TryEndThrowActor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.TryThrowActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalCatchableActorMovement_C::TryThrowActor(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "TryThrowActor");

	Params::UArsenalCatchableActorMovement_C_TryThrowActor_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.TryStartCatchActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETTLThrowType           ThrowType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSuccess                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetCatchableActorCPP_caughtActor                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCatchableActorCPP_isCaught                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCatchableActorCPP_isLeft                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCatchableActorCPP_isFailCatch                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLPlayerController*        K2Node_DynamicCast_AsTTLPlayer_Controller                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalCatchableActorMovement_C::TryStartCatchActor(enum class ETTLThrowType ThrowType, bool* IsSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AActor* CallFunc_GetCatchableActorCPP_caughtActor, bool CallFunc_GetCatchableActorCPP_isCaught, bool CallFunc_GetCatchableActorCPP_isLeft, bool CallFunc_GetCatchableActorCPP_isFailCatch, bool CallFunc_IsValid_ReturnValue, class ATTLPlayerController* K2Node_DynamicCast_AsTTLPlayer_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "TryStartCatchActor");

	Params::UArsenalCatchableActorMovement_C_TryStartCatchActor_Params Parms{};

	Parms.ThrowType = ThrowType;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetCatchableActorCPP_caughtActor = CallFunc_GetCatchableActorCPP_caughtActor;
	Parms.CallFunc_GetCatchableActorCPP_isCaught = CallFunc_GetCatchableActorCPP_isCaught;
	Parms.CallFunc_GetCatchableActorCPP_isLeft = CallFunc_GetCatchableActorCPP_isLeft;
	Parms.CallFunc_GetCatchableActorCPP_isFailCatch = CallFunc_GetCatchableActorCPP_isFailCatch;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsTTLPlayer_Controller = K2Node_DynamicCast_AsTTLPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSuccess != nullptr)
		*IsSuccess = Parms.IsSuccess;

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.TryCancelAim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalCatchableActorMovement_C::TryCancelAim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "TryCancelAim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.TryStartThrowActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeft                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsHandWeapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLThrowType           ThrowType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetThrowBaseLocation_baseLocation                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanTryAllMovementCPP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetWorldAimDirectionCPP_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalCatchableActorMovement_C::TryStartThrowActor(bool IsLeft, bool IsHandWeapon, enum class ETTLThrowType ThrowType, const struct FVector& CallFunc_GetThrowBaseLocation_baseLocation, bool CallFunc_CanTryAllMovementCPP_ReturnValue, const struct FVector& CallFunc_GetWorldAimDirectionCPP_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "TryStartThrowActor");

	Params::UArsenalCatchableActorMovement_C_TryStartThrowActor_Params Parms{};

	Parms.IsLeft = IsLeft;
	Parms.IsHandWeapon = IsHandWeapon;
	Parms.ThrowType = ThrowType;
	Parms.CallFunc_GetThrowBaseLocation_baseLocation = CallFunc_GetThrowBaseLocation_baseLocation;
	Parms.CallFunc_CanTryAllMovementCPP_ReturnValue = CallFunc_CanTryAllMovementCPP_ReturnValue;
	Parms.CallFunc_GetWorldAimDirectionCPP_ReturnValue = CallFunc_GetWorldAimDirectionCPP_ReturnValue;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.TryStartAim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     StartAimDirection                                                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLThrowType           ThrowType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsStartAim                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanTryAllMovementCPP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalCatchableActorMovement_C::TryStartAim(const struct FVector& StartAimDirection, enum class ETTLThrowType ThrowType, bool* IsStartAim, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanTryAllMovementCPP_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "TryStartAim");

	Params::UArsenalCatchableActorMovement_C_TryStartAim_Params Parms{};

	Parms.StartAimDirection = StartAimDirection;
	Parms.ThrowType = ThrowType;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CanTryAllMovementCPP_ReturnValue = CallFunc_CanTryAllMovementCPP_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsStartAim != nullptr)
		*IsStartAim = Parms.IsStartAim;

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.UnreadyCatch
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalCatchableActorMovement_C::UnreadyCatch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "UnreadyCatch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.ReadyCatch
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue1                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalCatchableActorMovement_C::ReadyCatch(const class FString& CallFunc_Conv_BoolToString_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue1, bool CallFunc_IsLocallyControlledPlayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "ReadyCatch");

	Params::UArsenalCatchableActorMovement_C_ReadyCatch_Params Parms{};

	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue1 = CallFunc_Concat_StrStr_ReturnValue1;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue = CallFunc_IsLocallyControlledPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.CancelAim
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsCatchingGrenadeCPP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTMPOverHeat_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOuterPunchThrowing_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalCatchableActorMovement_C::CancelAim(bool CallFunc_IsCatchingGrenadeCPP_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsTMPOverHeat_ReturnValue, bool CallFunc_IsOuterPunchThrowing_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "CancelAim");

	Params::UArsenalCatchableActorMovement_C_CancelAim_Params Parms{};

	Parms.CallFunc_IsCatchingGrenadeCPP_ReturnValue = CallFunc_IsCatchingGrenadeCPP_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsTMPOverHeat_ReturnValue = CallFunc_IsTMPOverHeat_ReturnValue;
	Parms.CallFunc_IsOuterPunchThrowing_ReturnValue = CallFunc_IsOuterPunchThrowing_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.DrawThrowDebugLine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     SourcePosition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CurrentGravity                                                   (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LineTraceDestinationPosition                                     (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LineTraceSourcePosition                                          (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ThrowVelocity                                                    (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CurrentPosition                                                  (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NextPosition                                                     (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsHit                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetGravityCPP_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue1                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue2                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue1                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalCatchableActorMovement_C::DrawThrowDebugLine(const struct FVector& SourcePosition, const struct FVector& Direction, float Duration, const struct FVector& CurrentGravity, const struct FVector& LineTraceDestinationPosition, const struct FVector& LineTraceSourcePosition, const struct FVector& ThrowVelocity, const struct FVector& CurrentPosition, const struct FVector& NextPosition, bool IsHit, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetGravityCPP_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "DrawThrowDebugLine");

	Params::UArsenalCatchableActorMovement_C_DrawThrowDebugLine_Params Parms{};

	Parms.SourcePosition = SourcePosition;
	Parms.Direction = Direction;
	Parms.Duration = Duration;
	Parms.CurrentGravity = CurrentGravity;
	Parms.LineTraceDestinationPosition = LineTraceDestinationPosition;
	Parms.LineTraceSourcePosition = LineTraceSourcePosition;
	Parms.ThrowVelocity = ThrowVelocity;
	Parms.CurrentPosition = CurrentPosition;
	Parms.NextPosition = NextPosition;
	Parms.IsHit = IsHit;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetGravityCPP_ReturnValue = CallFunc_GetGravityCPP_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue1 = CallFunc_Multiply_VectorFloat_ReturnValue1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue2 = CallFunc_Multiply_VectorFloat_ReturnValue2;
	Parms.CallFunc_Add_VectorVector_ReturnValue1 = CallFunc_Add_VectorVector_ReturnValue1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.EndThrowActor
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLDestroyablePartsTypeTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLDestroyablePartsTypeTemp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLDestroyablePartsTypeK2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AArsenalCharacter_C*         K2Node_DynamicCast_AsArsenal_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompletelyDestroyed_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalCatchableActorMovement_C::EndThrowActor(bool Temp_bool_Variable, enum class ETTLDestroyablePartsType Temp_byte_Variable, enum class ETTLDestroyablePartsType Temp_byte_Variable1, class AActor* CallFunc_GetOwner_ReturnValue, enum class ETTLDestroyablePartsType K2Node_Select_Default, class AActor* CallFunc_GetOwner_ReturnValue1, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsCompletelyDestroyed_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "EndThrowActor");

	Params::UArsenalCatchableActorMovement_C_EndThrowActor_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetOwner_ReturnValue1 = CallFunc_GetOwner_ReturnValue1;
	Parms.K2Node_DynamicCast_AsArsenal_Character = K2Node_DynamicCast_AsArsenal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsCompletelyDestroyed_ReturnValue = CallFunc_IsCompletelyDestroyed_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.StartThrowActor
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetThrowBaseLocation_baseLocation                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArsenalMovement_C*          CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SwitchRisePressed_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalCatchableActorMovement_C::StartThrowActor(class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetThrowBaseLocation_baseLocation, class UArsenalMovement_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_SwitchRisePressed_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "StartThrowActor");

	Params::UArsenalCatchableActorMovement_C_StartThrowActor_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetThrowBaseLocation_baseLocation = CallFunc_GetThrowBaseLocation_baseLocation;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_SwitchRisePressed_ReturnValue = CallFunc_SwitchRisePressed_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.EndAim
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_GetWorldAimDirectionCPP_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTMPOverHeat_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalCatchableActorMovement_C::EndAim(const struct FVector& CallFunc_GetWorldAimDirectionCPP_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsTMPOverHeat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "EndAim");

	Params::UArsenalCatchableActorMovement_C_EndAim_Params Parms{};

	Parms.CallFunc_GetWorldAimDirectionCPP_ReturnValue = CallFunc_GetWorldAimDirectionCPP_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsTMPOverHeat_ReturnValue = CallFunc_IsTMPOverHeat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.StartAim
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     StartAimDirection                                                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLThrowType           ThrowType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DirectionA                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Temp_struct_Variable                                             (IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetThrowBaseLocation_baseLocation                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetBulletSpeedCPP_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetGravityCPP_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetThrowBaseLocation_baseLocation1                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue1                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSystemSettingFloatValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetCameraRotation_ReturnValue                           (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location1                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation1                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale1                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// struct FRotator                    K2Node_Select_Default                                            (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue2                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANewAimCamera_C*             K2Node_DynamicCast_AsNew_Aim_Camera                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue1                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_CalcShootLocation_ShootLocation                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetLockOnTarget_Target                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize2D_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue1                                (IsPlainOldData, NoDestructor)
// float                              K2Node_MathExpression_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue1               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue1                                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue1                         (IsPlainOldData, NoDestructor)
// float                              K2Node_MathExpression_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DegAtan_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch4                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue2                                (IsPlainOldData, NoDestructor)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue1                              (IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue3                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue2               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTMPOverHeat_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Normal_ReturnValue2                                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalCatchableActorMovement_C::StartAim(const struct FVector& StartAimDirection, enum class ETTLThrowType ThrowType, float DirectionA, const struct FRotator& Temp_struct_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable, const struct FVector& CallFunc_GetThrowBaseLocation_baseLocation, float CallFunc_GetBulletSpeedCPP_ReturnValue, const struct FVector& CallFunc_GetGravityCPP_ReturnValue, const struct FVector& CallFunc_GetThrowBaseLocation_baseLocation1, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_MakeVector_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue1, float CallFunc_GetSystemSettingFloatValue_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, float CallFunc_BreakRotator_Roll1, float CallFunc_BreakRotator_Pitch1, float CallFunc_BreakRotator_Yaw1, const struct FVector& CallFunc_BreakTransform_Location1, const struct FRotator& CallFunc_BreakTransform_Rotation1, const struct FVector& CallFunc_BreakTransform_Scale1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& K2Node_Select_Default, const struct FVector& CallFunc_MakeVector_ReturnValue2, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_Normal_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class ANewAimCamera_C* K2Node_DynamicCast_AsNew_Aim_Camera, bool K2Node_DynamicCast_bSuccess1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue1, const struct FVector& CallFunc_CalcShootLocation_ShootLocation, class AActor* CallFunc_GetLockOnTarget_Target, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakRotator_Roll2, float CallFunc_BreakRotator_Pitch2, float CallFunc_BreakRotator_Yaw2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_VSize2D_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue1, float K2Node_MathExpression_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue1, float K2Node_MathExpression_ReturnValue1, float CallFunc_BreakRotator_Roll3, float CallFunc_BreakRotator_Pitch3, float CallFunc_BreakRotator_Yaw3, float K2Node_MathExpression_ReturnValue2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue3, float CallFunc_DegAtan_ReturnValue, float CallFunc_BreakRotator_Roll4, float CallFunc_BreakRotator_Pitch4, float CallFunc_BreakRotator_Yaw4, float CallFunc_Subtract_FloatFloat_ReturnValue1, const struct FRotator& CallFunc_MakeRotator_ReturnValue2, float CallFunc_Abs_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue3, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue2, bool CallFunc_IsTMPOverHeat_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "StartAim");

	Params::UArsenalCatchableActorMovement_C_StartAim_Params Parms{};

	Parms.StartAimDirection = StartAimDirection;
	Parms.ThrowType = ThrowType;
	Parms.DirectionA = DirectionA;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetThrowBaseLocation_baseLocation = CallFunc_GetThrowBaseLocation_baseLocation;
	Parms.CallFunc_GetBulletSpeedCPP_ReturnValue = CallFunc_GetBulletSpeedCPP_ReturnValue;
	Parms.CallFunc_GetGravityCPP_ReturnValue = CallFunc_GetGravityCPP_ReturnValue;
	Parms.CallFunc_GetThrowBaseLocation_baseLocation1 = CallFunc_GetThrowBaseLocation_baseLocation1;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue1 = CallFunc_MakeVector_ReturnValue1;
	Parms.CallFunc_GetSystemSettingFloatValue_ReturnValue = CallFunc_GetSystemSettingFloatValue_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetCameraRotation_ReturnValue = CallFunc_GetCameraRotation_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll1 = CallFunc_BreakRotator_Roll1;
	Parms.CallFunc_BreakRotator_Pitch1 = CallFunc_BreakRotator_Pitch1;
	Parms.CallFunc_BreakRotator_Yaw1 = CallFunc_BreakRotator_Yaw1;
	Parms.CallFunc_BreakTransform_Location1 = CallFunc_BreakTransform_Location1;
	Parms.CallFunc_BreakTransform_Rotation1 = CallFunc_BreakTransform_Rotation1;
	Parms.CallFunc_BreakTransform_Scale1 = CallFunc_BreakTransform_Scale1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeVector_ReturnValue2 = CallFunc_MakeVector_ReturnValue2;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue = CallFunc_GreaterGreater_VectorRotator_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsNew_Aim_Camera = K2Node_DynamicCast_AsNew_Aim_Camera;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue1 = CallFunc_K2_GetComponentLocation_ReturnValue1;
	Parms.CallFunc_CalcShootLocation_ShootLocation = CallFunc_CalcShootLocation_ShootLocation;
	Parms.CallFunc_GetLockOnTarget_Target = CallFunc_GetLockOnTarget_Target;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakRotator_Roll2 = CallFunc_BreakRotator_Roll2;
	Parms.CallFunc_BreakRotator_Pitch2 = CallFunc_BreakRotator_Pitch2;
	Parms.CallFunc_BreakRotator_Yaw2 = CallFunc_BreakRotator_Yaw2;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue1 = CallFunc_Add_FloatFloat_ReturnValue1;
	Parms.CallFunc_VSize2D_ReturnValue = CallFunc_VSize2D_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue1 = CallFunc_MakeRotator_ReturnValue1;
	Parms.K2Node_MathExpression_ReturnValue = K2Node_MathExpression_ReturnValue;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue1 = CallFunc_GreaterGreater_VectorRotator_ReturnValue1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue1 = CallFunc_Normal_ReturnValue1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue1 = CallFunc_Divide_FloatFloat_ReturnValue1;
	Parms.CallFunc_FindLookAtRotation_ReturnValue1 = CallFunc_FindLookAtRotation_ReturnValue1;
	Parms.K2Node_MathExpression_ReturnValue1 = K2Node_MathExpression_ReturnValue1;
	Parms.CallFunc_BreakRotator_Roll3 = CallFunc_BreakRotator_Roll3;
	Parms.CallFunc_BreakRotator_Pitch3 = CallFunc_BreakRotator_Pitch3;
	Parms.CallFunc_BreakRotator_Yaw3 = CallFunc_BreakRotator_Yaw3;
	Parms.K2Node_MathExpression_ReturnValue2 = K2Node_MathExpression_ReturnValue2;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue3 = CallFunc_Multiply_FloatFloat_ReturnValue3;
	Parms.CallFunc_DegAtan_ReturnValue = CallFunc_DegAtan_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll4 = CallFunc_BreakRotator_Roll4;
	Parms.CallFunc_BreakRotator_Pitch4 = CallFunc_BreakRotator_Pitch4;
	Parms.CallFunc_BreakRotator_Yaw4 = CallFunc_BreakRotator_Yaw4;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue1 = CallFunc_Subtract_FloatFloat_ReturnValue1;
	Parms.CallFunc_MakeRotator_ReturnValue2 = CallFunc_MakeRotator_ReturnValue2;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue1 = CallFunc_MakeTransform_ReturnValue1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue3 = CallFunc_MakeRotator_ReturnValue3;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue2 = CallFunc_GreaterGreater_VectorRotator_ReturnValue2;
	Parms.CallFunc_IsTMPOverHeat_ReturnValue = CallFunc_IsTMPOverHeat_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue2 = CallFunc_Normal_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.StartCatchActor
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CaughtTarget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLeft                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLThrowType           ThrowType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalCatchableActorMovement_C::StartCatchActor(class AActor* CaughtTarget, bool IsLeft, enum class ETTLThrowType ThrowType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "StartCatchActor");

	Params::UArsenalCatchableActorMovement_C_StartCatchActor_Params Parms{};

	Parms.CaughtTarget = CaughtTarget;
	Parms.IsLeft = IsLeft;
	Parms.ThrowType = ThrowType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.ThrowActor
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsMultiplayBattleMission_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetThrowBaseLocation_baseLocation                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCatchingGrenadeCPP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetBulletSpeedCPP_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLWeaponBase*              K2Node_DynamicCast_AsTTLWeapon_Base                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCatchableActor_C*           CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckBulletInfinityMode_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalCatchableActorMovement_C::ThrowActor(bool CallFunc_IsMultiplayBattleMission_ReturnValue, const struct FVector& CallFunc_GetThrowBaseLocation_baseLocation, bool CallFunc_IsCatchingGrenadeCPP_ReturnValue, float CallFunc_GetBulletSpeedCPP_ReturnValue, class ATTLWeaponBase* K2Node_DynamicCast_AsTTLWeapon_Base, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess1, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue1, class UCatchableActor_C* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_SelectFloat_ReturnValue2, class AActor* CallFunc_GetOwner_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue2, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character1, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CheckBulletInfinityMode_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "ThrowActor");

	Params::UArsenalCatchableActorMovement_C_ThrowActor_Params Parms{};

	Parms.CallFunc_IsMultiplayBattleMission_ReturnValue = CallFunc_IsMultiplayBattleMission_ReturnValue;
	Parms.CallFunc_GetThrowBaseLocation_baseLocation = CallFunc_GetThrowBaseLocation_baseLocation;
	Parms.CallFunc_IsCatchingGrenadeCPP_ReturnValue = CallFunc_IsCatchingGrenadeCPP_ReturnValue;
	Parms.CallFunc_GetBulletSpeedCPP_ReturnValue = CallFunc_GetBulletSpeedCPP_ReturnValue;
	Parms.K2Node_DynamicCast_AsTTLWeapon_Base = K2Node_DynamicCast_AsTTLWeapon_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue1 = CallFunc_SelectFloat_ReturnValue1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue2 = CallFunc_SelectFloat_ReturnValue2;
	Parms.CallFunc_GetOwner_ReturnValue1 = CallFunc_GetOwner_ReturnValue1;
	Parms.CallFunc_GetOwner_ReturnValue2 = CallFunc_GetOwner_ReturnValue2;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue = CallFunc_IsLocallyControlledPlayer_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Character1 = K2Node_DynamicCast_AsBase_Character1;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CheckBulletInfinityMode_ReturnValue = CallFunc_CheckBulletInfinityMode_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.RunOnServerStartCatch
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CaughtActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLeft                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLThrowType           ThrowType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalCatchableActorMovement_C::RunOnServerStartCatch(class AActor* CaughtActor, bool IsLeft, enum class ETTLThrowType ThrowType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "RunOnServerStartCatch");

	Params::UArsenalCatchableActorMovement_C_RunOnServerStartCatch_Params Parms{};

	Parms.CaughtActor = CaughtActor;
	Parms.IsLeft = IsLeft;
	Parms.ThrowType = ThrowType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.MulticastStartCatch
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CaughtActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLeft                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLThrowType           ThrowType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalCatchableActorMovement_C::MulticastStartCatch(class AActor* CaughtActor, bool IsLeft, enum class ETTLThrowType ThrowType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "MulticastStartCatch");

	Params::UArsenalCatchableActorMovement_C_MulticastStartCatch_Params Parms{};

	Parms.CaughtActor = CaughtActor;
	Parms.IsLeft = IsLeft;
	Parms.ThrowType = ThrowType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.TTLBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UArsenalCatchableActorMovement_C::TTLBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "TTLBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.OnDamageReactionTransportBP
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalCatchableActorMovement_C::OnDamageReactionTransportBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "OnDamageReactionTransportBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.CallReleaseForStun
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalCatchableActorMovement_C::CallReleaseForStun()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "CallReleaseForStun");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.NotifyPutDownAndEnd
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalCatchableActorMovement_C::NotifyPutDownAndEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "NotifyPutDownAndEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.CancelAllCatchableMovement
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalCatchableActorMovement_C::CancelAllCatchableMovement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "CancelAllCatchableMovement");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.ForceCancelBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalCatchableActorMovement_C::ForceCancelBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "ForceCancelBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.OnStartDamageReaction_Main
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETTLDamageState         DamageState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalCatchableActorMovement_C::OnStartDamageReaction_Main(enum class ETTLDamageState DamageState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "OnStartDamageReaction_Main");

	Params::UArsenalCatchableActorMovement_C_OnStartDamageReaction_Main_Params Parms{};

	Parms.DamageState = DamageState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.CatchActorBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UArsenalCatchableActorMovement_C::CatchActorBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "CatchActorBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.OnCompletelyDestroyedParts_¤ÙóÈ_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETTLDestroyablePartsTypePartsType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalCatchableActorMovement_C::OnCompletelyDestroyedParts______0(enum class ETTLDestroyablePartsType PartsType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "OnCompletelyDestroyedParts_¤ÙóÈ_0");

	Params::UArsenalCatchableActorMovement_C_OnCompletelyDestroyedParts______0_Params Parms{};

	Parms.PartsType = PartsType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.OnNotifyExecCancelAimBP
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalCatchableActorMovement_C::OnNotifyExecCancelAimBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "OnNotifyExecCancelAimBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.OnNotifyExecThrowBP
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsLeft                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsHandWeapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     TargetPos                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Direction                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLThrowType           ThrowType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalCatchableActorMovement_C::OnNotifyExecThrowBP(bool IsLeft, bool IsHandWeapon, struct FVector& TargetPos, struct FVector& Direction, enum class ETTLThrowType ThrowType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "OnNotifyExecThrowBP");

	Params::UArsenalCatchableActorMovement_C_OnNotifyExecThrowBP_Params Parms{};

	Parms.IsLeft = IsLeft;
	Parms.IsHandWeapon = IsHandWeapon;
	Parms.TargetPos = TargetPos;
	Parms.Direction = Direction;
	Parms.ThrowType = ThrowType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.CallTryRelinquishActor
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeft                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalCatchableActorMovement_C::CallTryRelinquishActor(bool IsLeft)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "CallTryRelinquishActor");

	Params::UArsenalCatchableActorMovement_C_CallTryRelinquishActor_Params Parms{};

	Parms.IsLeft = IsLeft;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.StartCatchActorCPP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CaughtTarget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLeft                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLThrowType           ThrowType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalCatchableActorMovement_C::StartCatchActorCPP(class AActor* CaughtTarget, bool IsLeft, enum class ETTLThrowType ThrowType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "StartCatchActorCPP");

	Params::UArsenalCatchableActorMovement_C_StartCatchActorCPP_Params Parms{};

	Parms.CaughtTarget = CaughtTarget;
	Parms.IsLeft = IsLeft;
	Parms.ThrowType = ThrowType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.CallStartAimForOuterPunchThrow
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Direction                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalCatchableActorMovement_C::CallStartAimForOuterPunchThrow(struct FVector& Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "CallStartAimForOuterPunchThrow");

	Params::UArsenalCatchableActorMovement_C_CallStartAimForOuterPunchThrow_Params Parms{};

	Parms.Direction = Direction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalCatchableActorMovement.ArsenalCatchableActorMovement_C.ExecuteUbergraph_ArsenalCatchableActorMovement
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_direction                                           (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_CaughtActor1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsLeft1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLThrowType           K2Node_CustomEvent_throwType1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryStartAim_isStartAim                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_CaughtActor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsLeft                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLThrowType           K2Node_CustomEvent_throwType                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCatchableActor_C*           CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLGameState*               K2Node_DynamicCast_AsTTLGame_State                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOuterCharacter_C*           K2Node_DynamicCast_AsOuter_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOuter_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCatchableActor_C*           CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLDamageState         K2Node_Event_damageState                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSystemSettingFloatValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLDestroyablePartsTypeK2Node_CustomEvent_partsType                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTTLArsenalDestroyPartsComponent*CallFunc_GetComponentByClass_ReturnValue2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCatchingGrenadeCPP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsLeft2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_isHandWeapon                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Event_targetPos                                           (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_direction1                                          (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLThrowType           K2Node_Event_throwType1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryCatchWeaponCpp_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCatchableActor_C*           CallFunc_GetComponentByClass_ReturnValue3                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGrenade_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLCharacterCommon*         K2Node_DynamicCast_AsTTLCharacter_Common                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLWeaponBase*              CallFunc_GetCurrentLeftCaughtWeapon_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLWeaponBase*              CallFunc_GetCurrentRightCaughtWeapon_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLCloseRangeWeapon*        K2Node_DynamicCast_AsTTLClose_Range_Weapon                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLCloseRangeWeapon*        K2Node_DynamicCast_AsTTLClose_Range_Weapon1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess6                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_isLeft1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ChangeArsenalParameter_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryForceCancelCatchMotion_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_caughtTarget                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isLeft                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLThrowType           K2Node_Event_throwType                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckStartCatchStatus_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue1                              (ZeroConstructor, HasGetValueTypeHash)

void UArsenalCatchableActorMovement_C::ExecuteUbergraph_ArsenalCatchableActorMovement(int32 EntryPoint, const struct FVector& K2Node_Event_direction, class AActor* K2Node_CustomEvent_CaughtActor1, bool K2Node_CustomEvent_IsLeft1, enum class ETTLThrowType K2Node_CustomEvent_throwType1, bool CallFunc_TryStartAim_isStartAim, class AActor* K2Node_CustomEvent_CaughtActor, bool K2Node_CustomEvent_IsLeft, enum class ETTLThrowType K2Node_CustomEvent_throwType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UCatchableActor_C* CallFunc_GetComponentByClass_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ATTLGameState* K2Node_DynamicCast_AsTTLGame_State, bool K2Node_DynamicCast_bSuccess, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess1, class AActor* CallFunc_GetOwner_ReturnValue1, class AOuterCharacter_C* K2Node_DynamicCast_AsOuter_Character, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_IsOuter_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue2, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue3, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_IsLocallyControlledPlayer_ReturnValue1, bool CallFunc_IsValid_ReturnValue, class UCatchableActor_C* CallFunc_GetComponentByClass_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, enum class ETTLDamageState K2Node_Event_damageState, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, class FName CallFunc_MakeLiteralName_ReturnValue, float CallFunc_GetSystemSettingFloatValue_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue4, enum class ETTLDestroyablePartsType K2Node_CustomEvent_partsType, class UTTLArsenalDestroyPartsComponent* CallFunc_GetComponentByClass_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsCatchingGrenadeCPP_ReturnValue, bool K2Node_Event_IsLeft2, bool K2Node_Event_isHandWeapon, const struct FVector& K2Node_Event_targetPos, const struct FVector& K2Node_Event_direction1, enum class ETTLThrowType K2Node_Event_throwType1, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, bool CallFunc_TryCatchWeaponCpp_ReturnValue, bool CallFunc_IsValid_ReturnValue3, class UCatchableActor_C* CallFunc_GetComponentByClass_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_IsGrenade_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue5, class ATTLCharacterCommon* K2Node_DynamicCast_AsTTLCharacter_Common, bool K2Node_DynamicCast_bSuccess4, class ATTLWeaponBase* CallFunc_GetCurrentLeftCaughtWeapon_ReturnValue, class ATTLWeaponBase* CallFunc_GetCurrentRightCaughtWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsValid_ReturnValue5, class ATTLCloseRangeWeapon* K2Node_DynamicCast_AsTTLClose_Range_Weapon, bool K2Node_DynamicCast_bSuccess5, class ATTLCloseRangeWeapon* K2Node_DynamicCast_AsTTLClose_Range_Weapon1, bool K2Node_DynamicCast_bSuccess6, bool K2Node_Event_isLeft1, bool CallFunc_ChangeArsenalParameter_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_TryForceCancelCatchMotion_ReturnValue, class AActor* K2Node_Event_caughtTarget, bool K2Node_Event_isLeft, enum class ETTLThrowType K2Node_Event_throwType, bool CallFunc_CheckStartCatchStatus_ReturnValue, bool CallFunc_IsValid_ReturnValue6, const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue3, const class FString& CallFunc_Concat_StrStr_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalCatchableActorMovement_C", "ExecuteUbergraph_ArsenalCatchableActorMovement");

	Params::UArsenalCatchableActorMovement_C_ExecuteUbergraph_ArsenalCatchableActorMovement_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_direction = K2Node_Event_direction;
	Parms.K2Node_CustomEvent_CaughtActor1 = K2Node_CustomEvent_CaughtActor1;
	Parms.K2Node_CustomEvent_IsLeft1 = K2Node_CustomEvent_IsLeft1;
	Parms.K2Node_CustomEvent_throwType1 = K2Node_CustomEvent_throwType1;
	Parms.CallFunc_TryStartAim_isStartAim = CallFunc_TryStartAim_isStartAim;
	Parms.K2Node_CustomEvent_CaughtActor = K2Node_CustomEvent_CaughtActor;
	Parms.K2Node_CustomEvent_IsLeft = K2Node_CustomEvent_IsLeft;
	Parms.K2Node_CustomEvent_throwType = K2Node_CustomEvent_throwType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsTTLGame_State = K2Node_DynamicCast_AsTTLGame_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GetOwner_ReturnValue1 = CallFunc_GetOwner_ReturnValue1;
	Parms.K2Node_DynamicCast_AsOuter_Character = K2Node_DynamicCast_AsOuter_Character;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_IsOuter_ReturnValue = CallFunc_IsOuter_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue2 = CallFunc_GetOwner_ReturnValue2;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue = CallFunc_IsLocallyControlledPlayer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwner_ReturnValue3 = CallFunc_GetOwner_ReturnValue3;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue1 = CallFunc_IsLocallyControlledPlayer_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.K2Node_Event_damageState = K2Node_Event_damageState;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetSystemSettingFloatValue_ReturnValue = CallFunc_GetSystemSettingFloatValue_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue4 = CallFunc_GetOwner_ReturnValue4;
	Parms.K2Node_CustomEvent_partsType = K2Node_CustomEvent_partsType;
	Parms.CallFunc_GetComponentByClass_ReturnValue2 = CallFunc_GetComponentByClass_ReturnValue2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue3 = CallFunc_EqualEqual_ByteByte_ReturnValue3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsCatchingGrenadeCPP_ReturnValue = CallFunc_IsCatchingGrenadeCPP_ReturnValue;
	Parms.K2Node_Event_IsLeft2 = K2Node_Event_IsLeft2;
	Parms.K2Node_Event_isHandWeapon = K2Node_Event_isHandWeapon;
	Parms.K2Node_Event_targetPos = K2Node_Event_targetPos;
	Parms.K2Node_Event_direction1 = K2Node_Event_direction1;
	Parms.K2Node_Event_throwType1 = K2Node_Event_throwType1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue4 = CallFunc_EqualEqual_ByteByte_ReturnValue4;
	Parms.CallFunc_TryCatchWeaponCpp_ReturnValue = CallFunc_TryCatchWeaponCpp_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_GetComponentByClass_ReturnValue3 = CallFunc_GetComponentByClass_ReturnValue3;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_IsGrenade_ReturnValue = CallFunc_IsGrenade_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_GetOwner_ReturnValue5 = CallFunc_GetOwner_ReturnValue5;
	Parms.K2Node_DynamicCast_AsTTLCharacter_Common = K2Node_DynamicCast_AsTTLCharacter_Common;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_GetCurrentLeftCaughtWeapon_ReturnValue = CallFunc_GetCurrentLeftCaughtWeapon_ReturnValue;
	Parms.CallFunc_GetCurrentRightCaughtWeapon_ReturnValue = CallFunc_GetCurrentRightCaughtWeapon_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.K2Node_DynamicCast_AsTTLClose_Range_Weapon = K2Node_DynamicCast_AsTTLClose_Range_Weapon;
	Parms.K2Node_DynamicCast_bSuccess5 = K2Node_DynamicCast_bSuccess5;
	Parms.K2Node_DynamicCast_AsTTLClose_Range_Weapon1 = K2Node_DynamicCast_AsTTLClose_Range_Weapon1;
	Parms.K2Node_DynamicCast_bSuccess6 = K2Node_DynamicCast_bSuccess6;
	Parms.K2Node_Event_isLeft1 = K2Node_Event_isLeft1;
	Parms.CallFunc_ChangeArsenalParameter_ReturnValue = CallFunc_ChangeArsenalParameter_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_TryForceCancelCatchMotion_ReturnValue = CallFunc_TryForceCancelCatchMotion_ReturnValue;
	Parms.K2Node_Event_caughtTarget = K2Node_Event_caughtTarget;
	Parms.K2Node_Event_isLeft = K2Node_Event_isLeft;
	Parms.K2Node_Event_throwType = K2Node_Event_throwType;
	Parms.CallFunc_CheckStartCatchStatus_ReturnValue = CallFunc_CheckStartCatchStatus_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue6 = CallFunc_IsValid_ReturnValue6;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;
	Parms.CallFunc_Concat_StrStr_ReturnValue1 = CallFunc_Concat_StrStr_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


