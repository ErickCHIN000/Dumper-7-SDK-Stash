#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Neutral_Dodger.Neutral_Dodger_C
// (Actor, Pawn)

class UClass* ANeutral_Dodger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Neutral_Dodger_C");

	return Clss;
}


// Neutral_Dodger_C Neutral_Dodger.Default__Neutral_Dodger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANeutral_Dodger_C* ANeutral_Dodger_C::GetDefaultObj()
{
	static class ANeutral_Dodger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANeutral_Dodger_C*>(ANeutral_Dodger_C::StaticClass()->DefaultObject);

	return Default;
}

}


