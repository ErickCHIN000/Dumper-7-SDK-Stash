#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryHM_G.BaseMissionaryHM_G_C
// (None)

class UClass* UBaseMissionaryHM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryHM_G_C");

	return Clss;
}


// BaseMissionaryHM_G_C BaseMissionaryHM_G.Default__BaseMissionaryHM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryHM_G_C* UBaseMissionaryHM_G_C::GetDefaultObj()
{
	static class UBaseMissionaryHM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryHM_G_C*>(UBaseMissionaryHM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


