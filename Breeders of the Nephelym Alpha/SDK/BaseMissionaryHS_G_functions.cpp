#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryHS_G.BaseMissionaryHS_G_C
// (None)

class UClass* UBaseMissionaryHS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryHS_G_C");

	return Clss;
}


// BaseMissionaryHS_G_C BaseMissionaryHS_G.Default__BaseMissionaryHS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryHS_G_C* UBaseMissionaryHS_G_C::GetDefaultObj()
{
	static class UBaseMissionaryHS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryHS_G_C*>(UBaseMissionaryHS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


