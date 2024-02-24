#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryNN_G.BaseMissionaryNN_G_C
// (None)

class UClass* UBaseMissionaryNN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryNN_G_C");

	return Clss;
}


// BaseMissionaryNN_G_C BaseMissionaryNN_G.Default__BaseMissionaryNN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryNN_G_C* UBaseMissionaryNN_G_C::GetDefaultObj()
{
	static class UBaseMissionaryNN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryNN_G_C*>(UBaseMissionaryNN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


