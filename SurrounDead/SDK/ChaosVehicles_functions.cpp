#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ChaosVehicles.ChaosVehicleMovementComponent
// (None)

class UClass* UChaosVehicleMovementComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosVehicleMovementComponent");

	return Clss;
}


// ChaosVehicleMovementComponent ChaosVehicles.Default__ChaosVehicleMovementComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UChaosVehicleMovementComponent* UChaosVehicleMovementComponent::GetDefaultObj()
{
	static class UChaosVehicleMovementComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosVehicleMovementComponent*>(UChaosVehicleMovementComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function ChaosVehicles.ChaosVehicleMovementComponent.SetYawInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Yaw                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosVehicleMovementComponent::SetYawInput(float Yaw)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "SetYawInput");

	Params::UChaosVehicleMovementComponent_SetYawInput_Params Parms{};

	Parms.Yaw = Yaw;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.SetUseAutomaticGears
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bUseAuto                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosVehicleMovementComponent::SetUseAutomaticGears(bool bUseAuto)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "SetUseAutomaticGears");

	Params::UChaosVehicleMovementComponent_SetUseAutomaticGears_Params Parms{};

	Parms.bUseAuto = bUseAuto;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.SetThrottleInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Throttle                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosVehicleMovementComponent::SetThrottleInput(float Throttle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "SetThrottleInput");

	Params::UChaosVehicleMovementComponent_SetThrottleInput_Params Parms{};

	Parms.Throttle = Throttle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.SetTargetGear
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              GearNum                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bImmediate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosVehicleMovementComponent::SetTargetGear(int32 GearNum, bool bImmediate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "SetTargetGear");

	Params::UChaosVehicleMovementComponent_SetTargetGear_Params Parms{};

	Parms.GearNum = GearNum;
	Parms.bImmediate = bImmediate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.SetSteeringInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Steering                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosVehicleMovementComponent::SetSteeringInput(float Steering)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "SetSteeringInput");

	Params::UChaosVehicleMovementComponent_SetSteeringInput_Params Parms{};

	Parms.Steering = Steering;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.SetSleeping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnableSleep                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosVehicleMovementComponent::SetSleeping(bool bEnableSleep)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "SetSleeping");

	Params::UChaosVehicleMovementComponent_SetSleeping_Params Parms{};

	Parms.bEnableSleep = bEnableSleep;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.SetRollInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Roll                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosVehicleMovementComponent::SetRollInput(float Roll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "SetRollInput");

	Params::UChaosVehicleMovementComponent_SetRollInput_Params Parms{};

	Parms.Roll = Roll;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.SetRequiresControllerForInputs
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bRequiresController                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosVehicleMovementComponent::SetRequiresControllerForInputs(bool bRequiresController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "SetRequiresControllerForInputs");

	Params::UChaosVehicleMovementComponent_SetRequiresControllerForInputs_Params Parms{};

	Parms.bRequiresController = bRequiresController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.SetPitchInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Pitch                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosVehicleMovementComponent::SetPitchInput(float Pitch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "SetPitchInput");

	Params::UChaosVehicleMovementComponent_SetPitchInput_Params Parms{};

	Parms.Pitch = Pitch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.SetParked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bParked                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosVehicleMovementComponent::SetParked(bool bParked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "SetParked");

	Params::UChaosVehicleMovementComponent_SetParked_Params Parms{};

	Parms.bParked = bParked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.SetHandbrakeInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewHandbrake                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosVehicleMovementComponent::SetHandbrakeInput(bool bNewHandbrake)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "SetHandbrakeInput");

	Params::UChaosVehicleMovementComponent_SetHandbrakeInput_Params Parms{};

	Parms.bNewHandbrake = bNewHandbrake;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.SetChangeUpInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewGearUp                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosVehicleMovementComponent::SetChangeUpInput(bool bNewGearUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "SetChangeUpInput");

	Params::UChaosVehicleMovementComponent_SetChangeUpInput_Params Parms{};

	Parms.bNewGearUp = bNewGearUp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.SetChangeDownInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewGearDown                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosVehicleMovementComponent::SetChangeDownInput(bool bNewGearDown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "SetChangeDownInput");

	Params::UChaosVehicleMovementComponent_SetChangeDownInput_Params Parms{};

	Parms.bNewGearDown = bNewGearDown;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.SetBrakeInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Brake                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosVehicleMovementComponent::SetBrakeInput(float Brake)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "SetBrakeInput");

	Params::UChaosVehicleMovementComponent_SetBrakeInput_Params Parms{};

	Parms.Brake = Brake;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.ServerUpdateState
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// float                              InSteeringInput                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InThrottleInput                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InBrakeInput                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InHandbrakeInput                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InCurrentGear                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InRollInput                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InPitchInput                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InYawInput                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosVehicleMovementComponent::ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32 InCurrentGear, float InRollInput, float InPitchInput, float InYawInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "ServerUpdateState");

	Params::UChaosVehicleMovementComponent_ServerUpdateState_Params Parms{};

	Parms.InSteeringInput = InSteeringInput;
	Parms.InThrottleInput = InThrottleInput;
	Parms.InBrakeInput = InBrakeInput;
	Parms.InHandbrakeInput = InHandbrakeInput;
	Parms.InCurrentGear = InCurrentGear;
	Parms.InRollInput = InRollInput;
	Parms.InPitchInput = InPitchInput;
	Parms.InYawInput = InYawInput;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.ResetVehicle
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UChaosVehicleMovementComponent::ResetVehicle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "ResetVehicle");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.IsParked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UChaosVehicleMovementComponent::IsParked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "IsParked");

	Params::UChaosVehicleMovementComponent_IsParked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.IncreaseThrottleInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ThrottleDelta                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosVehicleMovementComponent::IncreaseThrottleInput(float ThrottleDelta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "IncreaseThrottleInput");

	Params::UChaosVehicleMovementComponent_IncreaseThrottleInput_Params Parms{};

	Parms.ThrottleDelta = ThrottleDelta;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.GetUseAutoGears
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UChaosVehicleMovementComponent::GetUseAutoGears()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "GetUseAutoGears");

	Params::UChaosVehicleMovementComponent_GetUseAutoGears_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.GetThrottleInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UChaosVehicleMovementComponent::GetThrottleInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "GetThrottleInput");

	Params::UChaosVehicleMovementComponent_GetThrottleInput_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.GetTargetGear
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UChaosVehicleMovementComponent::GetTargetGear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "GetTargetGear");

	Params::UChaosVehicleMovementComponent_GetTargetGear_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.GetSteeringInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UChaosVehicleMovementComponent::GetSteeringInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "GetSteeringInput");

	Params::UChaosVehicleMovementComponent_GetSteeringInput_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.GetHandbrakeInput
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UChaosVehicleMovementComponent::GetHandbrakeInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "GetHandbrakeInput");

	Params::UChaosVehicleMovementComponent_GetHandbrakeInput_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.GetForwardSpeedMPH
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UChaosVehicleMovementComponent::GetForwardSpeedMPH()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "GetForwardSpeedMPH");

	Params::UChaosVehicleMovementComponent_GetForwardSpeedMPH_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.GetForwardSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UChaosVehicleMovementComponent::GetForwardSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "GetForwardSpeed");

	Params::UChaosVehicleMovementComponent_GetForwardSpeed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.GetCurrentGear
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UChaosVehicleMovementComponent::GetCurrentGear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "GetCurrentGear");

	Params::UChaosVehicleMovementComponent_GetCurrentGear_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.GetBrakeInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UChaosVehicleMovementComponent::GetBrakeInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "GetBrakeInput");

	Params::UChaosVehicleMovementComponent_GetBrakeInput_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.EnableSelfRighting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InState                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosVehicleMovementComponent::EnableSelfRighting(bool InState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "EnableSelfRighting");

	Params::UChaosVehicleMovementComponent_EnableSelfRighting_Params Parms{};

	Parms.InState = InState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.DecreaseThrottleInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ThrottleDelta                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosVehicleMovementComponent::DecreaseThrottleInput(float ThrottleDelta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "DecreaseThrottleInput");

	Params::UChaosVehicleMovementComponent_DecreaseThrottleInput_Params Parms{};

	Parms.ThrottleDelta = ThrottleDelta;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ChaosVehicles.ChaosVehicleWheel
