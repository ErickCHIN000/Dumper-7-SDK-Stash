#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Projectile.BPI_Projectile_C
// (None)

class UClass* IBPI_Projectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Projectile_C");

	return Clss;
}


// BPI_Projectile_C BPI_Projectile.Default__BPI_Projectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Projectile_C* IBPI_Projectile_C::GetDefaultObj()
{
	static class IBPI_Projectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Projectile_C*>(IBPI_Projectile_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Projectile.BPI_Projectile_C.GetMaximumRange
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             InitialHeight                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Range                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Projectile_C::GetMaximumRange(double InitialHeight, double* Range)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Projectile_C", "GetMaximumRange");

	Params::IBPI_Projectile_C_GetMaximumRange_Params Parms{};

	Parms.InitialHeight = InitialHeight;

	UObject::ProcessEvent(Func, &Parms);

	if (Range != nullptr)
		*Range = Parms.Range;

}


// Function BPI_Projectile.BPI_Projectile_C.GetImpactDecal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_Projectile_C::GetImpactDecal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Projectile_C", "GetImpactDecal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_Projectile.BPI_Projectile_C.GetImpactParticle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_Projectile_C::GetImpactParticle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Projectile_C", "GetImpactParticle");



	UObject::ProcessEvent(Func, nullptr);

}

}


