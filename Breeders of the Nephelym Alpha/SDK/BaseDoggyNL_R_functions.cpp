#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyNL_R.BaseDoggyNL_R_C
// (None)

class UClass* UBaseDoggyNL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyNL_R_C");

	return Clss;
}


// BaseDoggyNL_R_C BaseDoggyNL_R.Default__BaseDoggyNL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyNL_R_C* UBaseDoggyNL_R_C::GetDefaultObj()
{
	static class UBaseDoggyNL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyNL_R_C*>(UBaseDoggyNL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


