#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryML_G.BaseMissionaryML_G_C
// (None)

class UClass* UBaseMissionaryML_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryML_G_C");

	return Clss;
}


// BaseMissionaryML_G_C BaseMissionaryML_G.Default__BaseMissionaryML_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryML_G_C* UBaseMissionaryML_G_C::GetDefaultObj()
{
	static class UBaseMissionaryML_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryML_G_C*>(UBaseMissionaryML_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