// (None)

class UClass* UChaosVehicleWheel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosVehicleWheel");

	return Clss;
}


// ChaosVehicleWheel ChaosVehicles.Default__ChaosVehicleWheel
// (Public, ClassDefaultObject, ArchetypeObject)

class UChaosVehicleWheel* UChaosVehicleWheel::GetDefaultObj()
{
	static class UChaosVehicleWheel* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosVehicleWheel*>(UChaosVehicleWheel::StaticClass()->DefaultObject);

	return Default;
}


// Function ChaosVehicles.ChaosVehicleWheel.IsInAir
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UChaosVehicleWheel::IsInAir()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleWheel", "IsInAir");

	Params::UChaosVehicleWheel_IsInAir_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosVehicleWheel.GetWheelRadius
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UChaosVehicleWheel::GetWheelRadius()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleWheel", "GetWheelRadius");

	Params::UChaosVehicleWheel_GetWheelRadius_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosVehicleWheel.GetWheelAngularVelocity
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UChaosVehicleWheel::GetWheelAngularVelocity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleWheel", "GetWheelAngularVelocity");

	Params::UChaosVehicleWheel_GetWheelAngularVelocity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosVehicleWheel.GetSuspensionOffset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UChaosVehicleWheel::GetSuspensionOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleWheel", "GetSuspensionOffset");

	Params::UChaosVehicleWheel_GetSuspensionOffset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosVehicleWheel.GetSuspensionAxis
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UChaosVehicleWheel::GetSuspensionAxis()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleWheel", "GetSuspensionAxis");

	Params::UChaosVehicleWheel_GetSuspensionAxis_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosVehicleWheel.GetSteerAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UChaosVehicleWheel::GetSteerAngle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleWheel", "GetSteerAngle");

	Params::UChaosVehicleWheel_GetSteerAngle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosVehicleWheel.GetRotationAngularVelocity
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UChaosVehicleWheel::GetRotationAngularVelocity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleWheel", "GetRotationAngularVelocity");

	Params::UChaosVehicleWheel_GetRotationAngularVelocity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosVehicleWheel.GetRotationAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UChaosVehicleWheel::GetRotationAngle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleWheel", "GetRotationAngle");

	Params::UChaosVehicleWheel_GetRotationAngle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosVehicleWheel.GetAxleType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EAxleType               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EAxleType UChaosVehicleWheel::GetAxleType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleWheel", "GetAxleType");

	Params::UChaosVehicleWheel_GetAxleType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ChaosVehicles.ChaosWheeledVehicleMovementComponent
