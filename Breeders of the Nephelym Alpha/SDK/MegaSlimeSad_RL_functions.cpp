#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MegaSlimeSad_RL.MegaSlimeSad_RL_C
// (None)

class UClass* UMegaSlimeSad_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MegaSlimeSad_RL_C");

	return Clss;
}


// MegaSlimeSad_RL_C MegaSlimeSad_RL.Default__MegaSlimeSad_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMegaSlimeSad_RL_C* UMegaSlimeSad_RL_C::GetDefaultObj()
{
	static class UMegaSlimeSad_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMegaSlimeSad_RL_C*>(UMegaSlimeSad_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


