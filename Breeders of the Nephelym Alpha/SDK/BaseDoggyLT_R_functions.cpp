#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyLT_R.BaseDoggyLT_R_C
// (None)

class UClass* UBaseDoggyLT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyLT_R_C");

	return Clss;
}


// BaseDoggyLT_R_C BaseDoggyLT_R.Default__BaseDoggyLT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyLT_R_C* UBaseDoggyLT_R_C::GetDefaultObj()
{
	static class UBaseDoggyLT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyLT_R_C*>(UBaseDoggyLT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


