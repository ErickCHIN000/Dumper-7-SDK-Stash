#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaTheWorld_RL.LeylannaTheWorld_RL_C
// (None)

class UClass* ULeylannaTheWorld_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaTheWorld_RL_C");

	return Clss;
}


// LeylannaTheWorld_RL_C LeylannaTheWorld_RL.Default__LeylannaTheWorld_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaTheWorld_RL_C* ULeylannaTheWorld_RL_C::GetDefaultObj()
{
	static class ULeylannaTheWorld_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaTheWorld_RL_C*>(ULeylannaTheWorld_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


