#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_EruptProjectile.ElementalEffectCollection_EruptProjectile_C
// (None)

class UClass* UElementalEffectCollection_EruptProjectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_EruptProjectile_C");

	return Clss;
}


// ElementalEffectCollection_EruptProjectile_C ElementalEffectCollection_EruptProjectile.Default__ElementalEffectCollection_EruptProjectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_EruptProjectile_C* UElementalEffectCollection_EruptProjectile_C::GetDefaultObj()
{
	static class UElementalEffectCollection_EruptProjectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_EruptProjectile_C*>(UElementalEffectCollection_EruptProjectile_C::StaticClass()->DefaultObject);

	return Default;
}

}


