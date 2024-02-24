#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionarySS_R.BaseMissionarySS_R_C
// (None)

class UClass* UBaseMissionarySS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionarySS_R_C");

	return Clss;
}


// BaseMissionarySS_R_C BaseMissionarySS_R.Default__BaseMissionarySS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionarySS_R_C* UBaseMissionarySS_R_C::GetDefaultObj()
{
	static class UBaseMissionarySS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionarySS_R_C*>(UBaseMissionarySS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


