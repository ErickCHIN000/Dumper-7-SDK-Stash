#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_GrenadeTrail.ElementalEffectCollection_GrenadeTrail_C
// (None)

class UClass* UElementalEffectCollection_GrenadeTrail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_GrenadeTrail_C");

	return Clss;
}


// ElementalEffectCollection_GrenadeTrail_C ElementalEffectCollection_GrenadeTrail.Default__ElementalEffectCollection_GrenadeTrail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_GrenadeTrail_C* UElementalEffectCollection_GrenadeTrail_C::GetDefaultObj()
{
	static class UElementalEffectCollection_GrenadeTrail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_GrenadeTrail_C*>(UElementalEffectCollection_GrenadeTrail_C::StaticClass()->DefaultObject);

	return Default;
}

}


