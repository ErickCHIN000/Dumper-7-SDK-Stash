#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseSemenNH_R.BaseSemenNH_R_C
// (None)

class UClass* UBaseSemenNH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseSemenNH_R_C");

	return Clss;
}


// BaseSemenNH_R_C BaseSemenNH_R.Default__BaseSemenNH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseSemenNH_R_C* UBaseSemenNH_R_C::GetDefaultObj()
{
	static class UBaseSemenNH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseSemenNH_R_C*>(UBaseSemenNH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


