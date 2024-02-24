#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaCovChoiceT_RL.LeylannaCovChoiceT_RL_C
// (None)

class UClass* ULeylannaCovChoiceT_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaCovChoiceT_RL_C");

	return Clss;
}


// LeylannaCovChoiceT_RL_C LeylannaCovChoiceT_RL.Default__LeylannaCovChoiceT_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaCovChoiceT_RL_C* ULeylannaCovChoiceT_RL_C::GetDefaultObj()
{
	static class ULeylannaCovChoiceT_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaCovChoiceT_RL_C*>(ULeylannaCovChoiceT_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


