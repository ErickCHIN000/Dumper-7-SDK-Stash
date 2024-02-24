#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaDefault01_RechargeSpiritForm_RL_F.LeylannaDefault01_RechargeSpiritForm_RL_F_C
// (None)

class UClass* ULeylannaDefault01_RechargeSpiritForm_RL_F_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaDefault01_RechargeSpiritForm_RL_F_C");

	return Clss;
}


// LeylannaDefault01_RechargeSpiritForm_RL_F_C LeylannaDefault01_RechargeSpiritForm_RL_F.Default__LeylannaDefault01_RechargeSpiritForm_RL_F_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaDefault01_RechargeSpiritForm_RL_F_C* ULeylannaDefault01_RechargeSpiritForm_RL_F_C::GetDefaultObj()
{
	static class ULeylannaDefault01_RechargeSpiritForm_RL_F_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaDefault01_RechargeSpiritForm_RL_F_C*>(ULeylannaDefault01_RechargeSpiritForm_RL_F_C::StaticClass()->DefaultObject);

	return Default;
}

}


