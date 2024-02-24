#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_Spell_Lightning_Mod01_Bounce.LightProj_Spell_Lightning_Mod01_Bounce_C
// (None)

class UClass* ULightProj_Spell_Lightning_Mod01_Bounce_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_Spell_Lightning_Mod01_Bounce_C");

	return Clss;
}


// LightProj_Spell_Lightning_Mod01_Bounce_C LightProj_Spell_Lightning_Mod01_Bounce.Default__LightProj_Spell_Lightning_Mod01_Bounce_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_Spell_Lightning_Mod01_Bounce_C* ULightProj_Spell_Lightning_Mod01_Bounce_C::GetDefaultObj()
{
	static class ULightProj_Spell_Lightning_Mod01_Bounce_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_Spell_Lightning_Mod01_Bounce_C*>(ULightProj_Spell_Lightning_Mod01_Bounce_C::StaticClass()->DefaultObject);

	return Default;
}

}


