#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SprintTags.GE_SprintTags_C
// (None)

class UClass* UGE_SprintTags_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SprintTags_C");

	return Clss;
}


// GE_SprintTags_C GE_SprintTags.Default__GE_SprintTags_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SprintTags_C* UGE_SprintTags_C::GetDefaultObj()
{
	static class UGE_SprintTags_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SprintTags_C*>(UGE_SprintTags_C::StaticClass()->DefaultObject);

	return Default;
}

}


