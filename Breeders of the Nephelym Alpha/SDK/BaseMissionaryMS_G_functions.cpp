#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryMS_G.BaseMissionaryMS_G_C
// (None)

class UClass* UBaseMissionaryMS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryMS_G_C");

	return Clss;
}


// BaseMissionaryMS_G_C BaseMissionaryMS_G.Default__BaseMissionaryMS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryMS_G_C* UBaseMissionaryMS_G_C::GetDefaultObj()
{
	static class UBaseMissionaryMS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryMS_G_C*>(UBaseMissionaryMS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


