#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyMN_R.BaseDoggyMN_R_C
// (None)

class UClass* UBaseDoggyMN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyMN_R_C");

	return Clss;
}


// BaseDoggyMN_R_C BaseDoggyMN_R.Default__BaseDoggyMN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyMN_R_C* UBaseDoggyMN_R_C::GetDefaultObj()
{
	static class UBaseDoggyMN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyMN_R_C*>(UBaseDoggyMN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


