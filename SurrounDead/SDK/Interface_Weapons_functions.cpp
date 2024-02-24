#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interface_Weapons.Interface_Weapons_C
// (None)

class UClass* IInterface_Weapons_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interface_Weapons_C");

	return Clss;
}


// Interface_Weapons_C Interface_Weapons.Default__Interface_Weapons_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IInterface_Weapons_C* IInterface_Weapons_C::GetDefaultObj()
{
	static class IInterface_Weapons_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IInterface_Weapons_C*>(IInterface_Weapons_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Interface_Weapons.Interface_Weapons_C.GetWeaponType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_WeaponType         WeaponType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterface_Weapons_C::GetWeaponType(enum class Enum_WeaponType* WeaponType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_Weapons_C", "GetWeaponType");

	Params::IInterface_Weapons_C_GetWeaponType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WeaponType != nullptr)
		*WeaponType = Parms.WeaponType;

}


// Function Interface_Weapons.Interface_Weapons_C.StopFire
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInterface_Weapons_C::StopFire()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_Weapons_C", "StopFire");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Interface_Weapons.Interface_Weapons_C.StartFire
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInterface_Weapons_C::StartFire()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_Weapons_C", "StartFire");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Interface_Weapons.Interface_Weapons_C.FireWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInterface_Weapons_C::FireWeapon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_Weapons_C", "FireWeapon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Interface_Weapons.Interface_Weapons_C.BlendspaceInt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Int                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterface_Weapons_C::BlendspaceInt(int32* Int)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_Weapons_C", "BlendspaceInt");

	Params::IInterface_Weapons_C_BlendspaceInt_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Int != nullptr)
		*Int = Parms.Int;

}

}


