#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_OilNSpice.ElementalEffectCollection_OilNSpice_C
// (None)

class UClass* UElementalEffectCollection_OilNSpice_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_OilNSpice_C");

	return Clss;
}


// ElementalEffectCollection_OilNSpice_C ElementalEffectCollection_OilNSpice.Default__ElementalEffectCollection_OilNSpice_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_OilNSpice_C* UElementalEffectCollection_OilNSpice_C::GetDefaultObj()
{
	static class UElementalEffectCollection_OilNSpice_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_OilNSpice_C*>(UElementalEffectCollection_OilNSpice_C::StaticClass()->DefaultObject);

	return Default;
}

}


