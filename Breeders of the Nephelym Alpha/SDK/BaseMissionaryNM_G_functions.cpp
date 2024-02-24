#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryNM_G.BaseMissionaryNM_G_C
// (None)

class UClass* UBaseMissionaryNM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryNM_G_C");

	return Clss;
}


// BaseMissionaryNM_G_C BaseMissionaryNM_G.Default__BaseMissionaryNM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryNM_G_C* UBaseMissionaryNM_G_C::GetDefaultObj()
{
	static class UBaseMissionaryNM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryNM_G_C*>(UBaseMissionaryNM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


