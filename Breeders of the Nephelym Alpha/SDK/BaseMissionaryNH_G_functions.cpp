#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryNH_G.BaseMissionaryNH_G_C
// (None)

class UClass* UBaseMissionaryNH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryNH_G_C");

	return Clss;
}


// BaseMissionaryNH_G_C BaseMissionaryNH_G.Default__BaseMissionaryNH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryNH_G_C* UBaseMissionaryNH_G_C::GetDefaultObj()
{
	static class UBaseMissionaryNH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryNH_G_C*>(UBaseMissionaryNH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


