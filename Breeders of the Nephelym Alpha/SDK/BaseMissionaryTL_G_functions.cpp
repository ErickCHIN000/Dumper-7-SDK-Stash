#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryTL_G.BaseMissionaryTL_G_C
// (None)

class UClass* UBaseMissionaryTL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryTL_G_C");

	return Clss;
}


// BaseMissionaryTL_G_C BaseMissionaryTL_G.Default__BaseMissionaryTL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryTL_G_C* UBaseMissionaryTL_G_C::GetDefaultObj()
{
	static class UBaseMissionaryTL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryTL_G_C*>(UBaseMissionaryTL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


