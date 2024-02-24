#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RangedImpact.RangedImpact_C
// (Actor)

class UClass* ARangedImpact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RangedImpact_C");

	return Clss;
}


// RangedImpact_C RangedImpact.Default__RangedImpact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARangedImpact_C* ARangedImpact_C::GetDefaultObj()
{
	static class ARangedImpact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARangedImpact_C*>(ARangedImpact_C::StaticClass()->DefaultObject);

	return Default;
}

}


