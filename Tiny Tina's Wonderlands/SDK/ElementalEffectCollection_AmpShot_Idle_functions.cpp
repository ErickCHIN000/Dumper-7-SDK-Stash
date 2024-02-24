#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_AmpShot_Idle.ElementalEffectCollection_AmpShot_Idle_C
// (None)

class UClass* UElementalEffectCollection_AmpShot_Idle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_AmpShot_Idle_C");

	return Clss;
}


// ElementalEffectCollection_AmpShot_Idle_C ElementalEffectCollection_AmpShot_Idle.Default__ElementalEffectCollection_AmpShot_Idle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_AmpShot_Idle_C* UElementalEffectCollection_AmpShot_Idle_C::GetDefaultObj()
{
	static class UElementalEffectCollection_AmpShot_Idle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_AmpShot_Idle_C*>(UElementalEffectCollection_AmpShot_Idle_C::StaticClass()->DefaultObject);

	return Default;
}

}


