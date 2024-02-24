#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Ranger_SlayWhileAiming.Challenge_Ranger_SlayWhileAiming_C
// (None)

class UClass* UChallenge_Ranger_SlayWhileAiming_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Ranger_SlayWhileAiming_C");

	return Clss;
}


// Challenge_Ranger_SlayWhileAiming_C Challenge_Ranger_SlayWhileAiming.Default__Challenge_Ranger_SlayWhileAiming_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Ranger_SlayWhileAiming_C* UChallenge_Ranger_SlayWhileAiming_C::GetDefaultObj()
{
	static class UChallenge_Ranger_SlayWhileAiming_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Ranger_SlayWhileAiming_C*>(UChallenge_Ranger_SlayWhileAiming_C::StaticClass()->DefaultObject);

	return Default;
}

}


