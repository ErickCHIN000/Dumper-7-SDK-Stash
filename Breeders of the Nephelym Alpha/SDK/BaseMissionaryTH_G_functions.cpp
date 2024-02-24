#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryTH_G.BaseMissionaryTH_G_C
// (None)

class UClass* UBaseMissionaryTH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryTH_G_C");

	return Clss;
}


// BaseMissionaryTH_G_C BaseMissionaryTH_G.Default__BaseMissionaryTH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryTH_G_C* UBaseMissionaryTH_G_C::GetDefaultObj()
{
	static class UBaseMissionaryTH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryTH_G_C*>(UBaseMissionaryTH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


