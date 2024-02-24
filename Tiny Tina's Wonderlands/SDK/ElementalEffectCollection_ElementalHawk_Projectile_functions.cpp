#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_ElementalHawk_Projectile.ElementalEffectCollection_ElementalHawk_Projectile_C
// (None)

class UClass* UElementalEffectCollection_ElementalHawk_Projectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_ElementalHawk_Projectile_C");

	return Clss;
}


// ElementalEffectCollection_ElementalHawk_Projectile_C ElementalEffectCollection_ElementalHawk_Projectile.Default__ElementalEffectCollection_ElementalHawk_Projectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_ElementalHawk_Projectile_C* UElementalEffectCollection_ElementalHawk_Projectile_C::GetDefaultObj()
{
	static class UElementalEffectCollection_ElementalHawk_Projectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_ElementalHawk_Projectile_C*>(UElementalEffectCollection_ElementalHawk_Projectile_C::StaticClass()->DefaultObject);

	return Default;
}

}


