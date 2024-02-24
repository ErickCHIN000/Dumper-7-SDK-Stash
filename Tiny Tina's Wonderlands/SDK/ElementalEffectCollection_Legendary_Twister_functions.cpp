#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_Legendary_Twister.ElementalEffectCollection_Legendary_Twister_C
// (None)

class UClass* UElementalEffectCollection_Legendary_Twister_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_Legendary_Twister_C");

	return Clss;
}


// ElementalEffectCollection_Legendary_Twister_C ElementalEffectCollection_Legendary_Twister.Default__ElementalEffectCollection_Legendary_Twister_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_Legendary_Twister_C* UElementalEffectCollection_Legendary_Twister_C::GetDefaultObj()
{
	static class UElementalEffectCollection_Legendary_Twister_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_Legendary_Twister_C*>(UElementalEffectCollection_Legendary_Twister_C::StaticClass()->DefaultObject);

	return Default;
}

}


