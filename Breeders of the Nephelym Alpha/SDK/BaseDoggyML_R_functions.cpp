#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyML_R.BaseDoggyML_R_C
// (None)

class UClass* UBaseDoggyML_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyML_R_C");

	return Clss;
}


// BaseDoggyML_R_C BaseDoggyML_R.Default__BaseDoggyML_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyML_R_C* UBaseDoggyML_R_C::GetDefaultObj()
{
	static class UBaseDoggyML_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyML_R_C*>(UBaseDoggyML_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


