#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C
// (None)

class UClass* IBPI_IO_Combat_Barrel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_IO_Combat_Barrel_C");

	return Clss;
}


// BPI_IO_Combat_Barrel_C BPI_IO_Combat_Barrel.Default__BPI_IO_Combat_Barrel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_IO_Combat_Barrel_C* IBPI_IO_Combat_Barrel_C::GetDefaultObj()
{
	static class IBPI_IO_Combat_Barrel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_IO_Combat_Barrel_C*>(IBPI_IO_Combat_Barrel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_SetNavPainterEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_IO_Combat_Barrel_C::BPI_SetNavPainterEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_IO_Combat_Barrel_C", "BPI_SetNavPainterEnabled");

	Params::IBPI_IO_Combat_Barrel_C_BPI_SetNavPainterEnabled_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_ResetHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_IO_Combat_Barrel_C::BPI_ResetHealth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_IO_Combat_Barrel_C", "BPI_ResetHealth");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_ImpulseThrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     ThrowVector                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Force                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    RotatorForSpin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              FuseSpeedScale                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     AdditiveVector                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_IO_Combat_Barrel_C::BPI_ImpulseThrow(const struct FVector& ThrowVector, float Force, const struct FRotator& RotatorForSpin, float FuseSpeedScale, const struct FVector& AdditiveVector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_IO_Combat_Barrel_C", "BPI_ImpulseThrow");

	Params::IBPI_IO_Combat_Barrel_C_BPI_ImpulseThrow_Params Parms{};

	Parms.ThrowVector = ThrowVector;
	Parms.Force = Force;
	Parms.RotatorForSpin = RotatorForSpin;
	Parms.FuseSpeedScale = FuseSpeedScale;
	Parms.AdditiveVector = AdditiveVector;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_SetSimulatePhysics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PhysicsOn_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_IO_Combat_Barrel_C::BPI_SetSimulatePhysics(bool PhysicsOn_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_IO_Combat_Barrel_C", "BPI_SetSimulatePhysics");

	Params::IBPI_IO_Combat_Barrel_C_BPI_SetSimulatePhysics_Params Parms{};

	Parms.PhysicsOn_ = PhysicsOn_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_Explode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_IO_Combat_Barrel_C::BPI_Explode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_IO_Combat_Barrel_C", "BPI_Explode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_StartFuse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_IO_Combat_Barrel_C::BPI_StartFuse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_IO_Combat_Barrel_C", "BPI_StartFuse");



	UObject::ProcessEvent(Func, nullptr);

}

}


