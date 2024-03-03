#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MageAIController.BP_MageAIController_C
// (Actor)

class UClass* ABP_MageAIController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MageAIController_C");

	return Clss;
}


// BP_MageAIController_C BP_MageAIController.Default__BP_MageAIController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MageAIController_C* ABP_MageAIController_C::GetDefaultObj()
{
	static class ABP_MageAIController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MageAIController_C*>(ABP_MageAIController_C::StaticClass()->DefaultObject);

	return Default;
}

}


