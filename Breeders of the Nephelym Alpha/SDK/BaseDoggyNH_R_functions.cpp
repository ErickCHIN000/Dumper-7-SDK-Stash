#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyNH_R.BaseDoggyNH_R_C
// (None)

class UClass* UBaseDoggyNH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyNH_R_C");

	return Clss;
}


// BaseDoggyNH_R_C BaseDoggyNH_R.Default__BaseDoggyNH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyNH_R_C* UBaseDoggyNH_R_C::GetDefaultObj()
{
	static class UBaseDoggyNH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyNH_R_C*>(UBaseDoggyNH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


