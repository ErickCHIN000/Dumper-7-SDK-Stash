#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EmissaryLoreMythology_RL.EmissaryLoreMythology_RL_C
// (None)

class UClass* UEmissaryLoreMythology_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmissaryLoreMythology_RL_C");

	return Clss;
}


// EmissaryLoreMythology_RL_C EmissaryLoreMythology_RL.Default__EmissaryLoreMythology_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEmissaryLoreMythology_RL_C* UEmissaryLoreMythology_RL_C::GetDefaultObj()
{
	static class UEmissaryLoreMythology_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmissaryLoreMythology_RL_C*>(UEmissaryLoreMythology_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}

