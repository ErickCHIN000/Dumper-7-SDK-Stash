#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryMM_G.BaseMissionaryMM_G_C
// (None)

class UClass* UBaseMissionaryMM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryMM_G_C");

	return Clss;
}


// BaseMissionaryMM_G_C BaseMissionaryMM_G.Default__BaseMissionaryMM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryMM_G_C* UBaseMissionaryMM_G_C::GetDefaultObj()
{
	static class UBaseMissionaryMM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryMM_G_C*>(UBaseMissionaryMM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


