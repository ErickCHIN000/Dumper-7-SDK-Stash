#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CreatureCreatedObstacle_BramblePlayer.BP_CreatureCreatedObstacle_BramblePlayer_C
// (Actor)

class UClass* ABP_CreatureCreatedObstacle_BramblePlayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CreatureCreatedObstacle_BramblePlayer_C");

	return Clss;
}


// BP_CreatureCreatedObstacle_BramblePlayer_C BP_CreatureCreatedObstacle_BramblePlayer.Default__BP_CreatureCreatedObstacle_BramblePlayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CreatureCreatedObstacle_BramblePlayer_C* ABP_CreatureCreatedObstacle_BramblePlayer_C::GetDefaultObj()
{
	static class ABP_CreatureCreatedObstacle_BramblePlayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CreatureCreatedObstacle_BramblePlayer_C*>(ABP_CreatureCreatedObstacle_BramblePlayer_C::StaticClass()->DefaultObject);

	return Default;
}

}


