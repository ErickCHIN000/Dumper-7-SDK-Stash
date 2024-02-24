#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_Spell_Lightning_Mod01_Bounce3.LightProj_Spell_Lightning_Mod01_Bounce3_C
// (None)

class UClass* ULightProj_Spell_Lightning_Mod01_Bounce3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_Spell_Lightning_Mod01_Bounce3_C");

	return Clss;
}


// LightProj_Spell_Lightning_Mod01_Bounce3_C LightProj_Spell_Lightning_Mod01_Bounce3.Default__LightProj_Spell_Lightning_Mod01_Bounce3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_Spell_Lightning_Mod01_Bounce3_C* ULightProj_Spell_Lightning_Mod01_Bounce3_C::GetDefaultObj()
{
	static class ULightProj_Spell_Lightning_Mod01_Bounce3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_Spell_Lightning_Mod01_Bounce3_C*>(ULightProj_Spell_Lightning_Mod01_Bounce3_C::StaticClass()->DefaultObject);

	return Default;
}

}


