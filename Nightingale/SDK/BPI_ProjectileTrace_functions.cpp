#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_ProjectileTrace.BPI_ProjectileTrace_C
// (None)

class UClass* IBPI_ProjectileTrace_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_ProjectileTrace_C");

	return Clss;
}


// BPI_ProjectileTrace_C BPI_ProjectileTrace.Default__BPI_ProjectileTrace_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_ProjectileTrace_C* IBPI_ProjectileTrace_C::GetDefaultObj()
{
	static class IBPI_ProjectileTrace_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_ProjectileTrace_C*>(IBPI_ProjectileTrace_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_ProjectileTrace.BPI_ProjectileTrace_C.RegisterWhenTraceReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_ProjectileTraceComponent_C*Registree                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_ProjectileTrace_C::RegisterWhenTraceReady(class UBP_ProjectileTraceComponent_C* Registree)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ProjectileTrace_C", "RegisterWhenTraceReady");

	Params::IBPI_ProjectileTrace_C_RegisterWhenTraceReady_Params Parms{};

	Parms.Registree = Registree;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_ProjectileTrace.BPI_ProjectileTrace_C.IsReadyToTrace
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               IsReady                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_ProjectileTrace_C::IsReadyToTrace(bool* IsReady)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ProjectileTrace_C", "IsReadyToTrace");

	Params::IBPI_ProjectileTrace_C_IsReadyToTrace_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsReady != nullptr)
		*IsReady = Parms.IsReady;

}


// Function BPI_ProjectileTrace.BPI_ProjectileTrace_C.ShouldHideOnFirstCollision
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldStopTrace                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_ProjectileTrace_C::ShouldHideOnFirstCollision(bool* ShouldStopTrace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ProjectileTrace_C", "ShouldHideOnFirstCollision");

	Params::IBPI_ProjectileTrace_C_ShouldHideOnFirstCollision_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ShouldStopTrace != nullptr)
		*ShouldStopTrace = Parms.ShouldStopTrace;

}


// Function BPI_ProjectileTrace.BPI_ProjectileTrace_C.TraceOffset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  TraceOffset                                                      (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_ProjectileTrace_C::TraceOffset(struct FTransform* TraceOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ProjectileTrace_C", "TraceOffset");

	Params::IBPI_ProjectileTrace_C_TraceOffset_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TraceOffset != nullptr)
		*TraceOffset = std::move(Parms.TraceOffset);

}


// Function BPI_ProjectileTrace.BPI_ProjectileTrace_C.TraceIgnoreActors
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              TraceIgnoreActors                                                (Parm, OutParm)

void IBPI_ProjectileTrace_C::TraceIgnoreActors(TArray<class AActor*>* TraceIgnoreActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ProjectileTrace_C", "TraceIgnoreActors");

	Params::IBPI_ProjectileTrace_C_TraceIgnoreActors_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TraceIgnoreActors != nullptr)
		*TraceIgnoreActors = std::move(Parms.TraceIgnoreActors);

}


// Function BPI_ProjectileTrace.BPI_ProjectileTrace_C.TraceImpactDetected
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TimeToImpact                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitVelocity                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_ProjectileTrace_C::TraceImpactDetected(double TimeToImpact, const struct FVector& HitVelocity, const struct FHitResult& HitResult, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ProjectileTrace_C", "TraceImpactDetected");

	Params::IBPI_ProjectileTrace_C_TraceImpactDetected_Params Parms{};

	Parms.TimeToImpact = TimeToImpact;
	Parms.HitVelocity = HitVelocity;
	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}

}


