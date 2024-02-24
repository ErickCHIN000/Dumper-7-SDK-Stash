#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Melee_DragonlordProj.DamageSource_Melee_DragonlordProj_C
// (None)

class UClass* UDamageSource_Melee_DragonlordProj_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Melee_DragonlordProj_C");

	return Clss;
}


// DamageSource_Melee_DragonlordProj_C DamageSource_Melee_DragonlordProj.Default__DamageSource_Melee_DragonlordProj_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Melee_DragonlordProj_C* UDamageSource_Melee_DragonlordProj_C::GetDefaultObj()
{
	static class UDamageSource_Melee_DragonlordProj_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Melee_DragonlordProj_C*>(UDamageSource_Melee_DragonlordProj_C::StaticClass()->DefaultObject);

	return Default;
}

}


