#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Necromancer_LongReaperOfSouls.Challenge_Necromancer_LongReaperOfSouls_C
// (None)

class UClass* UChallenge_Necromancer_LongReaperOfSouls_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Necromancer_LongReaperOfSouls_C");

	return Clss;
}


// Challenge_Necromancer_LongReaperOfSouls_C Challenge_Necromancer_LongReaperOfSouls.Default__Challenge_Necromancer_LongReaperOfSouls_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Necromancer_LongReaperOfSouls_C* UChallenge_Necromancer_LongReaperOfSouls_C::GetDefaultObj()
{
	static class UChallenge_Necromancer_LongReaperOfSouls_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Necromancer_LongReaperOfSouls_C*>(UChallenge_Necromancer_LongReaperOfSouls_C::StaticClass()->DefaultObject);

	return Default;
}

}


