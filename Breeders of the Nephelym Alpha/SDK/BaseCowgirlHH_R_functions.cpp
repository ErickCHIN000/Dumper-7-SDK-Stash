#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlHH_R.BaseCowgirlHH_R_C
// (None)

class UClass* UBaseCowgirlHH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlHH_R_C");

	return Clss;
}


// BaseCowgirlHH_R_C BaseCowgirlHH_R.Default__BaseCowgirlHH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlHH_R_C* UBaseCowgirlHH_R_C::GetDefaultObj()
{
	static class UBaseCowgirlHH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlHH_R_C*>(UBaseCowgirlHH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


