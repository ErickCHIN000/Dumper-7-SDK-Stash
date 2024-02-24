#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLiftedMS_R.BaseLiftedMS_R_C
// (None)

class UClass* UBaseLiftedMS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLiftedMS_R_C");

	return Clss;
}


// BaseLiftedMS_R_C BaseLiftedMS_R.Default__BaseLiftedMS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLiftedMS_R_C* UBaseLiftedMS_R_C::GetDefaultObj()
{
	static class UBaseLiftedMS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLiftedMS_R_C*>(UBaseLiftedMS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


