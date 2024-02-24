#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ADirection_Mushroom_DeathRagdollAnimation.ADirection_Mushroom_DeathRagdollAnimation_C
// (None)

class UClass* UADirection_Mushroom_DeathRagdollAnimation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ADirection_Mushroom_DeathRagdollAnimation_C");

	return Clss;
}


// ADirection_Mushroom_DeathRagdollAnimation_C ADirection_Mushroom_DeathRagdollAnimation.Default__ADirection_Mushroom_DeathRagdollAnimation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UADirection_Mushroom_DeathRagdollAnimation_C* UADirection_Mushroom_DeathRagdollAnimation_C::GetDefaultObj()
{
	static class UADirection_Mushroom_DeathRagdollAnimation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UADirection_Mushroom_DeathRagdollAnimation_C*>(UADirection_Mushroom_DeathRagdollAnimation_C::StaticClass()->DefaultObject);

	return Default;
}

}


