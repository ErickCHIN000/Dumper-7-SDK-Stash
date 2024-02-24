#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_Spell_Hawk_Ricochet_Mod01.LightProj_Spell_Hawk_Ricochet_Mod01_C
// (None)

class UClass* ULightProj_Spell_Hawk_Ricochet_Mod01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_Spell_Hawk_Ricochet_Mod01_C");

	return Clss;
}


// LightProj_Spell_Hawk_Ricochet_Mod01_C LightProj_Spell_Hawk_Ricochet_Mod01.Default__LightProj_Spell_Hawk_Ricochet_Mod01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_Spell_Hawk_Ricochet_Mod01_C* ULightProj_Spell_Hawk_Ricochet_Mod01_C::GetDefaultObj()
{
	static class ULightProj_Spell_Hawk_Ricochet_Mod01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_Spell_Hawk_Ricochet_Mod01_C*>(ULightProj_Spell_Hawk_Ricochet_Mod01_C::StaticClass()->DefaultObject);

	return Default;
}

}


