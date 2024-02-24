#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpellMod_IceSpike_Mod_05.SpellMod_IceSpike_Mod_05_C
// (None)

class UClass* USpellMod_IceSpike_Mod_05_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpellMod_IceSpike_Mod_05_C");

	return Clss;
}


// SpellMod_IceSpike_Mod_05_C SpellMod_IceSpike_Mod_05.Default__SpellMod_IceSpike_Mod_05_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpellMod_IceSpike_Mod_05_C* USpellMod_IceSpike_Mod_05_C::GetDefaultObj()
{
	static class USpellMod_IceSpike_Mod_05_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpellMod_IceSpike_Mod_05_C*>(USpellMod_IceSpike_Mod_05_C::StaticClass()->DefaultObject);

	return Default;
}

}


