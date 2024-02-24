#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InterfaceTedProjectile_Base.InterfaceTedProjectile_Base_C
// (None)

class UClass* IInterfaceTedProjectile_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterfaceTedProjectile_Base_C");

	return Clss;
}


// InterfaceTedProjectile_Base_C InterfaceTedProjectile_Base.Default__InterfaceTedProjectile_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IInterfaceTedProjectile_Base_C* IInterfaceTedProjectile_Base_C::GetDefaultObj()
{
	static class IInterfaceTedProjectile_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IInterfaceTedProjectile_Base_C*>(IInterfaceTedProjectile_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InterfaceTedProjectile_Base.InterfaceTedProjectile_Base_C.GetTedioreProjectileWeaponValues
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                     OwningWeapon                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AmmoCount                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxAmmo                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ShotDamage                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      DamageType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterfaceTedProjectile_Base_C::GetTedioreProjectileWeaponValues(class AWeapon** OwningWeapon, int32* AmmoCount, int32* MaxAmmo, float* ShotDamage, class UClass** DamageType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterfaceTedProjectile_Base_C", "GetTedioreProjectileWeaponValues");

	Params::IInterfaceTedProjectile_Base_C_GetTedioreProjectileWeaponValues_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OwningWeapon != nullptr)
		*OwningWeapon = Parms.OwningWeapon;

	if (AmmoCount != nullptr)
		*AmmoCount = Parms.AmmoCount;

	if (MaxAmmo != nullptr)
		*MaxAmmo = Parms.MaxAmmo;

	if (ShotDamage != nullptr)
		*ShotDamage = Parms.ShotDamage;

	if (DamageType != nullptr)
		*DamageType = Parms.DamageType;

}

}


