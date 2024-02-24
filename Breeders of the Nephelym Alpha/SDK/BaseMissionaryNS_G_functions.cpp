#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryNS_G.BaseMissionaryNS_G_C
// (None)

class UClass* UBaseMissionaryNS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryNS_G_C");

	return Clss;
}


// BaseMissionaryNS_G_C BaseMissionaryNS_G.Default__BaseMissionaryNS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryNS_G_C* UBaseMissionaryNS_G_C::GetDefaultObj()
{
	static class UBaseMissionaryNS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryNS_G_C*>(UBaseMissionaryNS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


