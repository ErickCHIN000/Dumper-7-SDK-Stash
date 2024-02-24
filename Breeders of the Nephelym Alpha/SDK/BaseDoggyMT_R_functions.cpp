#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyMT_R.BaseDoggyMT_R_C
// (None)

class UClass* UBaseDoggyMT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyMT_R_C");

	return Clss;
}


// BaseDoggyMT_R_C BaseDoggyMT_R.Default__BaseDoggyMT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyMT_R_C* UBaseDoggyMT_R_C::GetDefaultObj()
{
	static class UBaseDoggyMT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyMT_R_C*>(UBaseDoggyMT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


