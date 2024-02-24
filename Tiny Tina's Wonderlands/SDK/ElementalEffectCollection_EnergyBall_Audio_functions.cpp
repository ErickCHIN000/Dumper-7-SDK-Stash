#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_EnergyBall_Audio.ElementalEffectCollection_EnergyBall_Audio_C
// (None)

class UClass* UElementalEffectCollection_EnergyBall_Audio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_EnergyBall_Audio_C");

	return Clss;
}


// ElementalEffectCollection_EnergyBall_Audio_C ElementalEffectCollection_EnergyBall_Audio.Default__ElementalEffectCollection_EnergyBall_Audio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_EnergyBall_Audio_C* UElementalEffectCollection_EnergyBall_Audio_C::GetDefaultObj()
{
	static class UElementalEffectCollection_EnergyBall_Audio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_EnergyBall_Audio_C*>(UElementalEffectCollection_EnergyBall_Audio_C::StaticClass()->DefaultObject);

	return Default;
}

}


