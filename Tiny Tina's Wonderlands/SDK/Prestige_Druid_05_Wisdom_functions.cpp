#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Prestige_Druid_05_Wisdom.Prestige_Druid_05_Wisdom_C
// (None)

class UClass* UPrestige_Druid_05_Wisdom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Prestige_Druid_05_Wisdom_C");

	return Clss;
}


// Prestige_Druid_05_Wisdom_C Prestige_Druid_05_Wisdom.Default__Prestige_Druid_05_Wisdom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrestige_Druid_05_Wisdom_C* UPrestige_Druid_05_Wisdom_C::GetDefaultObj()
{
	static class UPrestige_Druid_05_Wisdom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrestige_Druid_05_Wisdom_C*>(UPrestige_Druid_05_Wisdom_C::StaticClass()->DefaultObject);

	return Default;
}

}


