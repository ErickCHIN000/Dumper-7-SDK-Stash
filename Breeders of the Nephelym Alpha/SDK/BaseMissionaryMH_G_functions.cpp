#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryMH_G.BaseMissionaryMH_G_C
// (None)

class UClass* UBaseMissionaryMH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryMH_G_C");

	return Clss;
}


// BaseMissionaryMH_G_C BaseMissionaryMH_G.Default__BaseMissionaryMH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryMH_G_C* UBaseMissionaryMH_G_C::GetDefaultObj()
{
	static class UBaseMissionaryMH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryMH_G_C*>(UBaseMissionaryMH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


