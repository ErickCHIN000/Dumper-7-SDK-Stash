#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_TurnInPlace_Left_NPC.GA_CreatureAbility_TurnInPlace_Left_NPC_C
// (None)

class UClass* UGA_CreatureAbility_TurnInPlace_Left_NPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_TurnInPlace_Left_NPC_C");

	return Clss;
}


// GA_CreatureAbility_TurnInPlace_Left_NPC_C GA_CreatureAbility_TurnInPlace_Left_NPC.Default__GA_CreatureAbility_TurnInPlace_Left_NPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_TurnInPlace_Left_NPC_C* UGA_CreatureAbility_TurnInPlace_Left_NPC_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_TurnInPlace_Left_NPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_TurnInPlace_Left_NPC_C*>(UGA_CreatureAbility_TurnInPlace_Left_NPC_C::StaticClass()->DefaultObject);

	return Default;
}

}


