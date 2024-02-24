#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlHN_R.BaseCowgirlHN_R_C
// (None)

class UClass* UBaseCowgirlHN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlHN_R_C");

	return Clss;
}


// BaseCowgirlHN_R_C BaseCowgirlHN_R.Default__BaseCowgirlHN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlHN_R_C* UBaseCowgirlHN_R_C::GetDefaultObj()
{
	static class UBaseCowgirlHN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlHN_R_C*>(UBaseCowgirlHN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


