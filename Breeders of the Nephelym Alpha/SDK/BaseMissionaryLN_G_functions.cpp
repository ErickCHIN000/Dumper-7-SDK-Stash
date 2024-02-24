#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryLN_G.BaseMissionaryLN_G_C
// (None)

class UClass* UBaseMissionaryLN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryLN_G_C");

	return Clss;
}


// BaseMissionaryLN_G_C BaseMissionaryLN_G.Default__BaseMissionaryLN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryLN_G_C* UBaseMissionaryLN_G_C::GetDefaultObj()
{
	static class UBaseMissionaryLN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryLN_G_C*>(UBaseMissionaryLN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


