#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyNN_R.BaseDoggyNN_R_C
// (None)

class UClass* UBaseDoggyNN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyNN_R_C");

	return Clss;
}


// BaseDoggyNN_R_C BaseDoggyNN_R.Default__BaseDoggyNN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyNN_R_C* UBaseDoggyNN_R_C::GetDefaultObj()
{
	static class UBaseDoggyNN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyNN_R_C*>(UBaseDoggyNN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


