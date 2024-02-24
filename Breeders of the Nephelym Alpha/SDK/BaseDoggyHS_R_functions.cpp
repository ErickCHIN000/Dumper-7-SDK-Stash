#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyHS_R.BaseDoggyHS_R_C
// (None)

class UClass* UBaseDoggyHS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyHS_R_C");

	return Clss;
}


// BaseDoggyHS_R_C BaseDoggyHS_R.Default__BaseDoggyHS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyHS_R_C* UBaseDoggyHS_R_C::GetDefaultObj()
{
	static class UBaseDoggyHS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyHS_R_C*>(UBaseDoggyHS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