// (None)

class UClass* UChaosWheeledVehicleMovementComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosWheeledVehicleMovementComponent");

	return Clss;
}


// ChaosWheeledVehicleMovementComponent ChaosVehicles.Default__ChaosWheeledVehicleMovementComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UChaosWheeledVehicleMovementComponent* UChaosWheeledVehicleMovementComponent::GetDefaultObj()
{
	static class UChaosWheeledVehicleMovementComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosWheeledVehicleMovementComponent*>(UChaosWheeledVehicleMovementComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelSlipGraphMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              WheelIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Multiplier                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosWheeledVehicleMovementComponent::SetWheelSlipGraphMultiplier(int32 WheelIndex, float Multiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "SetWheelSlipGraphMultiplier");

	Params::UChaosWheeledVehicleMovementComponent_SetWheelSlipGraphMultiplier_Params Parms{};

	Parms.WheelIndex = WheelIndex;
	Parms.Multiplier = Multiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              WheelIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosWheeledVehicleMovementComponent::SetWheelRadius(int32 WheelIndex, float Radius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "SetWheelRadius");

	Params::UChaosWheeledVehicleMovementComponent_SetWheelRadius_Params Parms{};

	Parms.WheelIndex = WheelIndex;
	Parms.Radius = Radius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelMaxSteerAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              WheelIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AngleDegrees                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosWheeledVehicleMovementComponent::SetWheelMaxSteerAngle(int32 WheelIndex, float AngleDegrees)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "SetWheelMaxSteerAngle");

	Params::UChaosWheeledVehicleMovementComponent_SetWheelMaxSteerAngle_Params Parms{};

	Parms.WheelIndex = WheelIndex;
	Parms.AngleDegrees = AngleDegrees;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelMaxBrakeTorque
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              WheelIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Torque                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosWheeledVehicleMovementComponent::SetWheelMaxBrakeTorque(int32 WheelIndex, float Torque)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "SetWheelMaxBrakeTorque");

	Params::UChaosWheeledVehicleMovementComponent_SetWheelMaxBrakeTorque_Params Parms{};

	Parms.WheelIndex = WheelIndex;
	Parms.Torque = Torque;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelHandbrakeTorque
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              WheelIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Torque                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosWheeledVehicleMovementComponent::SetWheelHandbrakeTorque(int32 WheelIndex, float Torque)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "SetWheelHandbrakeTorque");

	Params::UChaosWheeledVehicleMovementComponent_SetWheelHandbrakeTorque_Params Parms{};

	Parms.WheelIndex = WheelIndex;
	Parms.Torque = Torque;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelFrictionMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              WheelIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Friction                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosWheeledVehicleMovementComponent::SetWheelFrictionMultiplier(int32 WheelIndex, float Friction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "SetWheelFrictionMultiplier");

	Params::UChaosWheeledVehicleMovementComponent_SetWheelFrictionMultiplier_Params Parms{};

	Parms.WheelIndex = WheelIndex;
	Parms.Friction = Friction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              WheelIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UChaosVehicleWheel>InWheelClass                                                     (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosWheeledVehicleMovementComponent::SetWheelClass(int32 WheelIndex, TSubclassOf<class UChaosVehicleWheel> InWheelClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "SetWheelClass");

	Params::UChaosWheeledVehicleMovementComponent_SetWheelClass_Params Parms{};

	Parms.WheelIndex = WheelIndex;
	Parms.InWheelClass = InWheelClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetTractionControlEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              WheelIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Enabled                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosWheeledVehicleMovementComponent::SetTractionControlEnabled(int32 WheelIndex, bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "SetTractionControlEnabled");

	Params::UChaosWheeledVehicleMovementComponent_SetTractionControlEnabled_Params Parms{};

	Parms.WheelIndex = WheelIndex;
	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetTorqueCombineMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETorqueCombineMethod    InCombineMethod                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              WheelIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosWheeledVehicleMovementComponent::SetTorqueCombineMethod(enum class ETorqueCombineMethod InCombineMethod, int32 WheelIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "SetTorqueCombineMethod");

	Params::UChaosWheeledVehicleMovementComponent_SetTorqueCombineMethod_Params Parms{};

	Parms.InCombineMethod = InCombineMethod;
	Parms.WheelIndex = WheelIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetSuspensionParams
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Rate                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damping                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Preload                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxRaise                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxDrop                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              WheelIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosWheeledVehicleMovementComponent::SetSuspensionParams(float Rate, float Damping, float Preload, float MaxRaise, float MaxDrop, int32 WheelIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "SetSuspensionParams");

	Params::UChaosWheeledVehicleMovementComponent_SetSuspensionParams_Params Parms{};

	Parms.Rate = Rate;
	Parms.Damping = Damping;
	Parms.Preload = Preload;
	Parms.MaxRaise = MaxRaise;
	Parms.MaxDrop = MaxDrop;
	Parms.WheelIndex = WheelIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetSnapshot
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FWheeledSnaphotData         SnapshotIn                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UChaosWheeledVehicleMovementComponent::SetSnapshot(struct FWheeledSnaphotData& SnapshotIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "SetSnapshot");

	Params::UChaosWheeledVehicleMovementComponent_SetSnapshot_Params Parms{};

	Parms.SnapshotIn = SnapshotIn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetMaxEngineTorque
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Torque                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosWheeledVehicleMovementComponent::SetMaxEngineTorque(float Torque)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "SetMaxEngineTorque");

	Params::UChaosWheeledVehicleMovementComponent_SetMaxEngineTorque_Params Parms{};

	Parms.Torque = Torque;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetDriveTorque
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DriveTorque                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              WheelIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosWheeledVehicleMovementComponent::SetDriveTorque(float DriveTorque, int32 WheelIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "SetDriveTorque");

	Params::UChaosWheeledVehicleMovementComponent_SetDriveTorque_Params Parms{};

	Parms.DriveTorque = DriveTorque;
	Parms.WheelIndex = WheelIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetDragCoefficient
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DragCoeff                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosWheeledVehicleMovementComponent::SetDragCoefficient(float DragCoeff)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "SetDragCoefficient");

	Params::UChaosWheeledVehicleMovementComponent_SetDragCoefficient_Params Parms{};

	Parms.DragCoeff = DragCoeff;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetDownforceCoefficient
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DownforceCoeff                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosWheeledVehicleMovementComponent::SetDownforceCoefficient(float DownforceCoeff)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "SetDownforceCoefficient");

	Params::UChaosWheeledVehicleMovementComponent_SetDownforceCoefficient_Params Parms{};

	Parms.DownforceCoeff = DownforceCoeff;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetDifferentialFrontRearSplit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FrontRearSlpit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosWheeledVehicleMovementComponent::SetDifferentialFrontRearSplit(float FrontRearSlpit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "SetDifferentialFrontRearSplit");

	Params::UChaosWheeledVehicleMovementComponent_SetDifferentialFrontRearSplit_Params Parms{};

	Parms.FrontRearSlpit = FrontRearSlpit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetBrakeTorque
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              BrakeTorque                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              WheelIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosWheeledVehicleMovementComponent::SetBrakeTorque(float BrakeTorque, int32 WheelIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "SetBrakeTorque");

	Params::UChaosWheeledVehicleMovementComponent_SetBrakeTorque_Params Parms{};

	Parms.BrakeTorque = BrakeTorque;
	Parms.WheelIndex = WheelIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetAffectedBySteering
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              WheelIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Enabled                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosWheeledVehicleMovementComponent::SetAffectedBySteering(int32 WheelIndex, bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "SetAffectedBySteering");

	Params::UChaosWheeledVehicleMovementComponent_SetAffectedBySteering_Params Parms{};

	Parms.WheelIndex = WheelIndex;
	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetAffectedByHandbrake
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              WheelIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Enabled                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosWheeledVehicleMovementComponent::SetAffectedByHandbrake(int32 WheelIndex, bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "SetAffectedByHandbrake");

	Params::UChaosWheeledVehicleMovementComponent_SetAffectedByHandbrake_Params Parms{};

	Parms.WheelIndex = WheelIndex;
	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetAffectedByEngine
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              WheelIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Enabled                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosWheeledVehicleMovementComponent::SetAffectedByEngine(int32 WheelIndex, bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "SetAffectedByEngine");

	Params::UChaosWheeledVehicleMovementComponent_SetAffectedByEngine_Params Parms{};

	Parms.WheelIndex = WheelIndex;
	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetAffectedByBrake
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              WheelIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Enabled                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosWheeledVehicleMovementComponent::SetAffectedByBrake(int32 WheelIndex, bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "SetAffectedByBrake");

	Params::UChaosWheeledVehicleMovementComponent_SetAffectedByBrake_Params Parms{};

	Parms.WheelIndex = WheelIndex;
	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetABSEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              WheelIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Enabled                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosWheeledVehicleMovementComponent::SetABSEnabled(int32 WheelIndex, bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "SetABSEnabled");

	Params::UChaosWheeledVehicleMovementComponent_SetABSEnabled_Params Parms{};

	Parms.WheelIndex = WheelIndex;
	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.MakeWheelStatus
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               bInContact                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ContactPoint                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPhysicalMaterial*           PhysMaterial                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NormalizedSuspensionLength                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SpringForce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SlipAngle                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsSlipping                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SlipMagnitude                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsSkidding                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SkidMagnitude                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SkidNormal                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DriveTorque                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              BrakeTorque                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bABSActivated                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FWheelStatus                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FWheelStatus UChaosWheeledVehicleMovementComponent::MakeWheelStatus(bool bInContact, struct FVector* ContactPoint, class UPhysicalMaterial* PhysMaterial, float NormalizedSuspensionLength, float SpringForce, float SlipAngle, bool bIsSlipping, float SlipMagnitude, bool bIsSkidding, float SkidMagnitude, struct FVector* SkidNormal, float DriveTorque, float BrakeTorque, bool bABSActivated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "MakeWheelStatus");

	Params::UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Params Parms{};

	Parms.bInContact = bInContact;
	Parms.PhysMaterial = PhysMaterial;
	Parms.NormalizedSuspensionLength = NormalizedSuspensionLength;
	Parms.SpringForce = SpringForce;
	Parms.SlipAngle = SlipAngle;
	Parms.bIsSlipping = bIsSlipping;
	Parms.SlipMagnitude = SlipMagnitude;
	Parms.bIsSkidding = bIsSkidding;
	Parms.SkidMagnitude = SkidMagnitude;
	Parms.DriveTorque = DriveTorque;
	Parms.BrakeTorque = BrakeTorque;
	Parms.bABSActivated = bABSActivated;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ContactPoint != nullptr)
		*ContactPoint = std::move(Parms.ContactPoint);

	if (SkidNormal != nullptr)
		*SkidNormal = std::move(Parms.SkidNormal);

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.MakeWheelSnapshot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              SuspensionOffset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              WheelRotationAngle                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SteeringAngle                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              WheelRadius                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              WheelAngularVelocity                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FWheelSnapshot              ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FWheelSnapshot UChaosWheeledVehicleMovementComponent::MakeWheelSnapshot(float SuspensionOffset, float WheelRotationAngle, float SteeringAngle, float WheelRadius, float WheelAngularVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "MakeWheelSnapshot");

	Params::UChaosWheeledVehicleMovementComponent_MakeWheelSnapshot_Params Parms{};

	Parms.SuspensionOffset = SuspensionOffset;
	Parms.WheelRotationAngle = WheelRotationAngle;
	Parms.SteeringAngle = SteeringAngle;
	Parms.WheelRadius = WheelRadius;
	Parms.WheelAngularVelocity = WheelAngularVelocity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.MakeWheeledSnapshot
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LinearVelocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     AngularVelocity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SelectedGear                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EngineRPM                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FWheelSnapshot>      WheelSnapshots                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FWheeledSnaphotData         ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FWheeledSnaphotData UChaosWheeledVehicleMovementComponent::MakeWheeledSnapshot(const struct FTransform& Transform, const struct FVector& LinearVelocity, const struct FVector& AngularVelocity, int32 SelectedGear, float EngineRPM, TArray<struct FWheelSnapshot>& WheelSnapshots)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "MakeWheeledSnapshot");

	Params::UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Params Parms{};

	Parms.Transform = Transform;
	Parms.LinearVelocity = LinearVelocity;
	Parms.AngularVelocity = AngularVelocity;
	Parms.SelectedGear = SelectedGear;
	Parms.EngineRPM = EngineRPM;
	Parms.WheelSnapshots = WheelSnapshots;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetWheelState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              WheelIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FWheelStatus                ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

