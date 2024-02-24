#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryTN_G.BaseMissionaryTN_G_C
// (None)

class UClass* UBaseMissionaryTN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryTN_G_C");

	return Clss;
}


// BaseMissionaryTN_G_C BaseMissionaryTN_G.Default__BaseMissionaryTN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryTN_G_C* UBaseMissionaryTN_G_C::GetDefaultObj()
{
	static class UBaseMissionaryTN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryTN_G_C*>(UBaseMissionaryTN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


