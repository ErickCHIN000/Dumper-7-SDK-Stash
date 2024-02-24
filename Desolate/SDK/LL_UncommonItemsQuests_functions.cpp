#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_UncommonItemsQuests.LL_UncommonItemsQuests_C
// (Actor)

class UClass* ALL_UncommonItemsQuests_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_UncommonItemsQuests_C");

	return Clss;
}


// LL_UncommonItemsQuests_C LL_UncommonItemsQuests.Default__LL_UncommonItemsQuests_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_UncommonItemsQuests_C* ALL_UncommonItemsQuests_C::GetDefaultObj()
{
	static class ALL_UncommonItemsQuests_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_UncommonItemsQuests_C*>(ALL_UncommonItemsQuests_C::StaticClass()->DefaultObject);

	return Default;
}

}


