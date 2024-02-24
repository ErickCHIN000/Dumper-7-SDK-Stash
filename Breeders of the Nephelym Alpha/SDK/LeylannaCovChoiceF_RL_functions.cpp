#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaCovChoiceF_RL.LeylannaCovChoiceF_RL_C
// (None)

class UClass* ULeylannaCovChoiceF_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaCovChoiceF_RL_C");

	return Clss;
}


// LeylannaCovChoiceF_RL_C LeylannaCovChoiceF_RL.Default__LeylannaCovChoiceF_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaCovChoiceF_RL_C* ULeylannaCovChoiceF_RL_C::GetDefaultObj()
{
	static class ULeylannaCovChoiceF_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaCovChoiceF_RL_C*>(ULeylannaCovChoiceF_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


