#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_Spell_Fireball_Mod5_Fire.LightProj_Spell_Fireball_Mod5_Fire_C
// (None)

class UClass* ULightProj_Spell_Fireball_Mod5_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_Spell_Fireball_Mod5_Fire_C");

	return Clss;
}


// LightProj_Spell_Fireball_Mod5_Fire_C LightProj_Spell_Fireball_Mod5_Fire.Default__LightProj_Spell_Fireball_Mod5_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_Spell_Fireball_Mod5_Fire_C* ULightProj_Spell_Fireball_Mod5_Fire_C::GetDefaultObj()
{
	static class ULightProj_Spell_Fireball_Mod5_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_Spell_Fireball_Mod5_Fire_C*>(ULightProj_Spell_Fireball_Mod5_Fire_C::StaticClass()->DefaultObject);

	return Default;
}

}


