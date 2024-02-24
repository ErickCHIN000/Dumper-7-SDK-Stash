#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WoodImpact.WoodImpact_C
// (Actor)

class UClass* AWoodImpact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WoodImpact_C");

	return Clss;
}


// WoodImpact_C WoodImpact.Default__WoodImpact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWoodImpact_C* AWoodImpact_C::GetDefaultObj()
{
	static class AWoodImpact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWoodImpact_C*>(AWoodImpact_C::StaticClass()->DefaultObject);

	return Default;
}

}


