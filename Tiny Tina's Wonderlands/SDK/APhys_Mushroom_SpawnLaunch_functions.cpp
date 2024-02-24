#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass APhys_Mushroom_SpawnLaunch.APhys_Mushroom_SpawnLaunch_C
// (None)

class UClass* UAPhys_Mushroom_SpawnLaunch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("APhys_Mushroom_SpawnLaunch_C");

	return Clss;
}


// APhys_Mushroom_SpawnLaunch_C APhys_Mushroom_SpawnLaunch.Default__APhys_Mushroom_SpawnLaunch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAPhys_Mushroom_SpawnLaunch_C* UAPhys_Mushroom_SpawnLaunch_C::GetDefaultObj()
{
	static class UAPhys_Mushroom_SpawnLaunch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAPhys_Mushroom_SpawnLaunch_C*>(UAPhys_Mushroom_SpawnLaunch_C::StaticClass()->DefaultObject);

	return Default;
}

}