struct FWheelStatus UChaosWheeledVehicleMovementComponent::GetWheelState(int32 WheelIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "GetWheelState");

	Params::UChaosWheeledVehicleMovementComponent_GetWheelState_Params Parms{};

	Parms.WheelIndex = WheelIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetSnapshot
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FWheeledSnaphotData         ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FWheeledSnaphotData UChaosWheeledVehicleMovementComponent::GetSnapshot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "GetSnapshot");

	Params::UChaosWheeledVehicleMovementComponent_GetSnapshot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetNumWheels
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UChaosWheeledVehicleMovementComponent::GetNumWheels()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "GetNumWheels");

	Params::UChaosWheeledVehicleMovementComponent_GetNumWheels_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetEngineRotationSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UChaosWheeledVehicleMovementComponent::GetEngineRotationSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "GetEngineRotationSpeed");

	Params::UChaosWheeledVehicleMovementComponent_GetEngineRotationSpeed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UChaosWheeledVehicleMovementComponent::GetEngineMaxRotationSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "GetEngineMaxRotationSpeed");

	Params::UChaosWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.EnableWheelFriction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InState                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosWheeledVehicleMovementComponent::EnableWheelFriction(bool InState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "EnableWheelFriction");

	Params::UChaosWheeledVehicleMovementComponent_EnableWheelFriction_Params Parms{};

	Parms.InState = InState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.EnableSuspension
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InState                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosWheeledVehicleMovementComponent::EnableSuspension(bool InState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "EnableSuspension");

	Params::UChaosWheeledVehicleMovementComponent_EnableSuspension_Params Parms{};

	Parms.InState = InState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.EnableMechanicalSim
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InState                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosWheeledVehicleMovementComponent::EnableMechanicalSim(bool InState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "EnableMechanicalSim");

	Params::UChaosWheeledVehicleMovementComponent_EnableMechanicalSim_Params Parms{};

	Parms.InState = InState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.BreakWheelStatus
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWheelStatus                Status                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bInContact                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ContactPoint                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPhysicalMaterial*           PhysMaterial                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NormalizedSuspensionLength                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SpringForce                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SlipAngle                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsSlipping                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SlipMagnitude                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsSkidding                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SkidMagnitude                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SkidNormal                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DriveTorque                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              BrakeTorque                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bABSActivated                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosWheeledVehicleMovementComponent::BreakWheelStatus(struct FWheelStatus& Status, bool* bInContact, struct FVector* ContactPoint, class UPhysicalMaterial** PhysMaterial, float* NormalizedSuspensionLength, float* SpringForce, float* SlipAngle, bool* bIsSlipping, float* SlipMagnitude, bool* bIsSkidding, float* SkidMagnitude, struct FVector* SkidNormal, float* DriveTorque, float* BrakeTorque, bool* bABSActivated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "BreakWheelStatus");

	Params::UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Params Parms{};

	Parms.Status = Status;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInContact != nullptr)
		*bInContact = Parms.bInContact;

	if (ContactPoint != nullptr)
		*ContactPoint = std::move(Parms.ContactPoint);

	if (PhysMaterial != nullptr)
		*PhysMaterial = Parms.PhysMaterial;

	if (NormalizedSuspensionLength != nullptr)
		*NormalizedSuspensionLength = Parms.NormalizedSuspensionLength;

	if (SpringForce != nullptr)
		*SpringForce = Parms.SpringForce;

	if (SlipAngle != nullptr)
		*SlipAngle = Parms.SlipAngle;

	if (bIsSlipping != nullptr)
		*bIsSlipping = Parms.bIsSlipping;

	if (SlipMagnitude != nullptr)
		*SlipMagnitude = Parms.SlipMagnitude;

	if (bIsSkidding != nullptr)
		*bIsSkidding = Parms.bIsSkidding;

	if (SkidMagnitude != nullptr)
		*SkidMagnitude = Parms.SkidMagnitude;

	if (SkidNormal != nullptr)
		*SkidNormal = std::move(Parms.SkidNormal);

	if (DriveTorque != nullptr)
		*DriveTorque = Parms.DriveTorque;

	if (BrakeTorque != nullptr)
		*BrakeTorque = Parms.BrakeTorque;

	if (bABSActivated != nullptr)
		*bABSActivated = Parms.bABSActivated;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.BreakWheelSnapshot
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWheelSnapshot              Snapshot                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              SuspensionOffset                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              WheelRotationAngle                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SteeringAngle                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              WheelRadius                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              WheelAngularVelocity                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosWheeledVehicleMovementComponent::BreakWheelSnapshot(struct FWheelSnapshot& Snapshot, float* SuspensionOffset, float* WheelRotationAngle, float* SteeringAngle, float* WheelRadius, float* WheelAngularVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "BreakWheelSnapshot");

	Params::UChaosWheeledVehicleMovementComponent_BreakWheelSnapshot_Params Parms{};

	Parms.Snapshot = Snapshot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SuspensionOffset != nullptr)
		*SuspensionOffset = Parms.SuspensionOffset;

	if (WheelRotationAngle != nullptr)
		*WheelRotationAngle = Parms.WheelRotationAngle;

	if (SteeringAngle != nullptr)
		*SteeringAngle = Parms.SteeringAngle;

	if (WheelRadius != nullptr)
		*WheelRadius = Parms.WheelRadius;

	if (WheelAngularVelocity != nullptr)
		*WheelAngularVelocity = Parms.WheelAngularVelocity;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.BreakWheeledSnapshot
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWheeledSnaphotData         Snapshot                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FTransform                  Transform                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LinearVelocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     AngularVelocity                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SelectedGear                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EngineRPM                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FWheelSnapshot>      WheelSnapshots                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UChaosWheeledVehicleMovementComponent::BreakWheeledSnapshot(struct FWheeledSnaphotData& Snapshot, struct FTransform* Transform, struct FVector* LinearVelocity, struct FVector* AngularVelocity, int32* SelectedGear, float* EngineRPM, TArray<struct FWheelSnapshot>* WheelSnapshots)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "BreakWheeledSnapshot");

	Params::UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Params Parms{};

	Parms.Snapshot = Snapshot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (LinearVelocity != nullptr)
		*LinearVelocity = std::move(Parms.LinearVelocity);

	if (AngularVelocity != nullptr)
		*AngularVelocity = std::move(Parms.AngularVelocity);

	if (SelectedGear != nullptr)
		*SelectedGear = Parms.SelectedGear;

	if (EngineRPM != nullptr)
		*EngineRPM = Parms.EngineRPM;

	if (WheelSnapshots != nullptr)
		*WheelSnapshots = std::move(Parms.WheelSnapshots);

}


