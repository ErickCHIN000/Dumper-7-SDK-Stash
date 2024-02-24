#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryLS_G.BaseMissionaryLS_G_C
// (None)

class UClass* UBaseMissionaryLS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryLS_G_C");

	return Clss;
}


// BaseMissionaryLS_G_C BaseMissionaryLS_G.Default__BaseMissionaryLS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryLS_G_C* UBaseMissionaryLS_G_C::GetDefaultObj()
{
	static class UBaseMissionaryLS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryLS_G_C*>(UBaseMissionaryLS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


