#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_AnimatableCharacter.BPI_AnimatableCharacter_C
// (None)

class UClass* IBPI_AnimatableCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_AnimatableCharacter_C");

	return Clss;
}


// BPI_AnimatableCharacter_C BPI_AnimatableCharacter.Default__BPI_AnimatableCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_AnimatableCharacter_C* IBPI_AnimatableCharacter_C::GetDefaultObj()
{
	static class IBPI_AnimatableCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_AnimatableCharacter_C*>(IBPI_AnimatableCharacter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_AnimatableCharacter.BPI_AnimatableCharacter_C.UpdateAnimBPValues
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsMoving                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsInAir                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsMinHealth                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bActiveBlendspace                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bHasTarget                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bHasMovementInput                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsAiming                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Direction                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ForwardSpeed                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             TargetToCharacterRotationDifference                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MovementInputToVelocityDifference                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AimYawDelta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AimYawRate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TargetLocation                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Velocity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CharacterRotation                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FRotator                    LastVelocityRotation                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FRotator                    LastMovementInputRotation                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FRotator                    LookingRotation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// enum class EAlertnessLevelType     AlertnessLevel                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AnimatableCharacter_C::UpdateAnimBPValues(bool& bIsMoving, bool& bIsInAir, bool& bIsMinHealth, bool& bActiveBlendspace, bool& bHasTarget, bool& bHasMovementInput, bool& bIsAiming, double& Direction, double& ForwardSpeed, double& TargetToCharacterRotationDifference, double& MovementInputToVelocityDifference, double& AimYawDelta, double& AimYawRate, struct FVector& TargetLocation, struct FVector& Velocity, struct FRotator& CharacterRotation, struct FRotator& LastVelocityRotation, struct FRotator& LastMovementInputRotation, struct FRotator& LookingRotation, enum class EAlertnessLevelType& AlertnessLevel, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AnimatableCharacter_C", "UpdateAnimBPValues");

	Params::IBPI_AnimatableCharacter_C_UpdateAnimBPValues_Params Parms{};

	Parms.bIsMoving = bIsMoving;
	Parms.bIsInAir = bIsInAir;
	Parms.bIsMinHealth = bIsMinHealth;
	Parms.bActiveBlendspace = bActiveBlendspace;
	Parms.bHasTarget = bHasTarget;
	Parms.bHasMovementInput = bHasMovementInput;
	Parms.bIsAiming = bIsAiming;
	Parms.Direction = Direction;
	Parms.ForwardSpeed = ForwardSpeed;
	Parms.TargetToCharacterRotationDifference = TargetToCharacterRotationDifference;
	Parms.MovementInputToVelocityDifference = MovementInputToVelocityDifference;
	Parms.AimYawDelta = AimYawDelta;
	Parms.AimYawRate = AimYawRate;
	Parms.TargetLocation = TargetLocation;
	Parms.Velocity = Velocity;
	Parms.CharacterRotation = CharacterRotation;
	Parms.LastVelocityRotation = LastVelocityRotation;
	Parms.LastMovementInputRotation = LastMovementInputRotation;
	Parms.LookingRotation = LookingRotation;
	Parms.AlertnessLevel = AlertnessLevel;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}

}


