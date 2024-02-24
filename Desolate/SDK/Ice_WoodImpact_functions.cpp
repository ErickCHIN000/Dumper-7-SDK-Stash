#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ice_WoodImpact.Ice_WoodImpact_C
// (Actor)

class UClass* AIce_WoodImpact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ice_WoodImpact_C");

	return Clss;
}


// Ice_WoodImpact_C Ice_WoodImpact.Default__Ice_WoodImpact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AIce_WoodImpact_C* AIce_WoodImpact_C::GetDefaultObj()
{
	static class AIce_WoodImpact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AIce_WoodImpact_C*>(AIce_WoodImpact_C::StaticClass()->DefaultObject);

	return Default;
}

}


