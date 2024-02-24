#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlMS_R.BaseCowgirlMS_R_C
// (None)

class UClass* UBaseCowgirlMS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlMS_R_C");

	return Clss;
}


// BaseCowgirlMS_R_C BaseCowgirlMS_R.Default__BaseCowgirlMS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlMS_R_C* UBaseCowgirlMS_R_C::GetDefaultObj()
{
	static class UBaseCowgirlMS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlMS_R_C*>(UBaseCowgirlMS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


