#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyHL_R.BaseDoggyHL_R_C
// (None)

class UClass* UBaseDoggyHL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyHL_R_C");

	return Clss;
}


// BaseDoggyHL_R_C BaseDoggyHL_R.Default__BaseDoggyHL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyHL_R_C* UBaseDoggyHL_R_C::GetDefaultObj()
{
	static class UBaseDoggyHL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyHL_R_C*>(UBaseDoggyHL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


