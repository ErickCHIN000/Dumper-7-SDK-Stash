#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryHL_G.BaseMissionaryHL_G_C
// (None)

class UClass* UBaseMissionaryHL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryHL_G_C");

	return Clss;
}


// BaseMissionaryHL_G_C BaseMissionaryHL_G.Default__BaseMissionaryHL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryHL_G_C* UBaseMissionaryHL_G_C::GetDefaultObj()
{
	static class UBaseMissionaryHL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryHL_G_C*>(UBaseMissionaryHL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


