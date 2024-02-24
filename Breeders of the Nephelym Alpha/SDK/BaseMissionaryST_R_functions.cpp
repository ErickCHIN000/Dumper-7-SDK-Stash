#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMissionaryST_R.BaseMissionaryST_R_C
// (None)

class UClass* UBaseMissionaryST_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMissionaryST_R_C");

	return Clss;
}


// BaseMissionaryST_R_C BaseMissionaryST_R.Default__BaseMissionaryST_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMissionaryST_R_C* UBaseMissionaryST_R_C::GetDefaultObj()
{
	static class UBaseMissionaryST_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMissionaryST_R_C*>(UBaseMissionaryST_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


