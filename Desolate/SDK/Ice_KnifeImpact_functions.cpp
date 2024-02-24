#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ice_KnifeImpact.Ice_KnifeImpact_C
// (Actor)

class UClass* AIce_KnifeImpact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ice_KnifeImpact_C");

	return Clss;
}


// Ice_KnifeImpact_C Ice_KnifeImpact.Default__Ice_KnifeImpact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AIce_KnifeImpact_C* AIce_KnifeImpact_C::GetDefaultObj()
{
	static class AIce_KnifeImpact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AIce_KnifeImpact_C*>(AIce_KnifeImpact_C::StaticClass()->DefaultObject);

	return Default;
}

}


