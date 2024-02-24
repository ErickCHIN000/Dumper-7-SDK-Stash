#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_Melee_Trail.ElementalEffectCollection_Melee_Trail_C
// (None)

class UClass* UElementalEffectCollection_Melee_Trail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_Melee_Trail_C");

	return Clss;
}


// ElementalEffectCollection_Melee_Trail_C ElementalEffectCollection_Melee_Trail.Default__ElementalEffectCollection_Melee_Trail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_Melee_Trail_C* UElementalEffectCollection_Melee_Trail_C::GetDefaultObj()
{
	static class UElementalEffectCollection_Melee_Trail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_Melee_Trail_C*>(UElementalEffectCollection_Melee_Trail_C::StaticClass()->DefaultObject);

	return Default;
}

}


