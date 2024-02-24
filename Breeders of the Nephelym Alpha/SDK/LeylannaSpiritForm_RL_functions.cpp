#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaSpiritForm_RL.LeylannaSpiritForm_RL_C
// (None)

class UClass* ULeylannaSpiritForm_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaSpiritForm_RL_C");

	return Clss;
}


// LeylannaSpiritForm_RL_C LeylannaSpiritForm_RL.Default__LeylannaSpiritForm_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaSpiritForm_RL_C* ULeylannaSpiritForm_RL_C::GetDefaultObj()
{
	static class ULeylannaSpiritForm_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaSpiritForm_RL_C*>(ULeylannaSpiritForm_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


