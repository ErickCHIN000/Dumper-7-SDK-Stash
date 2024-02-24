#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyHH_R.BaseDoggyHH_R_C
// (None)

class UClass* UBaseDoggyHH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyHH_R_C");

	return Clss;
}


// BaseDoggyHH_R_C BaseDoggyHH_R.Default__BaseDoggyHH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyHH_R_C* UBaseDoggyHH_R_C::GetDefaultObj()
{
	static class UBaseDoggyHH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyHH_R_C*>(UBaseDoggyHH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


