#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_AIExplosiveHandling.BPI_AIExplosiveHandling_C
// (None)

class UClass* IBPI_AIExplosiveHandling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_AIExplosiveHandling_C");

	return Clss;
}


// BPI_AIExplosiveHandling_C BPI_AIExplosiveHandling.Default__BPI_AIExplosiveHandling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_AIExplosiveHandling_C* IBPI_AIExplosiveHandling_C::GetDefaultObj()
{
	static class IBPI_AIExplosiveHandling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_AIExplosiveHandling_C*>(IBPI_AIExplosiveHandling_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_AIExplosiveHandling.BPI_AIExplosiveHandling_C.AIExplosive_SetNewExplosiveClass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      NewExplosiveClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AIExplosiveHandling_C::AIExplosive_SetNewExplosiveClass(class UClass* NewExplosiveClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AIExplosiveHandling_C", "AIExplosive_SetNewExplosiveClass");

	Params::IBPI_AIExplosiveHandling_C_AIExplosive_SetNewExplosiveClass_Params Parms{};

	Parms.NewExplosiveClass = NewExplosiveClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_AIExplosiveHandling.BPI_AIExplosiveHandling_C.AIExplosive_ThrowAtLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     LocationToThrowAt                                                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowSpeed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowAnglePercentage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RequestNewExplosive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SpawnIfDoesntExist                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_AIExplosiveHandling_C::AIExplosive_ThrowAtLocation(const struct FVector& LocationToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, bool RequestNewExplosive, bool SpawnIfDoesntExist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AIExplosiveHandling_C", "AIExplosive_ThrowAtLocation");

	Params::IBPI_AIExplosiveHandling_C_AIExplosive_ThrowAtLocation_Params Parms{};

	Parms.LocationToThrowAt = LocationToThrowAt;
	Parms.ThrowSpeed = ThrowSpeed;
	Parms.ThrowAnglePercentage = ThrowAnglePercentage;
	Parms.RequestNewExplosive = RequestNewExplosive;
	Parms.SpawnIfDoesntExist = SpawnIfDoesntExist;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_AIExplosiveHandling.BPI_AIExplosiveHandling_C.AIExplosive_ThrowAtActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorToThrowAt                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowSpeed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowAnglePercentage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ActorSocket                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ActorOffset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    ThrowAngleOffset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              MaxPrediction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RequestNewExplosive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SpawnIfDoesntExist                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_AIExplosiveHandling_C::AIExplosive_ThrowAtActor(class AActor* ActorToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, class FName ActorSocket, const struct FVector& ActorOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewExplosive, bool SpawnIfDoesntExist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AIExplosiveHandling_C", "AIExplosive_ThrowAtActor");

	Params::IBPI_AIExplosiveHandling_C_AIExplosive_ThrowAtActor_Params Parms{};

	Parms.ActorToThrowAt = ActorToThrowAt;
	Parms.ThrowSpeed = ThrowSpeed;
	Parms.ThrowAnglePercentage = ThrowAnglePercentage;
	Parms.ActorSocket = ActorSocket;
	Parms.ActorOffset = ActorOffset;
	Parms.ThrowAngleOffset = ThrowAngleOffset;
	Parms.MaxPrediction = MaxPrediction;
	Parms.RequestNewExplosive = RequestNewExplosive;
	Parms.SpawnIfDoesntExist = SpawnIfDoesntExist;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_AIExplosiveHandling.BPI_AIExplosiveHandling_C.AIExplosive_Detonate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KillSelfOnDetonate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               RequestNewExplosive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      InstigatorOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AIExplosiveHandling_C::AIExplosive_Detonate(bool KillSelfOnDetonate, bool RequestNewExplosive, class AActor* InstigatorOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AIExplosiveHandling_C", "AIExplosive_Detonate");

	Params::IBPI_AIExplosiveHandling_C_AIExplosive_Detonate_Params Parms{};

	Parms.KillSelfOnDetonate = KillSelfOnDetonate;
	Parms.RequestNewExplosive = RequestNewExplosive;
	Parms.InstigatorOverride = InstigatorOverride;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_AIExplosiveHandling.BPI_AIExplosiveHandling_C.AIExplosive_Drop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               RequestNewExplosive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      InstigatorOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AIExplosiveHandling_C::AIExplosive_Drop(bool RequestNewExplosive, class AActor* InstigatorOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AIExplosiveHandling_C", "AIExplosive_Drop");

	Params::IBPI_AIExplosiveHandling_C_AIExplosive_Drop_Params Parms{};

	Parms.RequestNewExplosive = RequestNewExplosive;
	Parms.InstigatorOverride = InstigatorOverride;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_AIExplosiveHandling.BPI_AIExplosiveHandling_C.AIExplosive_ThrowAtTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ThrowSpeed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowAnglePercent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TargetSocket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TargetOffset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    ThrowAngleOffset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              MaxPrediction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RequestNewExplosive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SpawnIfDoesn_tExist                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_AIExplosiveHandling_C::AIExplosive_ThrowAtTarget(float ThrowSpeed, float ThrowAnglePercent, class FName TargetSocket, const struct FVector& TargetOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewExplosive, bool SpawnIfDoesn_tExist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AIExplosiveHandling_C", "AIExplosive_ThrowAtTarget");

	Params::IBPI_AIExplosiveHandling_C_AIExplosive_ThrowAtTarget_Params Parms{};

	Parms.ThrowSpeed = ThrowSpeed;
	Parms.ThrowAnglePercent = ThrowAnglePercent;
	Parms.TargetSocket = TargetSocket;
	Parms.TargetOffset = TargetOffset;
	Parms.ThrowAngleOffset = ThrowAngleOffset;
	Parms.MaxPrediction = MaxPrediction;
	Parms.RequestNewExplosive = RequestNewExplosive;
	Parms.SpawnIfDoesn_tExist = SpawnIfDoesn_tExist;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_AIExplosiveHandling.BPI_AIExplosiveHandling_C.AIExplosive_Prime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_AIExplosiveHandling_C::AIExplosive_Prime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AIExplosiveHandling_C", "AIExplosive_Prime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_AIExplosiveHandling.BPI_AIExplosiveHandling_C.AIExplosive_Spawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_AIExplosiveHandling_C::AIExplosive_Spawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AIExplosiveHandling_C", "AIExplosive_Spawn");



	UObject::ProcessEvent(Func, nullptr);

}

}


