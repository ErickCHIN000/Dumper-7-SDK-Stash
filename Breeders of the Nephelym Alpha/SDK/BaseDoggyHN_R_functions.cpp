#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyHN_R.BaseDoggyHN_R_C
// (None)

class UClass* UBaseDoggyHN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyHN_R_C");

	return Clss;
}


// BaseDoggyHN_R_C BaseDoggyHN_R.Default__BaseDoggyHN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyHN_R_C* UBaseDoggyHN_R_C::GetDefaultObj()
{
	static class UBaseDoggyHN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyHN_R_C*>(UBaseDoggyHN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


