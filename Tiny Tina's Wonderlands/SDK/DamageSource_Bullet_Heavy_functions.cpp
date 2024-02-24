#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Bullet_Heavy.DamageSource_Bullet_Heavy_C
// (None)

class UClass* UDamageSource_Bullet_Heavy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Bullet_Heavy_C");

	return Clss;
}


// DamageSource_Bullet_Heavy_C DamageSource_Bullet_Heavy.Default__DamageSource_Bullet_Heavy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Bullet_Heavy_C* UDamageSource_Bullet_Heavy_C::GetDefaultObj()
{
	static class UDamageSource_Bullet_Heavy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Bullet_Heavy_C*>(UDamageSource_Bullet_Heavy_C::StaticClass()->DefaultObject);

	return Default;
}

}


