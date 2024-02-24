#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MegaSlimeSad_RL2.MegaSlimeSad_RL2_C
// (None)

class UClass* UMegaSlimeSad_RL2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MegaSlimeSad_RL2_C");

	return Clss;
}


// MegaSlimeSad_RL2_C MegaSlimeSad_RL2.Default__MegaSlimeSad_RL2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMegaSlimeSad_RL2_C* UMegaSlimeSad_RL2_C::GetDefaultObj()
{
	static class UMegaSlimeSad_RL2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMegaSlimeSad_RL2_C*>(UMegaSlimeSad_RL2_C::StaticClass()->DefaultObject);

	return Default;
}

}


