#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FaleneMythologyHistory_RL.FaleneMythologyHistory_RL_C
// (None)

class UClass* UFaleneMythologyHistory_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaleneMythologyHistory_RL_C");

	return Clss;
}


// FaleneMythologyHistory_RL_C FaleneMythologyHistory_RL.Default__FaleneMythologyHistory_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFaleneMythologyHistory_RL_C* UFaleneMythologyHistory_RL_C::GetDefaultObj()
{
	static class UFaleneMythologyHistory_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaleneMythologyHistory_RL_C*>(UFaleneMythologyHistory_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


