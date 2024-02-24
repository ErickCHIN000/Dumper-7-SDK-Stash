#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionarySL_G.BaseMissionarySL_G_C
// (None)

class UClass* UBaseMissionarySL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionarySL_G_C");

	return Clss;
}


// BaseMissionarySL_G_C BaseMissionarySL_G.Default__BaseMissionarySL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionarySL_G_C* UBaseMissionarySL_G_C::GetDefaultObj()
{
	static class UBaseMissionarySL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionarySL_G_C*>(UBaseMissionarySL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


