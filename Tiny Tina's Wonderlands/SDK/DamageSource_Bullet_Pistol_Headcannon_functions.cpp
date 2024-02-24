#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Bullet_Pistol_Headcannon.DamageSource_Bullet_Pistol_Headcannon_C
// (None)

class UClass* UDamageSource_Bullet_Pistol_Headcannon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Bullet_Pistol_Headcannon_C");

	return Clss;
}


// DamageSource_Bullet_Pistol_Headcannon_C DamageSource_Bullet_Pistol_Headcannon.Default__DamageSource_Bullet_Pistol_Headcannon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Bullet_Pistol_Headcannon_C* UDamageSource_Bullet_Pistol_Headcannon_C::GetDefaultObj()
{
	static class UDamageSource_Bullet_Pistol_Headcannon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Bullet_Pistol_Headcannon_C*>(UDamageSource_Bullet_Pistol_Headcannon_C::StaticClass()->DefaultObject);

	return Default;
}

}


