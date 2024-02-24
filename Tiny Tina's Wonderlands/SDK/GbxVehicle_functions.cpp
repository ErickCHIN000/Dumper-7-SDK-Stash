#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxVehicle.TurretMovementComponent
// (None)

class UClass* UTurretMovementComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TurretMovementComponent");

	return Clss;
}


// TurretMovementComponent GbxVehicle.Default__TurretMovementComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UTurretMovementComponent* UTurretMovementComponent::GetDefaultObj()
{
	static class UTurretMovementComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UTurretMovementComponent*>(UTurretMovementComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxVehicle.TurretMovementComponent.UpdateTurretControlDependency
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UTurretMovementComponent::UpdateTurretControlDependency()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TurretMovementComponent", "UpdateTurretControlDependency");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.TurretMovementComponent.UpdateParentInitialOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UTurretMovementComponent::UpdateParentInitialOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TurretMovementComponent", "UpdateParentInitialOffset");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.TurretMovementComponent.SetRotationInputs
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              XValue                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              YValue                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTurretMovementComponent::SetRotationInputs(float XValue, float YValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TurretMovementComponent", "SetRotationInputs");

	Params::UTurretMovementComponent_SetRotationInputs_Params Parms{};

	Parms.XValue = XValue;
	Parms.YValue = YValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.TurretMovementComponent.ServerSetRotationInputs
// (Net, Native, Event, Public, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FVector2D                   InRotationInputs                                                 (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTurretMovementComponent::ServerSetRotationInputs(const struct FVector2D& InRotationInputs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TurretMovementComponent", "ServerSetRotationInputs");

	Params::UTurretMovementComponent_ServerSetRotationInputs_Params Parms{};

	Parms.InRotationInputs = InRotationInputs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxVehicle.Vehicle
// (Actor, Pawn)

class UClass* AVehicle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vehicle");

	return Clss;
}


// Vehicle GbxVehicle.Default__Vehicle
// (Public, ClassDefaultObject, ArchetypeObject)

class AVehicle* AVehicle::GetDefaultObj()
{
	static class AVehicle* Default = nullptr;

	if (!Default)
		Default = static_cast<AVehicle*>(AVehicle::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxVehicle.Vehicle.SetTeam
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UTeam*                       Team                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AVehicle::SetTeam(class UTeam* Team)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicle", "SetTeam");

	Params::AVehicle_SetTeam_Params Parms{};

	Parms.Team = Team;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.Vehicle.RemoveVehiclePart
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVehiclePartData*            CharacterPart                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AVehicle::RemoveVehiclePart(class UVehiclePartData* CharacterPart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicle", "RemoveVehiclePart");

	Params::AVehicle_RemoveVehiclePart_Params Parms{};

	Parms.CharacterPart = CharacterPart;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.Vehicle.OnRep_VehicleParts
// (Final, Native, Protected)
// Parameters:

void AVehicle::OnRep_VehicleParts()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicle", "OnRep_VehicleParts");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.Vehicle.IsPowerSliding
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AVehicle::IsPowerSliding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicle", "IsPowerSliding");

	Params::AVehicle_IsPowerSliding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxVehicle.Vehicle.IsInAir
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AVehicle::IsInAir()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicle", "IsInAir");

	Params::AVehicle_IsInAir_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxVehicle.Vehicle.GetTeamComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTeamComponent*              ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTeamComponent* AVehicle::GetTeamComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicle", "GetTeamComponent");

	Params::AVehicle_GetTeamComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxVehicle.Vehicle.GetTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTeam*                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTeam* AVehicle::GetTeam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicle", "GetTeam");

	Params::AVehicle_GetTeam_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxVehicle.Vehicle.GetTargetingComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTargetingComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTargetingComponent* AVehicle::GetTargetingComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicle", "GetTargetingComponent");

	Params::AVehicle_GetTargetingComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxVehicle.Vehicle.GetTargetableComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTargetableComponent*        ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTargetableComponent* AVehicle::GetTargetableComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicle", "GetTargetableComponent");

	Params::AVehicle_GetTargetableComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxVehicle.Vehicle.GetNumWheelsInAir
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 AVehicle::GetNumWheelsInAir()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicle", "GetNumWheelsInAir");

	Params::AVehicle_GetNumWheelsInAir_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxVehicle.Vehicle.GetEquipedParts
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UVehiclePartData*>    ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class UVehiclePartData*> AVehicle::GetEquipedParts()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicle", "GetEquipedParts");

	Params::AVehicle_GetEquipedParts_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxVehicle.Vehicle.AddVehiclePart
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVehiclePartData*            CharacterPart                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AVehicle::AddVehiclePart(class UVehiclePartData* CharacterPart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicle", "AddVehiclePart");

	Params::AVehicle_AddVehiclePart_Params Parms{};

	Parms.CharacterPart = CharacterPart;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxVehicle.VehicleInventoryBalanceStateComponent
// (None)

class UClass* UVehicleInventoryBalanceStateComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VehicleInventoryBalanceStateComponent");

	return Clss;
}


// VehicleInventoryBalanceStateComponent GbxVehicle.Default__VehicleInventoryBalanceStateComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVehicleInventoryBalanceStateComponent* UVehicleInventoryBalanceStateComponent::GetDefaultObj()
{
	static class UVehicleInventoryBalanceStateComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVehicleInventoryBalanceStateComponent*>(UVehicleInventoryBalanceStateComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxVehicle.VehicleBoostData
// (None)

class UClass* UVehicleBoostData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VehicleBoostData");

	return Clss;
}


// VehicleBoostData GbxVehicle.Default__VehicleBoostData
// (Public, ClassDefaultObject, ArchetypeObject)

class UVehicleBoostData* UVehicleBoostData::GetDefaultObj()
{
	static class UVehicleBoostData* Default = nullptr;

	if (!Default)
		Default = static_cast<UVehicleBoostData*>(UVehicleBoostData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxVehicle.VehicleBoostComponent
// (None)

class UClass* UVehicleBoostComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VehicleBoostComponent");

	return Clss;
}


// VehicleBoostComponent GbxVehicle.Default__VehicleBoostComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVehicleBoostComponent* UVehicleBoostComponent::GetDefaultObj()
{
	static class UVehicleBoostComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVehicleBoostComponent*>(UVehicleBoostComponent::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction GbxVehicle.VehicleBoostComponent.VehicleBoostEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UVehicleBoostComponent::VehicleBoostEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleBoostComponent", "VehicleBoostEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxVehicle.VehicleBoostComponent.StopBoost
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bForce                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVehicleBoostComponent::StopBoost(bool bForce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleBoostComponent", "StopBoost");

	Params::UVehicleBoostComponent_StopBoost_Params Parms{};

	Parms.bForce = bForce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.VehicleBoostComponent.StartBoost
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVehicleBoostComponent::StartBoost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleBoostComponent", "StartBoost");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.VehicleBoostComponent.ResumeBoost
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVehicleBoostComponent::ResumeBoost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleBoostComponent", "ResumeBoost");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.VehicleBoostComponent.RegisterBoostRegenerateEvent
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              BoostTarget                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UDelegateProperty_                 BoostValueReachedDelegate                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UVehicleBoostComponent::RegisterBoostRegenerateEvent(float BoostTarget, UDelegateProperty_& BoostValueReachedDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleBoostComponent", "RegisterBoostRegenerateEvent");

	Params::UVehicleBoostComponent_RegisterBoostRegenerateEvent_Params Parms{};

	Parms.BoostTarget = BoostTarget;
	Parms.BoostValueReachedDelegate = BoostValueReachedDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.VehicleBoostComponent.PauseBoost
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVehicleBoostComponent::PauseBoost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleBoostComponent", "PauseBoost");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.VehicleBoostComponent.OnRep_IsBoosting
// (Final, Native, Protected)
// Parameters:
// bool                               bWasBoosting                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVehicleBoostComponent::OnRep_IsBoosting(bool bWasBoosting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleBoostComponent", "OnRep_IsBoosting");

	Params::UVehicleBoostComponent_OnRep_IsBoosting_Params Parms{};

	Parms.bWasBoosting = bWasBoosting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.VehicleBoostComponent.K2_BoostStopped
// (Event, Protected, BlueprintEvent)
// Parameters:

void UVehicleBoostComponent::K2_BoostStopped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleBoostComponent", "K2_BoostStopped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxVehicle.VehicleBoostComponent.K2_BoostStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UVehicleBoostComponent::K2_BoostStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleBoostComponent", "K2_BoostStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxVehicle.VehicleBoostComponent.GetRelativeBoostSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVehicleBoostComponent::GetRelativeBoostSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleBoostComponent", "GetRelativeBoostSpeed");

	Params::UVehicleBoostComponent_GetRelativeBoostSpeed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxVehicle.VehicleBoostComponent.GetMaxBoostPoolValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVehicleBoostComponent::GetMaxBoostPoolValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleBoostComponent", "GetMaxBoostPoolValue");

	Params::UVehicleBoostComponent_GetMaxBoostPoolValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxVehicle.VehicleBoostComponent.GetCurrentBoostPoolValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVehicleBoostComponent::GetCurrentBoostPoolValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleBoostComponent", "GetCurrentBoostPoolValue");

	Params::UVehicleBoostComponent_GetCurrentBoostPoolValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxVehicle.VehicleBoostComponent.GetCurrentBoostChargesCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UVehicleBoostComponent::GetCurrentBoostChargesCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleBoostComponent", "GetCurrentBoostChargesCount");

	Params::UVehicleBoostComponent_GetCurrentBoostChargesCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxVehicle.VehicleBoostComponent.GetBoostEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVehicleBoostComponent::GetBoostEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleBoostComponent", "GetBoostEnabled");

	Params::UVehicleBoostComponent_GetBoostEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxVehicle.VehicleBoostComponent.GetBoostDirection
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UVehicleBoostComponent::GetBoostDirection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleBoostComponent", "GetBoostDirection");

	Params::UVehicleBoostComponent_GetBoostDirection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxVehicle.VehiclePartData
// (None)

class UClass* UVehiclePartData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VehiclePartData");

	return Clss;
}


// VehiclePartData GbxVehicle.Default__VehiclePartData
// (Public, ClassDefaultObject, ArchetypeObject)

class UVehiclePartData* UVehiclePartData::GetDefaultObj()
{
	static class UVehiclePartData* Default = nullptr;

	if (!Default)
		Default = static_cast<UVehiclePartData*>(UVehiclePartData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxVehicle.VehicleAirControlComponent
// (None)

class UClass* UVehicleAirControlComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VehicleAirControlComponent");

	return Clss;
}


// VehicleAirControlComponent GbxVehicle.Default__VehicleAirControlComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVehicleAirControlComponent* UVehicleAirControlComponent::GetDefaultObj()
{
	static class UVehicleAirControlComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVehicleAirControlComponent*>(UVehicleAirControlComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxVehicle.VehicleContactPtModifierInterface
// (None)

class UClass* IVehicleContactPtModifierInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VehicleContactPtModifierInterface");

	return Clss;
}


// VehicleContactPtModifierInterface GbxVehicle.Default__VehicleContactPtModifierInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IVehicleContactPtModifierInterface* IVehicleContactPtModifierInterface::GetDefaultObj()
{
	static class IVehicleContactPtModifierInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IVehicleContactPtModifierInterface*>(IVehicleContactPtModifierInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxVehicle.VehicleDigiThrustComponent
// (None)

class UClass* UVehicleDigiThrustComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VehicleDigiThrustComponent");

	return Clss;
}


// VehicleDigiThrustComponent GbxVehicle.Default__VehicleDigiThrustComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVehicleDigiThrustComponent* UVehicleDigiThrustComponent::GetDefaultObj()
{
	static class UVehicleDigiThrustComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVehicleDigiThrustComponent*>(UVehicleDigiThrustComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxVehicle.VehicleDigiThrustComponent.SetTeleportDirection
// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, BlueprintCallable, NetValidate)
// Parameters:
// struct FVector                     WantedDirection                                                  (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVehicleDigiThrustComponent::SetTeleportDirection(struct FVector& WantedDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleDigiThrustComponent", "SetTeleportDirection");

	Params::UVehicleDigiThrustComponent_SetTeleportDirection_Params Parms{};

	Parms.WantedDirection = WantedDirection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.VehicleDigiThrustComponent.RequestTeleport
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVehicleDigiThrustComponent::RequestTeleport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleDigiThrustComponent", "RequestTeleport");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.VehicleDigiThrustComponent.NetMulticast_OnDigiThrustStarted
// (Net, Native, Event, NetMulticast, Public)
// Parameters:

void UVehicleDigiThrustComponent::NetMulticast_OnDigiThrustStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleDigiThrustComponent", "NetMulticast_OnDigiThrustStarted");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.VehicleDigiThrustComponent.NetMulticast_OnDigiThrustEndFinished
// (Net, Native, Event, NetMulticast, Public)
// Parameters:

void UVehicleDigiThrustComponent::NetMulticast_OnDigiThrustEndFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleDigiThrustComponent", "NetMulticast_OnDigiThrustEndFinished");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.VehicleDigiThrustComponent.NetMulticast_OnDigiThrustEnd
// (Net, Native, Event, NetMulticast, Public)
// Parameters:

void UVehicleDigiThrustComponent::NetMulticast_OnDigiThrustEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleDigiThrustComponent", "NetMulticast_OnDigiThrustEnd");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.VehicleDigiThrustComponent.NetMulticast_OnDigiThrustCollision
// (Net, Native, Event, NetMulticast, Public)
// Parameters:

void UVehicleDigiThrustComponent::NetMulticast_OnDigiThrustCollision()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleDigiThrustComponent", "NetMulticast_OnDigiThrustCollision");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.VehicleDigiThrustComponent.IsTeleporting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVehicleDigiThrustComponent::IsTeleporting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleDigiThrustComponent", "IsTeleporting");

	Params::UVehicleDigiThrustComponent_IsTeleporting_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxVehicle.VehicleDigiThrustComponent.GetMaxBoostPoolValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVehicleDigiThrustComponent::GetMaxBoostPoolValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleDigiThrustComponent", "GetMaxBoostPoolValue");

	Params::UVehicleDigiThrustComponent_GetMaxBoostPoolValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxVehicle.VehicleDigiThrustComponent.GetCurrentBoostPoolValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVehicleDigiThrustComponent::GetCurrentBoostPoolValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleDigiThrustComponent", "GetCurrentBoostPoolValue");

	Params::UVehicleDigiThrustComponent_GetCurrentBoostPoolValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction GbxVehicle.VehicleDigiThrustComponent.DigiThrustEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UVehicleDigiThrustComponent::DigiThrustEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleDigiThrustComponent", "DigiThrustEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Class GbxVehicle.VehicleFlightComponent
// (None)

class UClass* UVehicleFlightComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VehicleFlightComponent");

	return Clss;
}


// VehicleFlightComponent GbxVehicle.Default__VehicleFlightComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVehicleFlightComponent* UVehicleFlightComponent::GetDefaultObj()
{
	static class UVehicleFlightComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVehicleFlightComponent*>(UVehicleFlightComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxVehicle.VehicleHitchAttachPtComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UVehicleHitchAttachPtComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VehicleHitchAttachPtComponent");

	return Clss;
}


// VehicleHitchAttachPtComponent GbxVehicle.Default__VehicleHitchAttachPtComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVehicleHitchAttachPtComponent* UVehicleHitchAttachPtComponent::GetDefaultObj()
{
	static class UVehicleHitchAttachPtComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVehicleHitchAttachPtComponent*>(UVehicleHitchAttachPtComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxVehicle.VehicleHitchAttachPtComponent.IsAttached
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVehicleHitchAttachPtComponent::IsAttached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleHitchAttachPtComponent", "IsAttached");

	Params::UVehicleHitchAttachPtComponent_IsAttached_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction GbxVehicle.VehicleHitchAttachPtComponent.HitchAttachAction__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AVehicle*                    FromVehicle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVehicleHitchAttachPtComponent::HitchAttachAction__DelegateSignature(class AVehicle* FromVehicle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleHitchAttachPtComponent", "HitchAttachAction__DelegateSignature");

	Params::UVehicleHitchAttachPtComponent_HitchAttachAction__DelegateSignature_Params Parms{};

	Parms.FromVehicle = FromVehicle;

	UObject::ProcessEvent(Func, &Parms);

}


// Class GbxVehicle.VehicleHitchComponent
// (SceneComponent)

class UClass* UVehicleHitchComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VehicleHitchComponent");

	return Clss;
}


// VehicleHitchComponent GbxVehicle.Default__VehicleHitchComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVehicleHitchComponent* UVehicleHitchComponent::GetDefaultObj()
{
	static class UVehicleHitchComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVehicleHitchComponent*>(UVehicleHitchComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxVehicle.VehicleHitchComponent.TeleportTrailerAndAttachToHitch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      TrailerToAttach                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVehicleHitchComponent::TeleportTrailerAndAttachToHitch(class AActor* TrailerToAttach)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleHitchComponent", "TeleportTrailerAndAttachToHitch");

	Params::UVehicleHitchComponent_TeleportTrailerAndAttachToHitch_Params Parms{};

	Parms.TrailerToAttach = TrailerToAttach;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction GbxVehicle.VehicleHitchComponent.HitchAttachAction__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AVehicle*                    FromVehicle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVehicleHitchComponent::HitchAttachAction__DelegateSignature(class AVehicle* FromVehicle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleHitchComponent", "HitchAttachAction__DelegateSignature");

	Params::UVehicleHitchComponent_HitchAttachAction__DelegateSignature_Params Parms{};

	Parms.FromVehicle = FromVehicle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxVehicle.VehicleHitchComponent.DetachFromHitch
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVehicleHitchComponent::DetachFromHitch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleHitchComponent", "DetachFromHitch");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.VehicleHitchComponent.AttachToHitch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVehicleHitchAttachPtComponent*AttachPtToAttach                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVehicleHitchComponent::AttachToHitch(class UVehicleHitchAttachPtComponent* AttachPtToAttach)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleHitchComponent", "AttachToHitch");

	Params::UVehicleHitchComponent_AttachToHitch_Params Parms{};

	Parms.AttachPtToAttach = AttachPtToAttach;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxVehicle.VehicleHoverComponent
// (None)

class UClass* UVehicleHoverComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VehicleHoverComponent");

	return Clss;
}


// VehicleHoverComponent GbxVehicle.Default__VehicleHoverComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVehicleHoverComponent* UVehicleHoverComponent::GetDefaultObj()
{
	static class UVehicleHoverComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVehicleHoverComponent*>(UVehicleHoverComponent::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction GbxVehicle.VehicleHoverComponent.VehicleHoverEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UVehicleHoverComponent::VehicleHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleHoverComponent", "VehicleHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxVehicle.VehicleHoverComponent.ServerUpdateState
// (Final, Net, NetReliable, Native, Event, Private, NetServer, HasDefaults, NetValidate)
// Parameters:
// bool                               InbIsEnabled                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InStrafeInput                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InForwardInput                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    InTargetRotation                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UVehicleHoverComponent::ServerUpdateState(bool InbIsEnabled, float InStrafeInput, float InForwardInput, const struct FRotator& InTargetRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleHoverComponent", "ServerUpdateState");

	Params::UVehicleHoverComponent_ServerUpdateState_Params Parms{};

	Parms.InbIsEnabled = InbIsEnabled;
	Parms.InStrafeInput = InStrafeInput;
	Parms.InForwardInput = InForwardInput;
	Parms.InTargetRotation = InTargetRotation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.VehicleHoverComponent.IsHoverEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVehicleHoverComponent::IsHoverEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleHoverComponent", "IsHoverEnabled");

	Params::UVehicleHoverComponent_IsHoverEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxVehicle.VehicleHoverComponent.EnableHover
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVehicleHoverComponent::EnableHover(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleHoverComponent", "EnableHover");

	Params::UVehicleHoverComponent_EnableHover_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxVehicle.VehicleMovementInterface
// (None)

class UClass* IVehicleMovementInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VehicleMovementInterface");

	return Clss;
}


// VehicleMovementInterface GbxVehicle.Default__VehicleMovementInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IVehicleMovementInterface* IVehicleMovementInterface::GetDefaultObj()
{
	static class IVehicleMovementInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IVehicleMovementInterface*>(IVehicleMovementInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxVehicle.VehicleMovementInterface.GetDirectionBasedThrottleAndSteer
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   StickInput                                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D IVehicleMovementInterface::GetDirectionBasedThrottleAndSteer(struct FVector2D& StickInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleMovementInterface", "GetDirectionBasedThrottleAndSteer");

	Params::IVehicleMovementInterface_GetDirectionBasedThrottleAndSteer_Params Parms{};

	Parms.StickInput = StickInput;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxVehicle.VehiclePartActor
// (Actor)

class UClass* AVehiclePartActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VehiclePartActor");

	return Clss;
}


// VehiclePartActor GbxVehicle.Default__VehiclePartActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AVehiclePartActor* AVehiclePartActor::GetDefaultObj()
{
	static class AVehiclePartActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AVehiclePartActor*>(AVehiclePartActor::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxVehicle.VehiclePartActor.WeldActorToVehicle
// (Final, Native, Private)
// Parameters:
// class AActor*                      SpawnedPart                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AVehiclePartActor::WeldActorToVehicle(class AActor* SpawnedPart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehiclePartActor", "WeldActorToVehicle");

	Params::AVehiclePartActor_WeldActorToVehicle_Params Parms{};

	Parms.SpawnedPart = SpawnedPart;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.VehiclePartActor.ReceiveParentVehicleBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AVehiclePartActor::ReceiveParentVehicleBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehiclePartActor", "ReceiveParentVehicleBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxVehicle.VehiclePartActor.OnRep_ParentSocket
// (Final, Native, Private)
// Parameters:

void AVehiclePartActor::OnRep_ParentSocket()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehiclePartActor", "OnRep_ParentSocket");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.VehiclePartActor.OnRep_OwningVehicle
// (Final, Native, Private)
// Parameters:

void AVehiclePartActor::OnRep_OwningVehicle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehiclePartActor", "OnRep_OwningVehicle");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxVehicle.VehiclePartSelectionData
// (None)

class UClass* UVehiclePartSelectionData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VehiclePartSelectionData");

	return Clss;
}


// VehiclePartSelectionData GbxVehicle.Default__VehiclePartSelectionData
// (Public, ClassDefaultObject, ArchetypeObject)

class UVehiclePartSelectionData* UVehiclePartSelectionData::GetDefaultObj()
{
	static class UVehiclePartSelectionData* Default = nullptr;

	if (!Default)
		Default = static_cast<UVehiclePartSelectionData*>(UVehiclePartSelectionData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxVehicle.VehiclePowerSlideComponent
// (None)

class UClass* UVehiclePowerSlideComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VehiclePowerSlideComponent");

	return Clss;
}


// VehiclePowerSlideComponent GbxVehicle.Default__VehiclePowerSlideComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVehiclePowerSlideComponent* UVehiclePowerSlideComponent::GetDefaultObj()
{
	static class UVehiclePowerSlideComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVehiclePowerSlideComponent*>(UVehiclePowerSlideComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxVehicle.VehiclePowerSlideComponent.SetPowerSlideEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVehiclePowerSlideComponent::SetPowerSlideEnabled(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehiclePowerSlideComponent", "SetPowerSlideEnabled");

	Params::UVehiclePowerSlideComponent_SetPowerSlideEnabled_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.VehiclePowerSlideComponent.ResumePowerSlide
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Reason                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVehiclePowerSlideComponent::ResumePowerSlide(class FName Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehiclePowerSlideComponent", "ResumePowerSlide");

	Params::UVehiclePowerSlideComponent_ResumePowerSlide_Params Parms{};

	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.VehiclePowerSlideComponent.PausePowerSlide
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Reason                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVehiclePowerSlideComponent::PausePowerSlide(class FName Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehiclePowerSlideComponent", "PausePowerSlide");

	Params::UVehiclePowerSlideComponent_PausePowerSlide_Params Parms{};

	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.VehiclePowerSlideComponent.OnRep_IsPowerSliding
// (Final, Native, Private)
// Parameters:
// bool                               bWasPowerSliding                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVehiclePowerSlideComponent::OnRep_IsPowerSliding(bool bWasPowerSliding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehiclePowerSlideComponent", "OnRep_IsPowerSliding");

	Params::UVehiclePowerSlideComponent_OnRep_IsPowerSliding_Params Parms{};

	Parms.bWasPowerSliding = bWasPowerSliding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.VehiclePowerSlideComponent.IsPowerSlidePaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVehiclePowerSlideComponent::IsPowerSlidePaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehiclePowerSlideComponent", "IsPowerSlidePaused");

	Params::UVehiclePowerSlideComponent_IsPowerSlidePaused_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxVehicle.VehiclePowerSlideComponent.IsInPowerSlideBoost
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVehiclePowerSlideComponent::IsInPowerSlideBoost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehiclePowerSlideComponent", "IsInPowerSlideBoost");

	Params::UVehiclePowerSlideComponent_IsInPowerSlideBoost_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxVehicle.VehiclePowerSlideComponent.GetPowerSlideEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVehiclePowerSlideComponent::GetPowerSlideEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehiclePowerSlideComponent", "GetPowerSlideEnabled");

	Params::UVehiclePowerSlideComponent_GetPowerSlideEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxVehicle.VehiclePowerSlideComponent.GetCurrentBoostRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVehiclePowerSlideComponent::GetCurrentBoostRatio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehiclePowerSlideComponent", "GetCurrentBoostRatio");

	Params::UVehiclePowerSlideComponent_GetCurrentBoostRatio_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxVehicle.VehiclePowerSlideComponent.CancelPowerSlide
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVehiclePowerSlideComponent::CancelPowerSlide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehiclePowerSlideComponent", "CancelPowerSlide");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxVehicle.GbxVehicleWheel
// (None)

class UClass* UGbxVehicleWheel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxVehicleWheel");

	return Clss;
}


// GbxVehicleWheel GbxVehicle.Default__GbxVehicleWheel
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxVehicleWheel* UGbxVehicleWheel::GetDefaultObj()
{
	static class UGbxVehicleWheel* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxVehicleWheel*>(UGbxVehicleWheel::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxVehicle.VehicleCollisionResponseModificationContext
// (None)

class UClass* UVehicleCollisionResponseModificationContext::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VehicleCollisionResponseModificationContext");

	return Clss;
}


// VehicleCollisionResponseModificationContext GbxVehicle.Default__VehicleCollisionResponseModificationContext
// (Public, ClassDefaultObject, ArchetypeObject)

class UVehicleCollisionResponseModificationContext* UVehicleCollisionResponseModificationContext::GetDefaultObj()
{
	static class UVehicleCollisionResponseModificationContext* Default = nullptr;

	if (!Default)
		Default = static_cast<UVehicleCollisionResponseModificationContext*>(UVehicleCollisionResponseModificationContext::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxVehicle.WheeledVehicleMovementComponentNW
// (None)

class UClass* UWheeledVehicleMovementComponentNW::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WheeledVehicleMovementComponentNW");

	return Clss;
}


// WheeledVehicleMovementComponentNW GbxVehicle.Default__WheeledVehicleMovementComponentNW
// (Public, ClassDefaultObject, ArchetypeObject)

class UWheeledVehicleMovementComponentNW* UWheeledVehicleMovementComponentNW::GetDefaultObj()
{
	static class UWheeledVehicleMovementComponentNW* Default = nullptr;

	if (!Default)
		Default = static_cast<UWheeledVehicleMovementComponentNW*>(UWheeledVehicleMovementComponentNW::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetToRestState
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWheeledVehicleMovementComponentNW::SetToRestState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponentNW", "SetToRestState");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetSteerAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              SteerAngle                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              WheelIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponentNW::SetSteerAngle(float SteerAngle, int32 WheelIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponentNW", "SetSteerAngle");

	Params::UWheeledVehicleMovementComponentNW_SetSteerAngle_Params Parms{};

	Parms.SteerAngle = SteerAngle;
	Parms.WheelIndex = WheelIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetSagittalBalancingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponentNW::SetSagittalBalancingEnabled(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponentNW", "SetSagittalBalancingEnabled");

	Params::UWheeledVehicleMovementComponentNW_SetSagittalBalancingEnabled_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetOversteerFixupEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponentNW::SetOversteerFixupEnabled(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponentNW", "SetOversteerFixupEnabled");

	Params::UWheeledVehicleMovementComponentNW_SetOversteerFixupEnabled_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetNoDriveSteerAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              SteerAngle                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              WheelIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponentNW::SetNoDriveSteerAngle(float SteerAngle, int32 WheelIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponentNW", "SetNoDriveSteerAngle");

	Params::UWheeledVehicleMovementComponentNW_SetNoDriveSteerAngle_Params Parms{};

	Parms.SteerAngle = SteerAngle;
	Parms.WheelIndex = WheelIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetNoDriveDriveTorque
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DriveTorque                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              WheelIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponentNW::SetNoDriveDriveTorque(float DriveTorque, int32 WheelIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponentNW", "SetNoDriveDriveTorque");

	Params::UWheeledVehicleMovementComponentNW_SetNoDriveDriveTorque_Params Parms{};

	Parms.DriveTorque = DriveTorque;
	Parms.WheelIndex = WheelIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetNoDriveBrakeTorque
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              BrakeTorque                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              WheelIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponentNW::SetNoDriveBrakeTorque(float BrakeTorque, int32 WheelIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponentNW", "SetNoDriveBrakeTorque");

	Params::UWheeledVehicleMovementComponentNW_SetNoDriveBrakeTorque_Params Parms{};

	Parms.BrakeTorque = BrakeTorque;
	Parms.WheelIndex = WheelIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetLateralToLongitudinalVelocityShiftEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponentNW::SetLateralToLongitudinalVelocityShiftEnabled(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponentNW", "SetLateralToLongitudinalVelocityShiftEnabled");

	Params::UWheeledVehicleMovementComponentNW_SetLateralToLongitudinalVelocityShiftEnabled_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetCustomGravityModifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewModifier                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponentNW::SetCustomGravityModifier(float NewModifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponentNW", "SetCustomGravityModifier");

	Params::UWheeledVehicleMovementComponentNW_SetCustomGravityModifier_Params Parms{};

	Parms.NewModifier = NewModifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetCoronalBalancingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponentNW::SetCoronalBalancingEnabled(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponentNW", "SetCoronalBalancingEnabled");

	Params::UWheeledVehicleMovementComponentNW_SetCoronalBalancingEnabled_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetAerialRotationalDampingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponentNW::SetAerialRotationalDampingEnabled(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponentNW", "SetAerialRotationalDampingEnabled");

	Params::UWheeledVehicleMovementComponentNW_SetAerialRotationalDampingEnabled_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.ResetCustomGravityModifer
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWheeledVehicleMovementComponentNW::ResetCustomGravityModifer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponentNW", "ResetCustomGravityModifer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.IsInAir
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWheeledVehicleMovementComponentNW::IsInAir()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponentNW", "IsInAir");

	Params::UWheeledVehicleMovementComponentNW_IsInAir_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetSagittalBalancingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWheeledVehicleMovementComponentNW::GetSagittalBalancingEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponentNW", "GetSagittalBalancingEnabled");

	Params::UWheeledVehicleMovementComponentNW_GetSagittalBalancingEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetOversteerFixupEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWheeledVehicleMovementComponentNW::GetOversteerFixupEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponentNW", "GetOversteerFixupEnabled");

	Params::UWheeledVehicleMovementComponentNW_GetOversteerFixupEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetNumWheelsInAir
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UWheeledVehicleMovementComponentNW::GetNumWheelsInAir()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponentNW", "GetNumWheelsInAir");

	Params::UWheeledVehicleMovementComponentNW_GetNumWheelsInAir_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetLateralToLongitudinalVelocityShiftEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWheeledVehicleMovementComponentNW::GetLateralToLongitudinalVelocityShiftEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponentNW", "GetLateralToLongitudinalVelocityShiftEnabled");

	Params::UWheeledVehicleMovementComponentNW_GetLateralToLongitudinalVelocityShiftEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetDirectionBasedThrottleAndSteer
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   StickInput                                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UWheeledVehicleMovementComponentNW::GetDirectionBasedThrottleAndSteer(struct FVector2D& StickInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponentNW", "GetDirectionBasedThrottleAndSteer");

	Params::UWheeledVehicleMovementComponentNW_GetDirectionBasedThrottleAndSteer_Params Parms{};

	Parms.StickInput = StickInput;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetCustomGravityModifier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWheeledVehicleMovementComponentNW::GetCustomGravityModifier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponentNW", "GetCustomGravityModifier");

	Params::UWheeledVehicleMovementComponentNW_GetCustomGravityModifier_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetCoronalBalancingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWheeledVehicleMovementComponentNW::GetCoronalBalancingEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponentNW", "GetCoronalBalancingEnabled");

	Params::UWheeledVehicleMovementComponentNW_GetCoronalBalancingEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetCameraRelativeThrottleAndSteer
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   StickInput                                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              WantedDirAngle                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EVehicleCameraRelativeDrivingModeMode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 AngleToSteeringCurve                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UWheeledVehicleMovementComponentNW::GetCameraRelativeThrottleAndSteer(struct FVector2D& StickInput, float* WantedDirAngle, enum class EVehicleCameraRelativeDrivingMode Mode, class UCurveFloat* AngleToSteeringCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponentNW", "GetCameraRelativeThrottleAndSteer");

	Params::UWheeledVehicleMovementComponentNW_GetCameraRelativeThrottleAndSteer_Params Parms{};

	Parms.StickInput = StickInput;
	Parms.Mode = Mode;
	Parms.AngleToSteeringCurve = AngleToSteeringCurve;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WantedDirAngle != nullptr)
		*WantedDirAngle = Parms.WantedDirAngle;

	return Parms.ReturnValue;

}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetAerialRotationalDampingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWheeledVehicleMovementComponentNW::GetAerialRotationalDampingEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponentNW", "GetAerialRotationalDampingEnabled");

	Params::UWheeledVehicleMovementComponentNW_GetAerialRotationalDampingEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.ApplyAngularVelocityInfluence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxInfluence                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Pitch                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Roll                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Yaw                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponentNW::ApplyAngularVelocityInfluence(float DeltaTime, float MaxInfluence, float Pitch, float Roll, float Yaw)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WheeledVehicleMovementComponentNW", "ApplyAngularVelocityInfluence");

	Params::UWheeledVehicleMovementComponentNW_ApplyAngularVelocityInfluence_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.MaxInfluence = MaxInfluence;
	Parms.Pitch = Pitch;
	Parms.Roll = Roll;
	Parms.Yaw = Yaw;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


