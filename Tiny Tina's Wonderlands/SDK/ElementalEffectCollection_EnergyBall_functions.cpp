#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_EnergyBall.ElementalEffectCollection_EnergyBall_C
// (None)

class UClass* UElementalEffectCollection_EnergyBall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_EnergyBall_C");

	return Clss;
}


// ElementalEffectCollection_EnergyBall_C ElementalEffectCollection_EnergyBall.Default__ElementalEffectCollection_EnergyBall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_EnergyBall_C* UElementalEffectCollection_EnergyBall_C::GetDefaultObj()
{
	static class UElementalEffectCollection_EnergyBall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_EnergyBall_C*>(UElementalEffectCollection_EnergyBall_C::StaticClass()->DefaultObject);

	return Default;
}

}


