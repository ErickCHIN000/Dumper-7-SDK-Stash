#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionarySM_G.BaseMissionarySM_G_C
// (None)

class UClass* UBaseMissionarySM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionarySM_G_C");

	return Clss;
}


// BaseMissionarySM_G_C BaseMissionarySM_G.Default__BaseMissionarySM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionarySM_G_C* UBaseMissionarySM_G_C::GetDefaultObj()
{
	static class UBaseMissionarySM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionarySM_G_C*>(UBaseMissionarySM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


