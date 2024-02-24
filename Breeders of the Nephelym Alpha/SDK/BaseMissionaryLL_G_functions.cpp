#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryLL_G.BaseMissionaryLL_G_C
// (None)

class UClass* UBaseMissionaryLL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryLL_G_C");

	return Clss;
}


// BaseMissionaryLL_G_C BaseMissionaryLL_G.Default__BaseMissionaryLL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryLL_G_C* UBaseMissionaryLL_G_C::GetDefaultObj()
{
	static class UBaseMissionaryLL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryLL_G_C*>(UBaseMissionaryLL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


