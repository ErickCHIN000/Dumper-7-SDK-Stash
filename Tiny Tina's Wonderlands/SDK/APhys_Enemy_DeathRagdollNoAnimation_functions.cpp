#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass APhys_Enemy_DeathRagdollNoAnimation.APhys_Enemy_DeathRagdollNoAnimation_C
// (None)

class UClass* UAPhys_Enemy_DeathRagdollNoAnimation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("APhys_Enemy_DeathRagdollNoAnimation_C");

	return Clss;
}


// APhys_Enemy_DeathRagdollNoAnimation_C APhys_Enemy_DeathRagdollNoAnimation.Default__APhys_Enemy_DeathRagdollNoAnimation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAPhys_Enemy_DeathRagdollNoAnimation_C* UAPhys_Enemy_DeathRagdollNoAnimation_C::GetDefaultObj()
{
	static class UAPhys_Enemy_DeathRagdollNoAnimation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAPhys_Enemy_DeathRagdollNoAnimation_C*>(UAPhys_Enemy_DeathRagdollNoAnimation_C::StaticClass()->DefaultObject);

	return Default;
}

}


