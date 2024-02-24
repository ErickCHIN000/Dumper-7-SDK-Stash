#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_Craft_Uncommon.LL_Craft_Uncommon_C
// (Actor)

class UClass* ALL_Craft_Uncommon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_Craft_Uncommon_C");

	return Clss;
}


// LL_Craft_Uncommon_C LL_Craft_Uncommon.Default__LL_Craft_Uncommon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_Craft_Uncommon_C* ALL_Craft_Uncommon_C::GetDefaultObj()
{
	static class ALL_Craft_Uncommon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_Craft_Uncommon_C*>(ALL_Craft_Uncommon_C::StaticClass()->DefaultObject);

	return Default;
}

}


