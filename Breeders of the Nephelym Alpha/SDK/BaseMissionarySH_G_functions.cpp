#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionarySH_G.BaseMissionarySH_G_C
// (None)

class UClass* UBaseMissionarySH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionarySH_G_C");

	return Clss;
}


// BaseMissionarySH_G_C BaseMissionarySH_G.Default__BaseMissionarySH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionarySH_G_C* UBaseMissionarySH_G_C::GetDefaultObj()
{
	static class UBaseMissionarySH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionarySH_G_C*>(UBaseMissionarySH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


