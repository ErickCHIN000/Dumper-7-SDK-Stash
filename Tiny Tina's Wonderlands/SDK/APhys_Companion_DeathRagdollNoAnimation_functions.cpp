#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass APhys_Companion_DeathRagdollNoAnimation.APhys_Companion_DeathRagdollNoAnimation_C
// (None)

class UClass* UAPhys_Companion_DeathRagdollNoAnimation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("APhys_Companion_DeathRagdollNoAnimation_C");

	return Clss;
}


// APhys_Companion_DeathRagdollNoAnimation_C APhys_Companion_DeathRagdollNoAnimation.Default__APhys_Companion_DeathRagdollNoAnimation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAPhys_Companion_DeathRagdollNoAnimation_C* UAPhys_Companion_DeathRagdollNoAnimation_C::GetDefaultObj()
{
	static class UAPhys_Companion_DeathRagdollNoAnimation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAPhys_Companion_DeathRagdollNoAnimation_C*>(UAPhys_Companion_DeathRagdollNoAnimation_C::StaticClass()->DefaultObject);

	return Default;
}

}


