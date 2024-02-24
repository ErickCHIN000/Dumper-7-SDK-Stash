#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_Giant_Nova.GA_CreatureAbility_Giant_Nova_C
// (None)

class UClass* UGA_CreatureAbility_Giant_Nova_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_Giant_Nova_C");

	return Clss;
}


// GA_CreatureAbility_Giant_Nova_C GA_CreatureAbility_Giant_Nova.Default__GA_CreatureAbility_Giant_Nova_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_Giant_Nova_C* UGA_CreatureAbility_Giant_Nova_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_Giant_Nova_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_Giant_Nova_C*>(UGA_CreatureAbility_Giant_Nova_C::StaticClass()->DefaultObject);

	return Default;
}

}


