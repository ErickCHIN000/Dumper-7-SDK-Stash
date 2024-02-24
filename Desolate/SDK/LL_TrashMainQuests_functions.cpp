#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_TrashMainQuests.LL_TrashMainQuests_C
// (Actor)

class UClass* ALL_TrashMainQuests_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_TrashMainQuests_C");

	return Clss;
}


// LL_TrashMainQuests_C LL_TrashMainQuests.Default__LL_TrashMainQuests_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_TrashMainQuests_C* ALL_TrashMainQuests_C::GetDefaultObj()
{
	static class ALL_TrashMainQuests_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_TrashMainQuests_C*>(ALL_TrashMainQuests_C::StaticClass()->DefaultObject);

	return Default;
}

}


