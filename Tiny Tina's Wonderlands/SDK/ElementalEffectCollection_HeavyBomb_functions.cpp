#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_HeavyBomb.ElementalEffectCollection_HeavyBomb_C
// (None)

class UClass* UElementalEffectCollection_HeavyBomb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_HeavyBomb_C");

	return Clss;
}


// ElementalEffectCollection_HeavyBomb_C ElementalEffectCollection_HeavyBomb.Default__ElementalEffectCollection_HeavyBomb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_HeavyBomb_C* UElementalEffectCollection_HeavyBomb_C::GetDefaultObj()
{
	static class UElementalEffectCollection_HeavyBomb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_HeavyBomb_C*>(UElementalEffectCollection_HeavyBomb_C::StaticClass()->DefaultObject);

	return Default;
}

}


