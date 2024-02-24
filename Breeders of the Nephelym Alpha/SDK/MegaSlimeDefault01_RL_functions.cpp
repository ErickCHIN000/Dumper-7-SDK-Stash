#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MegaSlimeDefault01_RL.MegaSlimeDefault01_RL_C
// (None)

class UClass* UMegaSlimeDefault01_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MegaSlimeDefault01_RL_C");

	return Clss;
}


// MegaSlimeDefault01_RL_C MegaSlimeDefault01_RL.Default__MegaSlimeDefault01_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMegaSlimeDefault01_RL_C* UMegaSlimeDefault01_RL_C::GetDefaultObj()
{
	static class UMegaSlimeDefault01_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMegaSlimeDefault01_RL_C*>(UMegaSlimeDefault01_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


