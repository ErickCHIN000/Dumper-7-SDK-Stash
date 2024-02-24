#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_ProjectileGenericTrail.ElementalEffectCollection_ProjectileGenericTrail_C
// (None)

class UClass* UElementalEffectCollection_ProjectileGenericTrail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_ProjectileGenericTrail_C");

	return Clss;
}


// ElementalEffectCollection_ProjectileGenericTrail_C ElementalEffectCollection_ProjectileGenericTrail.Default__ElementalEffectCollection_ProjectileGenericTrail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_ProjectileGenericTrail_C* UElementalEffectCollection_ProjectileGenericTrail_C::GetDefaultObj()
{
	static class UElementalEffectCollection_ProjectileGenericTrail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_ProjectileGenericTrail_C*>(UElementalEffectCollection_ProjectileGenericTrail_C::StaticClass()->DefaultObject);

	return Default;
}

}


