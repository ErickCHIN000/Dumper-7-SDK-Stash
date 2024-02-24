#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryHN_G.BaseMissionaryHN_G_C
// (None)

class UClass* UBaseMissionaryHN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryHN_G_C");

	return Clss;
}


// BaseMissionaryHN_G_C BaseMissionaryHN_G.Default__BaseMissionaryHN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryHN_G_C* UBaseMissionaryHN_G_C::GetDefaultObj()
{
	static class UBaseMissionaryHN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryHN_G_C*>(UBaseMissionaryHN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


