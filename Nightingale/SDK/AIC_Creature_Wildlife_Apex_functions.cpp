#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIC_Creature_Wildlife_Apex.AIC_Creature_Wildlife_Apex_C
// (Actor)

class UClass* AAIC_Creature_Wildlife_Apex_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIC_Creature_Wildlife_Apex_C");

	return Clss;
}


// AIC_Creature_Wildlife_Apex_C AIC_Creature_Wildlife_Apex.Default__AIC_Creature_Wildlife_Apex_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAIC_Creature_Wildlife_Apex_C* AAIC_Creature_Wildlife_Apex_C::GetDefaultObj()
{
	static class AAIC_Creature_Wildlife_Apex_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAIC_Creature_Wildlife_Apex_C*>(AAIC_Creature_Wildlife_Apex_C::StaticClass()->DefaultObject);

	return Default;
}

}


