#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryLH_G.BaseMissionaryLH_G_C
// (None)

class UClass* UBaseMissionaryLH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryLH_G_C");

	return Clss;
}


// BaseMissionaryLH_G_C BaseMissionaryLH_G.Default__BaseMissionaryLH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryLH_G_C* UBaseMissionaryLH_G_C::GetDefaultObj()
{
	static class UBaseMissionaryLH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryLH_G_C*>(UBaseMissionaryLH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


