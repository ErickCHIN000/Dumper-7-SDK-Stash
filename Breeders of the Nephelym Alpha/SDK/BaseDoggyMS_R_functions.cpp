#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyMS_R.BaseDoggyMS_R_C
// (None)

class UClass* UBaseDoggyMS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyMS_R_C");

	return Clss;
}


// BaseDoggyMS_R_C BaseDoggyMS_R.Default__BaseDoggyMS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyMS_R_C* UBaseDoggyMS_R_C::GetDefaultObj()
{
	static class UBaseDoggyMS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyMS_R_C*>(UBaseDoggyMS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


