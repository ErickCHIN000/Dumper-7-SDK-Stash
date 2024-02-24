#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_Spell_Fireball_Mod5_Dark.LightProj_Spell_Fireball_Mod5_Dark_C
// (None)

class UClass* ULightProj_Spell_Fireball_Mod5_Dark_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_Spell_Fireball_Mod5_Dark_C");

	return Clss;
}


// LightProj_Spell_Fireball_Mod5_Dark_C LightProj_Spell_Fireball_Mod5_Dark.Default__LightProj_Spell_Fireball_Mod5_Dark_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_Spell_Fireball_Mod5_Dark_C* ULightProj_Spell_Fireball_Mod5_Dark_C::GetDefaultObj()
{
	static class ULightProj_Spell_Fireball_Mod5_Dark_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_Spell_Fireball_Mod5_Dark_C*>(ULightProj_Spell_Fireball_Mod5_Dark_C::StaticClass()->DefaultObject);

	return Default;
}

}


