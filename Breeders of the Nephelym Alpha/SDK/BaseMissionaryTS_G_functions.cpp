#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryTS_G.BaseMissionaryTS_G_C
// (None)

class UClass* UBaseMissionaryTS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryTS_G_C");

	return Clss;
}


// BaseMissionaryTS_G_C BaseMissionaryTS_G.Default__BaseMissionaryTS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryTS_G_C* UBaseMissionaryTS_G_C::GetDefaultObj()
{
	static class UBaseMissionaryTS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryTS_G_C*>(UBaseMissionaryTS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


