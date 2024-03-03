#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EarlyBlendOut_NotifyState.EarlyBlendOut_NotifyState_C
// (None)

class UClass* UEarlyBlendOut_NotifyState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EarlyBlendOut_NotifyState_C");

	return Clss;
}


// EarlyBlendOut_NotifyState_C EarlyBlendOut_NotifyState.Default__EarlyBlendOut_NotifyState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEarlyBlendOut_NotifyState_C* UEarlyBlendOut_NotifyState_C::GetDefaultObj()
{
	static class UEarlyBlendOut_NotifyState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEarlyBlendOut_NotifyState_C*>(UEarlyBlendOut_NotifyState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EarlyBlendOut_NotifyState.EarlyBlendOut_NotifyState_C.GetNotifyName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UEarlyBlendOut_NotifyState_C::GetNotifyName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EarlyBlendOut_NotifyState_C", "GetNotifyName");

	Params::UEarlyBlendOut_NotifyState_C_GetNotifyName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EarlyBlendOut_NotifyState.EarlyBlendOut_NotifyState_C.Received_NotifyTick
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FrameDeltaTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      OwningActor                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               AnimInstance                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IALS_Character_BPI_C>K2Node_DynamicCast_AsALS_Character_BPI                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMovementMode           CallFunc_BPI_Get_CurrentStates_PawnMovementMode                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EALS_MovementState      CallFunc_BPI_Get_CurrentStates_MovementState                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EALS_MovementState      CallFunc_BPI_Get_CurrentStates_PrevMovementState                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EALS_MovementAction     CallFunc_BPI_Get_CurrentStates_MovementAction                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EALS_RotationMode       CallFunc_BPI_Get_CurrentStates_RotationMode                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EALS_Gait               CallFunc_BPI_Get_CurrentStates_ActualGait                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EALS_Stance             CallFunc_BPI_Get_CurrentStates_ActualStance                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EALS_ViewMode           CallFunc_BPI_Get_CurrentStates_ViewMode                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EALS_OverlayState       CallFunc_BPI_Get_CurrentStates_OverlayState                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IALS_Character_BPI_C>K2Node_DynamicCast_AsALS_Character_BPI_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IALS_Character_BPI_C>K2Node_DynamicCast_AsALS_Character_BPI_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMovementMode           CallFunc_BPI_Get_CurrentStates_PawnMovementMode_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EALS_MovementState      CallFunc_BPI_Get_CurrentStates_MovementState_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EALS_MovementState      CallFunc_BPI_Get_CurrentStates_PrevMovementState_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EALS_MovementAction     CallFunc_BPI_Get_CurrentStates_MovementAction_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EALS_RotationMode       CallFunc_BPI_Get_CurrentStates_RotationMode_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EALS_Gait               CallFunc_BPI_Get_CurrentStates_ActualGait_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EALS_Stance             CallFunc_BPI_Get_CurrentStates_ActualStance_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EALS_ViewMode           CallFunc_BPI_Get_CurrentStates_ViewMode_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EALS_OverlayState       CallFunc_BPI_Get_CurrentStates_OverlayState_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BPI_Get_EssentialValues_Velocity                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BPI_Get_EssentialValues_Acceleration                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BPI_Get_EssentialValues_MovementInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BPI_Get_EssentialValues_IsMoving                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BPI_Get_EssentialValues_HasMovementInput                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BPI_Get_EssentialValues_Speed                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BPI_Get_EssentialValues_MovementInputAmount             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BPI_Get_EssentialValues_AimingRotation                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BPI_Get_EssentialValues_AimYawRate                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UEarlyBlendOut_NotifyState_C::Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, class AActor* OwningActor, class UAnimInstance* AnimInstance, class AActor* CallFunc_GetOwner_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, TScriptInterface<class IALS_Character_BPI_C> K2Node_DynamicCast_AsALS_Character_BPI, bool K2Node_DynamicCast_bSuccess, enum class EMovementMode CallFunc_BPI_Get_CurrentStates_PawnMovementMode, enum class EALS_MovementState CallFunc_BPI_Get_CurrentStates_MovementState, enum class EALS_MovementState CallFunc_BPI_Get_CurrentStates_PrevMovementState, enum class EALS_MovementAction CallFunc_BPI_Get_CurrentStates_MovementAction, enum class EALS_RotationMode CallFunc_BPI_Get_CurrentStates_RotationMode, enum class EALS_Gait CallFunc_BPI_Get_CurrentStates_ActualGait, enum class EALS_Stance CallFunc_BPI_Get_CurrentStates_ActualStance, enum class EALS_ViewMode CallFunc_BPI_Get_CurrentStates_ViewMode, enum class EALS_OverlayState CallFunc_BPI_Get_CurrentStates_OverlayState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TScriptInterface<class IALS_Character_BPI_C> K2Node_DynamicCast_AsALS_Character_BPI_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IALS_Character_BPI_C> K2Node_DynamicCast_AsALS_Character_BPI_2, bool K2Node_DynamicCast_bSuccess_2, enum class EMovementMode CallFunc_BPI_Get_CurrentStates_PawnMovementMode_1, enum class EALS_MovementState CallFunc_BPI_Get_CurrentStates_MovementState_1, enum class EALS_MovementState CallFunc_BPI_Get_CurrentStates_PrevMovementState_1, enum class EALS_MovementAction CallFunc_BPI_Get_CurrentStates_MovementAction_1, enum class EALS_RotationMode CallFunc_BPI_Get_CurrentStates_RotationMode_1, enum class EALS_Gait CallFunc_BPI_Get_CurrentStates_ActualGait_1, enum class EALS_Stance CallFunc_BPI_Get_CurrentStates_ActualStance_1, enum class EALS_ViewMode CallFunc_BPI_Get_CurrentStates_ViewMode_1, enum class EALS_OverlayState CallFunc_BPI_Get_CurrentStates_OverlayState_1, const struct FVector& CallFunc_BPI_Get_EssentialValues_Velocity, const struct FVector& CallFunc_BPI_Get_EssentialValues_Acceleration, const struct FVector& CallFunc_BPI_Get_EssentialValues_MovementInput, bool CallFunc_BPI_Get_EssentialValues_IsMoving, bool CallFunc_BPI_Get_EssentialValues_HasMovementInput, float CallFunc_BPI_Get_EssentialValues_Speed, float CallFunc_BPI_Get_EssentialValues_MovementInputAmount, const struct FRotator& CallFunc_BPI_Get_EssentialValues_AimingRotation, float CallFunc_BPI_Get_EssentialValues_AimYawRate, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EarlyBlendOut_NotifyState_C", "Received_NotifyTick");

	Params::UEarlyBlendOut_NotifyState_C_Received_NotifyTick_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.FrameDeltaTime = FrameDeltaTime;
	Parms.OwningActor = OwningActor;
	Parms.AnimInstance = AnimInstance;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsALS_Character_BPI = K2Node_DynamicCast_AsALS_Character_BPI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BPI_Get_CurrentStates_PawnMovementMode = CallFunc_BPI_Get_CurrentStates_PawnMovementMode;
	Parms.CallFunc_BPI_Get_CurrentStates_MovementState = CallFunc_BPI_Get_CurrentStates_MovementState;
	Parms.CallFunc_BPI_Get_CurrentStates_PrevMovementState = CallFunc_BPI_Get_CurrentStates_PrevMovementState;
	Parms.CallFunc_BPI_Get_CurrentStates_MovementAction = CallFunc_BPI_Get_CurrentStates_MovementAction;
	Parms.CallFunc_BPI_Get_CurrentStates_RotationMode = CallFunc_BPI_Get_CurrentStates_RotationMode;
	Parms.CallFunc_BPI_Get_CurrentStates_ActualGait = CallFunc_BPI_Get_CurrentStates_ActualGait;
	Parms.CallFunc_BPI_Get_CurrentStates_ActualStance = CallFunc_BPI_Get_CurrentStates_ActualStance;
	Parms.CallFunc_BPI_Get_CurrentStates_ViewMode = CallFunc_BPI_Get_CurrentStates_ViewMode;
	Parms.CallFunc_BPI_Get_CurrentStates_OverlayState = CallFunc_BPI_Get_CurrentStates_OverlayState;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_DynamicCast_AsALS_Character_BPI_1 = K2Node_DynamicCast_AsALS_Character_BPI_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsALS_Character_BPI_2 = K2Node_DynamicCast_AsALS_Character_BPI_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_BPI_Get_CurrentStates_PawnMovementMode_1 = CallFunc_BPI_Get_CurrentStates_PawnMovementMode_1;
	Parms.CallFunc_BPI_Get_CurrentStates_MovementState_1 = CallFunc_BPI_Get_CurrentStates_MovementState_1;
	Parms.CallFunc_BPI_Get_CurrentStates_PrevMovementState_1 = CallFunc_BPI_Get_CurrentStates_PrevMovementState_1;
	Parms.CallFunc_BPI_Get_CurrentStates_MovementAction_1 = CallFunc_BPI_Get_CurrentStates_MovementAction_1;
	Parms.CallFunc_BPI_Get_CurrentStates_RotationMode_1 = CallFunc_BPI_Get_CurrentStates_RotationMode_1;
	Parms.CallFunc_BPI_Get_CurrentStates_ActualGait_1 = CallFunc_BPI_Get_CurrentStates_ActualGait_1;
	Parms.CallFunc_BPI_Get_CurrentStates_ActualStance_1 = CallFunc_BPI_Get_CurrentStates_ActualStance_1;
	Parms.CallFunc_BPI_Get_CurrentStates_ViewMode_1 = CallFunc_BPI_Get_CurrentStates_ViewMode_1;
	Parms.CallFunc_BPI_Get_CurrentStates_OverlayState_1 = CallFunc_BPI_Get_CurrentStates_OverlayState_1;
	Parms.CallFunc_BPI_Get_EssentialValues_Velocity = CallFunc_BPI_Get_EssentialValues_Velocity;
	Parms.CallFunc_BPI_Get_EssentialValues_Acceleration = CallFunc_BPI_Get_EssentialValues_Acceleration;
	Parms.CallFunc_BPI_Get_EssentialValues_MovementInput = CallFunc_BPI_Get_EssentialValues_MovementInput;
	Parms.CallFunc_BPI_Get_EssentialValues_IsMoving = CallFunc_BPI_Get_EssentialValues_IsMoving;
	Parms.CallFunc_BPI_Get_EssentialValues_HasMovementInput = CallFunc_BPI_Get_EssentialValues_HasMovementInput;
	Parms.CallFunc_BPI_Get_EssentialValues_Speed = CallFunc_BPI_Get_EssentialValues_Speed;
	Parms.CallFunc_BPI_Get_EssentialValues_MovementInputAmount = CallFunc_BPI_Get_EssentialValues_MovementInputAmount;
	Parms.CallFunc_BPI_Get_EssentialValues_AimingRotation = CallFunc_BPI_Get_EssentialValues_AimingRotation;
	Parms.CallFunc_BPI_Get_EssentialValues_AimYawRate = CallFunc_BPI_Get_EssentialValues_AimYawRate;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


