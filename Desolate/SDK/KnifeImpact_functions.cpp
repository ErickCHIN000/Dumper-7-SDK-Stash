#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KnifeImpact.KnifeImpact_C
// (Actor)

class UClass* AKnifeImpact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KnifeImpact_C");

	return Clss;
}


// KnifeImpact_C KnifeImpact.Default__KnifeImpact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKnifeImpact_C* AKnifeImpact_C::GetDefaultObj()
{
	static class AKnifeImpact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKnifeImpact_C*>(AKnifeImpact_C::StaticClass()->DefaultObject);

	return Default;
}

}


