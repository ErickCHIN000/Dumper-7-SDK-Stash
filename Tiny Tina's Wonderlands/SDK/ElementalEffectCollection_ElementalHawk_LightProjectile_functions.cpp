#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_ElementalHawk_LightProjectile.ElementalEffectCollection_ElementalHawk_LightProjectile_C
// (None)

class UClass* UElementalEffectCollection_ElementalHawk_LightProjectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_ElementalHawk_LightProjectile_C");

	return Clss;
}


// ElementalEffectCollection_ElementalHawk_LightProjectile_C ElementalEffectCollection_ElementalHawk_LightProjectile.Default__ElementalEffectCollection_ElementalHawk_LightProjectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_ElementalHawk_LightProjectile_C* UElementalEffectCollection_ElementalHawk_LightProjectile_C::GetDefaultObj()
{
	static class UElementalEffectCollection_ElementalHawk_LightProjectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_ElementalHawk_LightProjectile_C*>(UElementalEffectCollection_ElementalHawk_LightProjectile_C::StaticClass()->DefaultObject);

	return Default;
}

}


