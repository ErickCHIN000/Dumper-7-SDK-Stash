#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryMT_G.BaseMissionaryMT_G_C
// (None)

class UClass* UBaseMissionaryMT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryMT_G_C");

	return Clss;
}


// BaseMissionaryMT_G_C BaseMissionaryMT_G.Default__BaseMissionaryMT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryMT_G_C* UBaseMissionaryMT_G_C::GetDefaultObj()
{
	static class UBaseMissionaryMT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryMT_G_C*>(UBaseMissionaryMT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


