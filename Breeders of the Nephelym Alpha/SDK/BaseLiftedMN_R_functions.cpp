#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLiftedMN_R.BaseLiftedMN_R_C
// (None)

class UClass* UBaseLiftedMN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLiftedMN_R_C");

	return Clss;
}


// BaseLiftedMN_R_C BaseLiftedMN_R.Default__BaseLiftedMN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLiftedMN_R_C* UBaseLiftedMN_R_C::GetDefaultObj()
{
	static class UBaseLiftedMN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLiftedMN_R_C*>(UBaseLiftedMN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


