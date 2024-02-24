#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EmissaryTheWorld_RL.EmissaryTheWorld_RL_C
// (None)

class UClass* UEmissaryTheWorld_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmissaryTheWorld_RL_C");

	return Clss;
}


// EmissaryTheWorld_RL_C EmissaryTheWorld_RL.Default__EmissaryTheWorld_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEmissaryTheWorld_RL_C* UEmissaryTheWorld_RL_C::GetDefaultObj()
{
	static class UEmissaryTheWorld_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmissaryTheWorld_RL_C*>(UEmissaryTheWorld_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


