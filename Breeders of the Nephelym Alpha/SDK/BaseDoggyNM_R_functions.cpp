#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyNM_R.BaseDoggyNM_R_C
// (None)

class UClass* UBaseDoggyNM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyNM_R_C");

	return Clss;
}


// BaseDoggyNM_R_C BaseDoggyNM_R.Default__BaseDoggyNM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyNM_R_C* UBaseDoggyNM_R_C::GetDefaultObj()
{
	static class UBaseDoggyNM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyNM_R_C*>(UBaseDoggyNM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


