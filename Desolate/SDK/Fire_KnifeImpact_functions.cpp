#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Fire_KnifeImpact.Fire_KnifeImpact_C
// (Actor)

class UClass* AFire_KnifeImpact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Fire_KnifeImpact_C");

	return Clss;
}


// Fire_KnifeImpact_C Fire_KnifeImpact.Default__Fire_KnifeImpact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFire_KnifeImpact_C* AFire_KnifeImpact_C::GetDefaultObj()
{
	static class AFire_KnifeImpact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFire_KnifeImpact_C*>(AFire_KnifeImpact_C::StaticClass()->DefaultObject);

	return Default;
}

}


