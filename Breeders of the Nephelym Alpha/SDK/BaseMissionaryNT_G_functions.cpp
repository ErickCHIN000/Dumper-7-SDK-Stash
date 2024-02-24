#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryNT_G.BaseMissionaryNT_G_C
// (None)

class UClass* UBaseMissionaryNT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryNT_G_C");

	return Clss;
}


// BaseMissionaryNT_G_C BaseMissionaryNT_G.Default__BaseMissionaryNT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryNT_G_C* UBaseMissionaryNT_G_C::GetDefaultObj()
{
	static class UBaseMissionaryNT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryNT_G_C*>(UBaseMissionaryNT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


