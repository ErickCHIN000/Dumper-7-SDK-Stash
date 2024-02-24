#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tediore_Interface.Tediore_Interface_C
// (None)

class UClass* ITediore_Interface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tediore_Interface_C");

	return Clss;
}


// Tediore_Interface_C Tediore_Interface.Default__Tediore_Interface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ITediore_Interface_C* ITediore_Interface_C::GetDefaultObj()
{
	static class ITediore_Interface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ITediore_Interface_C*>(ITediore_Interface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Tediore_Interface.Tediore_Interface_C.Tediore_WeaponData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DamageRadius                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      DamageTypeClass                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumMIRVProjectiles                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FireRate                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LoadedAmmo                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ThrowType                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ITediore_Interface_C::Tediore_WeaponData(float* DamageRadius, class UClass** DamageTypeClass, int32* NumMIRVProjectiles, float* FireRate, float* LoadedAmmo, int32* ThrowType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tediore_Interface_C", "Tediore_WeaponData");

	Params::ITediore_Interface_C_Tediore_WeaponData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DamageRadius != nullptr)
		*DamageRadius = Parms.DamageRadius;

	if (DamageTypeClass != nullptr)
		*DamageTypeClass = Parms.DamageTypeClass;

	if (NumMIRVProjectiles != nullptr)
		*NumMIRVProjectiles = Parms.NumMIRVProjectiles;

	if (FireRate != nullptr)
		*FireRate = Parms.FireRate;

	if (LoadedAmmo != nullptr)
		*LoadedAmmo = Parms.LoadedAmmo;

	if (ThrowType != nullptr)
		*ThrowType = Parms.ThrowType;

}

}


