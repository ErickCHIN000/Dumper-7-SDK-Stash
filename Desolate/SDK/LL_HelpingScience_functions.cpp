#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_HelpingScience.LL_HelpingScience_C
// (Actor)

class UClass* ALL_HelpingScience_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_HelpingScience_C");

	return Clss;
}


// LL_HelpingScience_C LL_HelpingScience.Default__LL_HelpingScience_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_HelpingScience_C* ALL_HelpingScience_C::GetDefaultObj()
{
	static class ALL_HelpingScience_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_HelpingScience_C*>(ALL_HelpingScience_C::StaticClass()->DefaultObject);

	return Default;
}

}


