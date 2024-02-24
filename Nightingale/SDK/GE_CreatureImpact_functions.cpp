#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CreatureImpact.GE_CreatureImpact_C
// (None)

class UClass* UGE_CreatureImpact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CreatureImpact_C");

	return Clss;
}


// GE_CreatureImpact_C GE_CreatureImpact.Default__GE_CreatureImpact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CreatureImpact_C* UGE_CreatureImpact_C::GetDefaultObj()
{
	static class UGE_CreatureImpact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CreatureImpact_C*>(UGE_CreatureImpact_C::StaticClass()->DefaultObject);

	return Default;
}

}


