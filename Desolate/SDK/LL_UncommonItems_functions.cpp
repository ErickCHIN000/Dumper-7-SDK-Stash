#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_UncommonItems.LL_UncommonItems_C
// (Actor)

class UClass* ALL_UncommonItems_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_UncommonItems_C");

	return Clss;
}


// LL_UncommonItems_C LL_UncommonItems.Default__LL_UncommonItems_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_UncommonItems_C* ALL_UncommonItems_C::GetDefaultObj()
{
	static class ALL_UncommonItems_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_UncommonItems_C*>(ALL_UncommonItems_C::StaticClass()->DefaultObject);

	return Default;
}

}


