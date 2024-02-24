#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlHL_R.BaseCowgirlHL_R_C
// (None)

class UClass* UBaseCowgirlHL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlHL_R_C");

	return Clss;
}


// BaseCowgirlHL_R_C BaseCowgirlHL_R.Default__BaseCowgirlHL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlHL_R_C* UBaseCowgirlHL_R_C::GetDefaultObj()
{
	static class UBaseCowgirlHL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlHL_R_C*>(UBaseCowgirlHL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


