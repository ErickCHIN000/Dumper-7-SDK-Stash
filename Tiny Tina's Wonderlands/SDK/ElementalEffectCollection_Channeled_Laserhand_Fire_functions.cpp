#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_Channeled_Laserhand_Fire.ElementalEffectCollection_Channeled_Laserhand_Fire_C
// (None)

class UClass* UElementalEffectCollection_Channeled_Laserhand_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_Channeled_Laserhand_Fire_C");

	return Clss;
}


// ElementalEffectCollection_Channeled_Laserhand_Fire_C ElementalEffectCollection_Channeled_Laserhand_Fire.Default__ElementalEffectCollection_Channeled_Laserhand_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_Channeled_Laserhand_Fire_C* UElementalEffectCollection_Channeled_Laserhand_Fire_C::GetDefaultObj()
{
	static class UElementalEffectCollection_Channeled_Laserhand_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_Channeled_Laserhand_Fire_C*>(UElementalEffectCollection_Channeled_Laserhand_Fire_C::StaticClass()->DefaultObject);

	return Default;
}

}


