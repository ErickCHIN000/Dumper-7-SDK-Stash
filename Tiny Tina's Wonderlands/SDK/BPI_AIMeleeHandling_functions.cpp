#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_AIMeleeHandling.BPI_AIMeleeHandling_C
// (None)

class UClass* IBPI_AIMeleeHandling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_AIMeleeHandling_C");

	return Clss;
}


// BPI_AIMeleeHandling_C BPI_AIMeleeHandling.Default__BPI_AIMeleeHandling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_AIMeleeHandling_C* IBPI_AIMeleeHandling_C::GetDefaultObj()
{
	static class IBPI_AIMeleeHandling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_AIMeleeHandling_C*>(IBPI_AIMeleeHandling_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_AIMeleeHandling.BPI_AIMeleeHandling_C.AIMelee_GetElementalTypeFromMeleeWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOakElementalType       MeleeWeaponElement                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AIMeleeHandling_C::AIMelee_GetElementalTypeFromMeleeWeapon(enum class EOakElementalType* MeleeWeaponElement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AIMeleeHandling_C", "AIMelee_GetElementalTypeFromMeleeWeapon");

	Params::IBPI_AIMeleeHandling_C_AIMelee_GetElementalTypeFromMeleeWeapon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MeleeWeaponElement != nullptr)
		*MeleeWeaponElement = Parms.MeleeWeaponElement;

}


// Function BPI_AIMeleeHandling.BPI_AIMeleeHandling_C.AIMelee_SetNewMeleeWeaponClass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      NewMeleeWeaponClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AIMeleeHandling_C::AIMelee_SetNewMeleeWeaponClass(class UClass* NewMeleeWeaponClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AIMeleeHandling_C", "AIMelee_SetNewMeleeWeaponClass");

	Params::IBPI_AIMeleeHandling_C_AIMelee_SetNewMeleeWeaponClass_Params Parms{};

	Parms.NewMeleeWeaponClass = NewMeleeWeaponClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_AIMeleeHandling.BPI_AIMeleeHandling_C.AIMelee_ThrowAtLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     LocationToThrowAt                                                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowSpeed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowAnglePercentage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RequestNewMeleeWeapon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SpawnIfDoesntExist                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_AIMeleeHandling_C::AIMelee_ThrowAtLocation(const struct FVector& LocationToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AIMeleeHandling_C", "AIMelee_ThrowAtLocation");

	Params::IBPI_AIMeleeHandling_C_AIMelee_ThrowAtLocation_Params Parms{};

	Parms.LocationToThrowAt = LocationToThrowAt;
	Parms.ThrowSpeed = ThrowSpeed;
	Parms.ThrowAnglePercentage = ThrowAnglePercentage;
	Parms.RequestNewMeleeWeapon = RequestNewMeleeWeapon;
	Parms.SpawnIfDoesntExist = SpawnIfDoesntExist;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_AIMeleeHandling.BPI_AIMeleeHandling_C.AIMelee_ThrowAtActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorToThrowAt                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowSpeed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowAnglePercentage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ActorSocket                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ActorOffset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    ThrowAngleOffset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              MaxPrediction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RequestNewMeleeWeapon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SpawnIfDoesntExist                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_AIMeleeHandling_C::AIMelee_ThrowAtActor(class AActor* ActorToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, class FName ActorSocket, const struct FVector& ActorOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AIMeleeHandling_C", "AIMelee_ThrowAtActor");

	Params::IBPI_AIMeleeHandling_C_AIMelee_ThrowAtActor_Params Parms{};

	Parms.ActorToThrowAt = ActorToThrowAt;
	Parms.ThrowSpeed = ThrowSpeed;
	Parms.ThrowAnglePercentage = ThrowAnglePercentage;
	Parms.ActorSocket = ActorSocket;
	Parms.ActorOffset = ActorOffset;
	Parms.ThrowAngleOffset = ThrowAngleOffset;
	Parms.MaxPrediction = MaxPrediction;
	Parms.RequestNewMeleeWeapon = RequestNewMeleeWeapon;
	Parms.SpawnIfDoesntExist = SpawnIfDoesntExist;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_AIMeleeHandling.BPI_AIMeleeHandling_C.AIMelee_ThrowAtTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ThrowSpeed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowAnglePercent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TargetSocket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TargetOffset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    ThrowAngleOffset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              MaxPrediction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RequestNewMeleeWeapon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SpawnIfDoesntExist                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_AIMeleeHandling_C::AIMelee_ThrowAtTarget(float ThrowSpeed, float ThrowAnglePercent, class FName TargetSocket, const struct FVector& TargetOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AIMeleeHandling_C", "AIMelee_ThrowAtTarget");

	Params::IBPI_AIMeleeHandling_C_AIMelee_ThrowAtTarget_Params Parms{};

	Parms.ThrowSpeed = ThrowSpeed;
	Parms.ThrowAnglePercent = ThrowAnglePercent;
	Parms.TargetSocket = TargetSocket;
	Parms.TargetOffset = TargetOffset;
	Parms.ThrowAngleOffset = ThrowAngleOffset;
	Parms.MaxPrediction = MaxPrediction;
	Parms.RequestNewMeleeWeapon = RequestNewMeleeWeapon;
	Parms.SpawnIfDoesntExist = SpawnIfDoesntExist;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_AIMeleeHandling.BPI_AIMeleeHandling_C.AIMelee_Drop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               RequestNewMeleeWeapon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_AIMeleeHandling_C::AIMelee_Drop(bool RequestNewMeleeWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AIMeleeHandling_C", "AIMelee_Drop");

	Params::IBPI_AIMeleeHandling_C_AIMelee_Drop_Params Parms{};

	Parms.RequestNewMeleeWeapon = RequestNewMeleeWeapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_AIMeleeHandling.BPI_AIMeleeHandling_C.AIMelee_Spawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_AIMeleeHandling_C::AIMelee_Spawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AIMeleeHandling_C", "AIMelee_Spawn");



	UObject::ProcessEvent(Func, nullptr);

}

}


