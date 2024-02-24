#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CreatureObstacleInitialStats.GE_CreatureObstacleInitialStats_C
// (None)

class UClass* UGE_CreatureObstacleInitialStats_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CreatureObstacleInitialStats_C");

	return Clss;
}


// GE_CreatureObstacleInitialStats_C GE_CreatureObstacleInitialStats.Default__GE_CreatureObstacleInitialStats_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CreatureObstacleInitialStats_C* UGE_CreatureObstacleInitialStats_C::GetDefaultObj()
{
	static class UGE_CreatureObstacleInitialStats_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CreatureObstacleInitialStats_C*>(UGE_CreatureObstacleInitialStats_C::StaticClass()->DefaultObject);

	return Default;
}

}


