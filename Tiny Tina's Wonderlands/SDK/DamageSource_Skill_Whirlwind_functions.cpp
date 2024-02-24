#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Skill_Whirlwind.DamageSource_Skill_Whirlwind_C
// (None)

class UClass* UDamageSource_Skill_Whirlwind_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Skill_Whirlwind_C");

	return Clss;
}


// DamageSource_Skill_Whirlwind_C DamageSource_Skill_Whirlwind.Default__DamageSource_Skill_Whirlwind_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Skill_Whirlwind_C* UDamageSource_Skill_Whirlwind_C::GetDefaultObj()
{
	static class UDamageSource_Skill_Whirlwind_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Skill_Whirlwind_C*>(UDamageSource_Skill_Whirlwind_C::StaticClass()->DefaultObject);

	return Default;
}

}


