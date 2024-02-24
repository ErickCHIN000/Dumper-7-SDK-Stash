#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_HydraProjectiles.ElementalEffectCollection_HydraProjectiles_C
// (None)

class UClass* UElementalEffectCollection_HydraProjectiles_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_HydraProjectiles_C");

	return Clss;
}


// ElementalEffectCollection_HydraProjectiles_C ElementalEffectCollection_HydraProjectiles.Default__ElementalEffectCollection_HydraProjectiles_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_HydraProjectiles_C* UElementalEffectCollection_HydraProjectiles_C::GetDefaultObj()
{
	static class UElementalEffectCollection_HydraProjectiles_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_HydraProjectiles_C*>(UElementalEffectCollection_HydraProjectiles_C::StaticClass()->DefaultObject);

	return Default;
}

}


