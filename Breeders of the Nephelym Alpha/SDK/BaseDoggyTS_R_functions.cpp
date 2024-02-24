#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyTS_R.BaseDoggyTS_R_C
// (None)

class UClass* UBaseDoggyTS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyTS_R_C");

	return Clss;
}


// BaseDoggyTS_R_C BaseDoggyTS_R.Default__BaseDoggyTS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyTS_R_C* UBaseDoggyTS_R_C::GetDefaultObj()
{
	static class UBaseDoggyTS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyTS_R_C*>(UBaseDoggyTS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


