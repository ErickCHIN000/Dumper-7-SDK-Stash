#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryST_G.BaseMissionaryST_G_C
// (None)

class UClass* UBaseMissionaryST_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryST_G_C");

	return Clss;
}


// BaseMissionaryST_G_C BaseMissionaryST_G.Default__BaseMissionaryST_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryST_G_C* UBaseMissionaryST_G_C::GetDefaultObj()
{
	static class UBaseMissionaryST_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryST_G_C*>(UBaseMissionaryST_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