// Class ChaosVehicles.VehicleAnimationInstance
// (None)

class UClass* UVehicleAnimationInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VehicleAnimationInstance");

	return Clss;
}


// VehicleAnimationInstance ChaosVehicles.Default__VehicleAnimationInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UVehicleAnimationInstance* UVehicleAnimationInstance::GetDefaultObj()
{
	static class UVehicleAnimationInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UVehicleAnimationInstance*>(UVehicleAnimationInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function ChaosVehicles.VehicleAnimationInstance.GetVehicle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AWheeledVehiclePawn*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AWheeledVehiclePawn* UVehicleAnimationInstance::GetVehicle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleAnimationInstance", "GetVehicle");

	Params::UVehicleAnimationInstance_GetVehicle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ChaosVehicles.WheeledVehiclePawn
// (Actor, Pawn)

class UClass* AWheeledVehiclePawn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WheeledVehiclePawn");

	return Clss;
}


// WheeledVehiclePawn ChaosVehicles.Default__WheeledVehiclePawn
// (Public, ClassDefaultObject, ArchetypeObject)

class AWheeledVehiclePawn* AWheeledVehiclePawn::GetDefaultObj()
{
	static class AWheeledVehiclePawn* Default = nullptr;

	if (!Default)
		Default = static_cast<AWheeledVehiclePawn*>(AWheeledVehiclePawn::StaticClass()->DefaultObject);

	return Default;
}

}


