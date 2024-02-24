#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cond_CrewChallengeMetaCompletion_Shrines.Cond_CrewChallengeMetaCompletion_Shrines_C
// (None)

class UClass* UCond_CrewChallengeMetaCompletion_Shrines_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cond_CrewChallengeMetaCompletion_Shrines_C");

	return Clss;
}


// Cond_CrewChallengeMetaCompletion_Shrines_C Cond_CrewChallengeMetaCompletion_Shrines.Default__Cond_CrewChallengeMetaCompletion_Shrines_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCond_CrewChallengeMetaCompletion_Shrines_C* UCond_CrewChallengeMetaCompletion_Shrines_C::GetDefaultObj()
{
	static class UCond_CrewChallengeMetaCompletion_Shrines_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCond_CrewChallengeMetaCompletion_Shrines_C*>(UCond_CrewChallengeMetaCompletion_Shrines_C::StaticClass()->DefaultObject);

	return Default;
}

}


