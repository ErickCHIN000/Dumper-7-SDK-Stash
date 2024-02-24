#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MegaSlimeAboutOrb_RL.MegaSlimeAboutOrb_RL_C
// (None)

class UClass* UMegaSlimeAboutOrb_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MegaSlimeAboutOrb_RL_C");

	return Clss;
}


// MegaSlimeAboutOrb_RL_C MegaSlimeAboutOrb_RL.Default__MegaSlimeAboutOrb_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMegaSlimeAboutOrb_RL_C* UMegaSlimeAboutOrb_RL_C::GetDefaultObj()
{
	static class UMegaSlimeAboutOrb_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMegaSlimeAboutOrb_RL_C*>(UMegaSlimeAboutOrb_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


