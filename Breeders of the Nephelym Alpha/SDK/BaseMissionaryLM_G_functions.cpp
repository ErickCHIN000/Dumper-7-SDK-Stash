#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryLM_G.BaseMissionaryLM_G_C
// (None)

class UClass* UBaseMissionaryLM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryLM_G_C");

	return Clss;
}


// BaseMissionaryLM_G_C BaseMissionaryLM_G.Default__BaseMissionaryLM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryLM_G_C* UBaseMissionaryLM_G_C::GetDefaultObj()
{
	static class UBaseMissionaryLM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryLM_G_C*>(UBaseMissionaryLM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


