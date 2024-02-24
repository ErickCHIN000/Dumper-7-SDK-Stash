#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cond_CrewChallengeMetaCompletion_OWShortcuts.Cond_CrewChallengeMetaCompletion_OWShortcuts_C
// (None)

class UClass* UCond_CrewChallengeMetaCompletion_OWShortcuts_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cond_CrewChallengeMetaCompletion_OWShortcuts_C");

	return Clss;
}


// Cond_CrewChallengeMetaCompletion_OWShortcuts_C Cond_CrewChallengeMetaCompletion_OWShortcuts.Default__Cond_CrewChallengeMetaCompletion_OWShortcuts_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCond_CrewChallengeMetaCompletion_OWShortcuts_C* UCond_CrewChallengeMetaCompletion_OWShortcuts_C::GetDefaultObj()
{
	static class UCond_CrewChallengeMetaCompletion_OWShortcuts_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCond_CrewChallengeMetaCompletion_OWShortcuts_C*>(UCond_CrewChallengeMetaCompletion_OWShortcuts_C::StaticClass()->DefaultObject);

	return Default;
}

}


