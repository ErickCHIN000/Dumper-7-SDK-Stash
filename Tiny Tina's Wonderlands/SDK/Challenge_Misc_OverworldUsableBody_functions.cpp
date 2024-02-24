#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Misc_OverworldUsableBody.Challenge_Misc_OverworldUsableBody_C
// (None)

class UClass* UChallenge_Misc_OverworldUsableBody_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Misc_OverworldUsableBody_C");

	return Clss;
}


// Challenge_Misc_OverworldUsableBody_C Challenge_Misc_OverworldUsableBody.Default__Challenge_Misc_OverworldUsableBody_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Misc_OverworldUsableBody_C* UChallenge_Misc_OverworldUsableBody_C::GetDefaultObj()
{
	static class UChallenge_Misc_OverworldUsableBody_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Misc_OverworldUsableBody_C*>(UChallenge_Misc_OverworldUsableBody_C::StaticClass()->DefaultObject);

	return Default;
}

}


