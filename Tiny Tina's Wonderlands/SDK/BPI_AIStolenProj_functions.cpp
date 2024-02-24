#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_AIStolenProj.BPI_AIStolenProj_C
// (None)

class UClass* IBPI_AIStolenProj_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_AIStolenProj_C");

	return Clss;
}


// BPI_AIStolenProj_C BPI_AIStolenProj.Default__BPI_AIStolenProj_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_AIStolenProj_C* IBPI_AIStolenProj_C::GetDefaultObj()
{
	static class IBPI_AIStolenProj_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_AIStolenProj_C*>(IBPI_AIStolenProj_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptDetonate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_AIStolenProj_C::AIStolenProj_AttemptDetonate(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AIStolenProj_C", "AIStolenProj_AttemptDetonate");

	Params::IBPI_AIStolenProj_C_AIStolenProj_AttemptDetonate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_GetElementalTypeFromStolenProjectile
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOakElementalType       StolenProjectileElement                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AIStolenProj_C::AIStolenProj_GetElementalTypeFromStolenProjectile(enum class EOakElementalType* StolenProjectileElement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AIStolenProj_C", "AIStolenProj_GetElementalTypeFromStolenProjectile");

	Params::IBPI_AIStolenProj_C_AIStolenProj_GetElementalTypeFromStolenProjectile_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (StolenProjectileElement != nullptr)
		*StolenProjectileElement = Parms.StolenProjectileElement;

}


// Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptLerpToSocket
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SocketToLerpTo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LerpDuration                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_AIStolenProj_C::AIStolenProj_AttemptLerpToSocket(class FName SocketToLerpTo, float LerpDuration, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AIStolenProj_C", "AIStolenProj_AttemptLerpToSocket");

	Params::IBPI_AIStolenProj_C_AIStolenProj_AttemptLerpToSocket_Params Parms{};

	Parms.SocketToLerpTo = SocketToLerpTo;
	Parms.LerpDuration = LerpDuration;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptReturnTo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_AIThrowAtStyle     ReturnTo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TargetSocket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxPrediction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Speed                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AnglePercent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    DirectionOffset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FVector                     TargetOffset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      SpecifiedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     WorldLocation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_AIStolenProj_C::AIStolenProj_AttemptReturnTo(enum class Enum_AIThrowAtStyle ReturnTo, class FName TargetSocket, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& TargetOffset, class AActor* SpecifiedActor, const struct FVector& WorldLocation, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AIStolenProj_C", "AIStolenProj_AttemptReturnTo");

	Params::IBPI_AIStolenProj_C_AIStolenProj_AttemptReturnTo_Params Parms{};

	Parms.ReturnTo = ReturnTo;
	Parms.TargetSocket = TargetSocket;
	Parms.MaxPrediction = MaxPrediction;
	Parms.Speed = Speed;
	Parms.AnglePercent = AnglePercent;
	Parms.DirectionOffset = DirectionOffset;
	Parms.TargetOffset = TargetOffset;
	Parms.SpecifiedActor = SpecifiedActor;
	Parms.WorldLocation = WorldLocation;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptAttach
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SocketName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_AIStolenProj_C::AIStolenProj_AttemptAttach(class FName SocketName, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AIStolenProj_C", "AIStolenProj_AttemptAttach");

	Params::IBPI_AIStolenProj_C_AIStolenProj_AttemptAttach_Params Parms{};

	Parms.SocketName = SocketName;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptDestroy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_AIStolenProj_C::AIStolenProj_AttemptDestroy(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AIStolenProj_C", "AIStolenProj_AttemptDestroy");

	Params::IBPI_AIStolenProj_C_AIStolenProj_AttemptDestroy_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPI_AIStolenProj.BPI_AIStolenProj_C.AIStolenProj_AttemptDisarm
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_AIStolenProj_C::AIStolenProj_AttemptDisarm(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AIStolenProj_C", "AIStolenProj_AttemptDisarm");

	Params::IBPI_AIStolenProj_C_AIStolenProj_AttemptDisarm_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}

}


