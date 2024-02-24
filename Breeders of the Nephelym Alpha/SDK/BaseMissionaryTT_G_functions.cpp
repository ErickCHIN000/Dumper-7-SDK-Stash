#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryTT_G.BaseMissionaryTT_G_C
// (None)

class UClass* UBaseMissionaryTT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryTT_G_C");

	return Clss;
}


// BaseMissionaryTT_G_C BaseMissionaryTT_G.Default__BaseMissionaryTT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryTT_G_C* UBaseMissionaryTT_G_C::GetDefaultObj()
{
	static class UBaseMissionaryTT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryTT_G_C*>(UBaseMissionaryTT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


