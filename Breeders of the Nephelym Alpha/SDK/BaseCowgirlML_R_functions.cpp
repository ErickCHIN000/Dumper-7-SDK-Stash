#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlML_R.BaseCowgirlML_R_C
// (None)

class UClass* UBaseCowgirlML_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlML_R_C");

	return Clss;
}


// BaseCowgirlML_R_C BaseCowgirlML_R.Default__BaseCowgirlML_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlML_R_C* UBaseCowgirlML_R_C::GetDefaultObj()
{
	static class UBaseCowgirlML_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlML_R_C*>(UBaseCowgirlML_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


