#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryNL_G.BaseMissionaryNL_G_C
// (None)

class UClass* UBaseMissionaryNL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryNL_G_C");

	return Clss;
}


// BaseMissionaryNL_G_C BaseMissionaryNL_G.Default__BaseMissionaryNL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryNL_G_C* UBaseMissionaryNL_G_C::GetDefaultObj()
{
	static class UBaseMissionaryNL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryNL_G_C*>(UBaseMissionaryNL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


