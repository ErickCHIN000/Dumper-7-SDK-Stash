#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MainEnemyAIController.BP_MainEnemyAIController_C
// (Actor)

class UClass* ABP_MainEnemyAIController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MainEnemyAIController_C");

	return Clss;
}


// BP_MainEnemyAIController_C BP_MainEnemyAIController.Default__BP_MainEnemyAIController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MainEnemyAIController_C* ABP_MainEnemyAIController_C::GetDefaultObj()
{
	static class ABP_MainEnemyAIController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MainEnemyAIController_C*>(ABP_MainEnemyAIController_C::StaticClass()->DefaultObject);

	return Default;
}

}


