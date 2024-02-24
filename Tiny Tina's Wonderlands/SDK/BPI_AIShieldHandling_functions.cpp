#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_AIShieldHandling.BPI_AIShieldHandling_C
// (None)

class UClass* IBPI_AIShieldHandling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_AIShieldHandling_C");

	return Clss;
}


// BPI_AIShieldHandling_C BPI_AIShieldHandling.Default__BPI_AIShieldHandling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_AIShieldHandling_C* IBPI_AIShieldHandling_C::GetDefaultObj()
{
	static class IBPI_AIShieldHandling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_AIShieldHandling_C*>(IBPI_AIShieldHandling_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_AIShieldHandling.BPI_AIShieldHandling_C.AIShield_SetNewShieldClass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      NewShieldClass                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AIShieldHandling_C::AIShield_SetNewShieldClass(class UClass* NewShieldClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AIShieldHandling_C", "AIShield_SetNewShieldClass");

	Params::IBPI_AIShieldHandling_C_AIShield_SetNewShieldClass_Params Parms{};

	Parms.NewShieldClass = NewShieldClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_AIShieldHandling.BPI_AIShieldHandling_C.AIShield_ThrowAtLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     LocationToThrowAt                                                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowSpeed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowAnglePercentage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RequestNewShield                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SpawnIfDoesntExist                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_AIShieldHandling_C::AIShield_ThrowAtLocation(const struct FVector& LocationToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, bool RequestNewShield, bool SpawnIfDoesntExist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AIShieldHandling_C", "AIShield_ThrowAtLocation");

	Params::IBPI_AIShieldHandling_C_AIShield_ThrowAtLocation_Params Parms{};

	Parms.LocationToThrowAt = LocationToThrowAt;
	Parms.ThrowSpeed = ThrowSpeed;
	Parms.ThrowAnglePercentage = ThrowAnglePercentage;
	Parms.RequestNewShield = RequestNewShield;
	Parms.SpawnIfDoesntExist = SpawnIfDoesntExist;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_AIShieldHandling.BPI_AIShieldHandling_C.AIShield_ThrowAtActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorToThrowAt                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowSpeed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowAnglePercentage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ActorSocket                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ActorOffset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    ThrowAngleOffset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              MaxPrediction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RequestNewShield                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SpawnIfDoesntExist                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_AIShieldHandling_C::AIShield_ThrowAtActor(class AActor* ActorToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, class FName ActorSocket, const struct FVector& ActorOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewShield, bool SpawnIfDoesntExist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AIShieldHandling_C", "AIShield_ThrowAtActor");

	Params::IBPI_AIShieldHandling_C_AIShield_ThrowAtActor_Params Parms{};

	Parms.ActorToThrowAt = ActorToThrowAt;
	Parms.ThrowSpeed = ThrowSpeed;
	Parms.ThrowAnglePercentage = ThrowAnglePercentage;
	Parms.ActorSocket = ActorSocket;
	Parms.ActorOffset = ActorOffset;
	Parms.ThrowAngleOffset = ThrowAngleOffset;
	Parms.MaxPrediction = MaxPrediction;
	Parms.RequestNewShield = RequestNewShield;
	Parms.SpawnIfDoesntExist = SpawnIfDoesntExist;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_AIShieldHandling.BPI_AIShieldHandling_C.AIShield_ThrowAtTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ThrowSpeed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowAnglePercent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TargetSocket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TargetOffset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    ThrowAngleOffset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              MaxPrediction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RequestNewShield                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SpawnIfDoesntExist                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_AIShieldHandling_C::AIShield_ThrowAtTarget(float ThrowSpeed, float ThrowAnglePercent, class FName TargetSocket, const struct FVector& TargetOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewShield, bool SpawnIfDoesntExist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AIShieldHandling_C", "AIShield_ThrowAtTarget");

	Params::IBPI_AIShieldHandling_C_AIShield_ThrowAtTarget_Params Parms{};

	Parms.ThrowSpeed = ThrowSpeed;
	Parms.ThrowAnglePercent = ThrowAnglePercent;
	Parms.TargetSocket = TargetSocket;
	Parms.TargetOffset = TargetOffset;
	Parms.ThrowAngleOffset = ThrowAngleOffset;
	Parms.MaxPrediction = MaxPrediction;
	Parms.RequestNewShield = RequestNewShield;
	Parms.SpawnIfDoesntExist = SpawnIfDoesntExist;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_AIShieldHandling.BPI_AIShieldHandling_C.AIShield_Drop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               RequestNewShield                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_AIShieldHandling_C::AIShield_Drop(bool RequestNewShield)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AIShieldHandling_C", "AIShield_Drop");

	Params::IBPI_AIShieldHandling_C_AIShield_Drop_Params Parms{};

	Parms.RequestNewShield = RequestNewShield;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_AIShieldHandling.BPI_AIShieldHandling_C.AIShield_Spawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_AIShieldHandling_C::AIShield_Spawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AIShieldHandling_C", "AIShield_Spawn");



	UObject::ProcessEvent(Func, nullptr);

}

}


