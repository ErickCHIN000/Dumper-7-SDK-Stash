#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MegaSlimePlayM_RL.MegaSlimePlayM_RL_C
// (None)

class UClass* UMegaSlimePlayM_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MegaSlimePlayM_RL_C");

	return Clss;
}


// MegaSlimePlayM_RL_C MegaSlimePlayM_RL.Default__MegaSlimePlayM_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMegaSlimePlayM_RL_C* UMegaSlimePlayM_RL_C::GetDefaultObj()
{
	static class UMegaSlimePlayM_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMegaSlimePlayM_RL_C*>(UMegaSlimePlayM_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


