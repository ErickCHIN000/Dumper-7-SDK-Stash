#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_MagicMissile_Projectile_Audio.ElementalEffectCollection_MagicMissile_Projectile_Audio_C
// (None)

class UClass* UElementalEffectCollection_MagicMissile_Projectile_Audio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_MagicMissile_Projectile_Audio_C");

	return Clss;
}


// ElementalEffectCollection_MagicMissile_Projectile_Audio_C ElementalEffectCollection_MagicMissile_Projectile_Audio.Default__ElementalEffectCollection_MagicMissile_Projectile_Audio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_MagicMissile_Projectile_Audio_C* UElementalEffectCollection_MagicMissile_Projectile_Audio_C::GetDefaultObj()
{
	static class UElementalEffectCollection_MagicMissile_Projectile_Audio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_MagicMissile_Projectile_Audio_C*>(UElementalEffectCollection_MagicMissile_Projectile_Audio_C::StaticClass()->DefaultObject);

	return Default;
}

}


