#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryHH_G.BaseMissionaryHH_G_C
// (None)

class UClass* UBaseMissionaryHH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryHH_G_C");

	return Clss;
}


// BaseMissionaryHH_G_C BaseMissionaryHH_G.Default__BaseMissionaryHH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryHH_G_C* UBaseMissionaryHH_G_C::GetDefaultObj()
{
	static class UBaseMissionaryHH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryHH_G_C*>(UBaseMissionaryHH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


