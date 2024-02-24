#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_AirborneTags.GE_AirborneTags_C
// (None)

class UClass* UGE_AirborneTags_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_AirborneTags_C");

	return Clss;
}


// GE_AirborneTags_C GE_AirborneTags.Default__GE_AirborneTags_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_AirborneTags_C* UGE_AirborneTags_C::GetDefaultObj()
{
	static class UGE_AirborneTags_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_AirborneTags_C*>(UGE_AirborneTags_C::StaticClass()->DefaultObject);

	return Default;
}

}


