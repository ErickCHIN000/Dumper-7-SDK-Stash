#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DarkdwellerHand.DarkdwellerHand_C
// (Actor)

class UClass* ADarkdwellerHand_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DarkdwellerHand_C");

	return Clss;
}


// DarkdwellerHand_C DarkdwellerHand.Default__DarkdwellerHand_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADarkdwellerHand_C* ADarkdwellerHand_C::GetDefaultObj()
{
	static class ADarkdwellerHand_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADarkdwellerHand_C*>(ADarkdwellerHand_C::StaticClass()->DefaultObject);

	return Default;
}

}


