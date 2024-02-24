#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionarySS_G.BaseMissionarySS_G_C
// (None)

class UClass* UBaseMissionarySS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionarySS_G_C");

	return Clss;
}


// BaseMissionarySS_G_C BaseMissionarySS_G.Default__BaseMissionarySS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionarySS_G_C* UBaseMissionarySS_G_C::GetDefaultObj()
{
	static class UBaseMissionarySS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionarySS_G_C*>(UBaseMissionarySS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


