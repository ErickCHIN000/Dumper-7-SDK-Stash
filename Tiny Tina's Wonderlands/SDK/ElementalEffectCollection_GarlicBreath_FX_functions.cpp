#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_GarlicBreath_FX.ElementalEffectCollection_GarlicBreath_FX_C
// (None)

class UClass* UElementalEffectCollection_GarlicBreath_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_GarlicBreath_FX_C");

	return Clss;
}


// ElementalEffectCollection_GarlicBreath_FX_C ElementalEffectCollection_GarlicBreath_FX.Default__ElementalEffectCollection_GarlicBreath_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_GarlicBreath_FX_C* UElementalEffectCollection_GarlicBreath_FX_C::GetDefaultObj()
{
	static class UElementalEffectCollection_GarlicBreath_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_GarlicBreath_FX_C*>(UElementalEffectCollection_GarlicBreath_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


