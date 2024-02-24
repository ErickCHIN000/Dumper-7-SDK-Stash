#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_Spell_ElementalHawk_Mod02.LightProj_Spell_ElementalHawk_Mod02_C
// (None)

class UClass* ULightProj_Spell_ElementalHawk_Mod02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_Spell_ElementalHawk_Mod02_C");

	return Clss;
}


// LightProj_Spell_ElementalHawk_Mod02_C LightProj_Spell_ElementalHawk_Mod02.Default__LightProj_Spell_ElementalHawk_Mod02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_Spell_ElementalHawk_Mod02_C* ULightProj_Spell_ElementalHawk_Mod02_C::GetDefaultObj()
{
	static class ULightProj_Spell_ElementalHawk_Mod02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_Spell_ElementalHawk_Mod02_C*>(ULightProj_Spell_ElementalHawk_Mod02_C::StaticClass()->DefaultObject);

	return Default;
}

}


