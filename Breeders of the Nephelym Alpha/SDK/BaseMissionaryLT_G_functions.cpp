#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryLT_G.BaseMissionaryLT_G_C
// (None)

class UClass* UBaseMissionaryLT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryLT_G_C");

	return Clss;
}


// BaseMissionaryLT_G_C BaseMissionaryLT_G.Default__BaseMissionaryLT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryLT_G_C* UBaseMissionaryLT_G_C::GetDefaultObj()
{
	static class UBaseMissionaryLT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryLT_G_C*>(UBaseMissionaryLT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


