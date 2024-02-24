#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DarkdwellerHand_JumpAttack.DarkdwellerHand_JumpAttack_C
// (Actor)

class UClass* ADarkdwellerHand_JumpAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DarkdwellerHand_JumpAttack_C");

	return Clss;
}


// DarkdwellerHand_JumpAttack_C DarkdwellerHand_JumpAttack.Default__DarkdwellerHand_JumpAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADarkdwellerHand_JumpAttack_C* ADarkdwellerHand_JumpAttack_C::GetDefaultObj()
{
	static class ADarkdwellerHand_JumpAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADarkdwellerHand_JumpAttack_C*>(ADarkdwellerHand_JumpAttack_C::StaticClass()->DefaultObject);

	return Default;
}

}


