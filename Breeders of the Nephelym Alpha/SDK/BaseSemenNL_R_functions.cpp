#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseSemenNL_R.BaseSemenNL_R_C
// (None)

class UClass* UBaseSemenNL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseSemenNL_R_C");

	return Clss;
}


// BaseSemenNL_R_C BaseSemenNL_R.Default__BaseSemenNL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseSemenNL_R_C* UBaseSemenNL_R_C::GetDefaultObj()
{
	static class UBaseSemenNL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseSemenNL_R_C*>(UBaseSemenNL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


