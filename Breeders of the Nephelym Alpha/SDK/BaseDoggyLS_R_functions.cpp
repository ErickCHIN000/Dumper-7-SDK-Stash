#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyLS_R.BaseDoggyLS_R_C
// (None)

class UClass* UBaseDoggyLS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyLS_R_C");

	return Clss;
}


// BaseDoggyLS_R_C BaseDoggyLS_R.Default__BaseDoggyLS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyLS_R_C* UBaseDoggyLS_R_C::GetDefaultObj()
{
	static class UBaseDoggyLS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyLS_R_C*>(UBaseDoggyLS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


