#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryHT_G.BaseMissionaryHT_G_C
// (None)

class UClass* UBaseMissionaryHT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryHT_G_C");

	return Clss;
}


// BaseMissionaryHT_G_C BaseMissionaryHT_G.Default__BaseMissionaryHT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryHT_G_C* UBaseMissionaryHT_G_C::GetDefaultObj()
{
	static class UBaseMissionaryHT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryHT_G_C*>(UBaseMissionaryHT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


