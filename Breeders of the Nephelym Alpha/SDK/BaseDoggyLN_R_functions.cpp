#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyLN_R.BaseDoggyLN_R_C
// (None)

class UClass* UBaseDoggyLN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyLN_R_C");

	return Clss;
}


// BaseDoggyLN_R_C BaseDoggyLN_R.Default__BaseDoggyLN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyLN_R_C* UBaseDoggyLN_R_C::GetDefaultObj()
{
	static class UBaseDoggyLN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyLN_R_C*>(UBaseDoggyLN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


