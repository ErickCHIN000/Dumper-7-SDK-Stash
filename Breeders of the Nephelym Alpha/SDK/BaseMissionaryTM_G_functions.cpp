#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryTM_G.BaseMissionaryTM_G_C
// (None)

class UClass* UBaseMissionaryTM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryTM_G_C");

	return Clss;
}


// BaseMissionaryTM_G_C BaseMissionaryTM_G.Default__BaseMissionaryTM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryTM_G_C* UBaseMissionaryTM_G_C::GetDefaultObj()
{
	static class UBaseMissionaryTM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryTM_G_C*>(UBaseMissionaryTM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


