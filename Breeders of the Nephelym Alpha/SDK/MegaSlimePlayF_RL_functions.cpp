#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MegaSlimePlayF_RL.MegaSlimePlayF_RL_C
// (None)

class UClass* UMegaSlimePlayF_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MegaSlimePlayF_RL_C");

	return Clss;
}


// MegaSlimePlayF_RL_C MegaSlimePlayF_RL.Default__MegaSlimePlayF_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMegaSlimePlayF_RL_C* UMegaSlimePlayF_RL_C::GetDefaultObj()
{
	static class UMegaSlimePlayF_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMegaSlimePlayF_RL_C*>(UMegaSlimePlayF_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


