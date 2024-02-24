#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RALS_Character_BPI.RALS_Character_BPI_C
// (None)

class UClass* IRALS_Character_BPI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RALS_Character_BPI_C");

	return Clss;
}


// RALS_Character_BPI_C RALS_Character_BPI.Default__RALS_Character_BPI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IRALS_Character_BPI_C* IRALS_Character_BPI_C::GetDefaultObj()
{
	static class IRALS_Character_BPI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IRALS_Character_BPI_C*>(IRALS_Character_BPI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RALS_Character_BPI.RALS_Character_BPI_C.BPI_Set_OverlayState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERALS_OverlayState      NewOverlayState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IRALS_Character_BPI_C::BPI_Set_OverlayState(enum class ERALS_OverlayState NewOverlayState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RALS_Character_BPI_C", "BPI_Set_OverlayState");

	Params::IRALS_Character_BPI_C_BPI_Set_OverlayState_Params Parms{};

	Parms.NewOverlayState = NewOverlayState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RALS_Character_BPI.RALS_Character_BPI_C.BPI_Set_ViewMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERALS_ViewMode          NewViewMode                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IRALS_Character_BPI_C::BPI_Set_ViewMode(enum class ERALS_ViewMode NewViewMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RALS_Character_BPI_C", "BPI_Set_ViewMode");

	Params::IRALS_Character_BPI_C_BPI_Set_ViewMode_Params Parms{};

	Parms.NewViewMode = NewViewMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RALS_Character_BPI.RALS_Character_BPI_C.BPI_Set_Gait
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERALS_Gait              NewGait                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IRALS_Character_BPI_C::BPI_Set_Gait(enum class ERALS_Gait NewGait)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RALS_Character_BPI_C", "BPI_Set_Gait");

	Params::IRALS_Character_BPI_C_BPI_Set_Gait_Params Parms{};

	Parms.NewGait = NewGait;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RALS_Character_BPI.RALS_Character_BPI_C.BPI_Set_RotationMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERALS_RotationMode      NewRotationMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IRALS_Character_BPI_C::BPI_Set_RotationMode(enum class ERALS_RotationMode NewRotationMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RALS_Character_BPI_C", "BPI_Set_RotationMode");

	Params::IRALS_Character_BPI_C_BPI_Set_RotationMode_Params Parms{};

	Parms.NewRotationMode = NewRotationMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RALS_Character_BPI.RALS_Character_BPI_C.BPI_Set_MovementAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERALS_MovementAction    NewMovementAction                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IRALS_Character_BPI_C::BPI_Set_MovementAction(enum class ERALS_MovementAction NewMovementAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RALS_Character_BPI_C", "BPI_Set_MovementAction");

	Params::IRALS_Character_BPI_C_BPI_Set_MovementAction_Params Parms{};

	Parms.NewMovementAction = NewMovementAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RALS_Character_BPI.RALS_Character_BPI_C.BPI_Set_MovementState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERALSMovementState      NewMovementState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IRALS_Character_BPI_C::BPI_Set_MovementState(enum class ERALSMovementState NewMovementState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RALS_Character_BPI_C", "BPI_Set_MovementState");

	Params::IRALS_Character_BPI_C_BPI_Set_MovementState_Params Parms{};

	Parms.NewMovementState = NewMovementState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RALS_Character_BPI.RALS_Character_BPI_C.BPI_Get_EssentialValues
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Velocity                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Acceleration                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     MovementInput                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsMoving                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasMovementInput                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Speed                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MovementInputAmount                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    AimingRotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             AimYawRate                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IRALS_Character_BPI_C::BPI_Get_EssentialValues(struct FVector* Velocity, struct FVector* Acceleration, struct FVector* MovementInput, bool* IsMoving, bool* HasMovementInput, double* Speed, double* MovementInputAmount, struct FRotator* AimingRotation, double* AimYawRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RALS_Character_BPI_C", "BPI_Get_EssentialValues");

	Params::IRALS_Character_BPI_C_BPI_Get_EssentialValues_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Velocity != nullptr)
		*Velocity = std::move(Parms.Velocity);

	if (Acceleration != nullptr)
		*Acceleration = std::move(Parms.Acceleration);

	if (MovementInput != nullptr)
		*MovementInput = std::move(Parms.MovementInput);

	if (IsMoving != nullptr)
		*IsMoving = Parms.IsMoving;

	if (HasMovementInput != nullptr)
		*HasMovementInput = Parms.HasMovementInput;

	if (Speed != nullptr)
		*Speed = Parms.Speed;

	if (MovementInputAmount != nullptr)
		*MovementInputAmount = Parms.MovementInputAmount;

	if (AimingRotation != nullptr)
		*AimingRotation = std::move(Parms.AimingRotation);

	if (AimYawRate != nullptr)
		*AimYawRate = Parms.AimYawRate;

}


// Function RALS_Character_BPI.RALS_Character_BPI_C.BPI_Get_CurrentStates
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMovementMode           PawnMovementMode                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERALSMovementState      MovementState                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERALSMovementState      PrevMovementState                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERALS_MovementAction    MovementAction                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERALS_RotationMode      RotationMode                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERALS_Gait              ActualGait                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERALS_Stance            ActualStance                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERALS_ViewMode          ViewMode                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERALS_OverlayState      OverlayState                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IRALS_Character_BPI_C::BPI_Get_CurrentStates(enum class EMovementMode* PawnMovementMode, enum class ERALSMovementState* MovementState, enum class ERALSMovementState* PrevMovementState, enum class ERALS_MovementAction* MovementAction, enum class ERALS_RotationMode* RotationMode, enum class ERALS_Gait* ActualGait, enum class ERALS_Stance* ActualStance, enum class ERALS_ViewMode* ViewMode, enum class ERALS_OverlayState* OverlayState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RALS_Character_BPI_C", "BPI_Get_CurrentStates");

	Params::IRALS_Character_BPI_C_BPI_Get_CurrentStates_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PawnMovementMode != nullptr)
		*PawnMovementMode = Parms.PawnMovementMode;

	if (MovementState != nullptr)
		*MovementState = Parms.MovementState;

	if (PrevMovementState != nullptr)
		*PrevMovementState = Parms.PrevMovementState;

	if (MovementAction != nullptr)
		*MovementAction = Parms.MovementAction;

	if (RotationMode != nullptr)
		*RotationMode = Parms.RotationMode;

	if (ActualGait != nullptr)
		*ActualGait = Parms.ActualGait;

	if (ActualStance != nullptr)
		*ActualStance = Parms.ActualStance;

	if (ViewMode != nullptr)
		*ViewMode = Parms.ViewMode;

	if (OverlayState != nullptr)
		*OverlayState = Parms.OverlayState;

}

}


