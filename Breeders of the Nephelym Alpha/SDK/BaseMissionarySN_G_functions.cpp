#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionarySN_G.BaseMissionarySN_G_C
// (None)

class UClass* UBaseMissionarySN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionarySN_G_C");

	return Clss;
}


// BaseMissionarySN_G_C BaseMissionarySN_G.Default__BaseMissionarySN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionarySN_G_C* UBaseMissionarySN_G_C::GetDefaultObj()
{
	static class UBaseMissionarySN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionarySN_G_C*>(UBaseMissionarySN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


