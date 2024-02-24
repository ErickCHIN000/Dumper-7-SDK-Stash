#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavArea_NPCObstacle.NavArea_NPCObstacle_C
// (None)

class UClass* UNavArea_NPCObstacle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavArea_NPCObstacle_C");

	return Clss;
}


// NavArea_NPCObstacle_C NavArea_NPCObstacle.Default__NavArea_NPCObstacle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavArea_NPCObstacle_C* UNavArea_NPCObstacle_C::GetDefaultObj()
{
	static class UNavArea_NPCObstacle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavArea_NPCObstacle_C*>(UNavArea_NPCObstacle_C::StaticClass()->DefaultObject);

	return Default;
}

}


