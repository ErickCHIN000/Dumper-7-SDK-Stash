#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlTS_R.BaseCowgirlTS_R_C
// (None)

class UClass* UBaseCowgirlTS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlTS_R_C");

	return Clss;
}


// BaseCowgirlTS_R_C BaseCowgirlTS_R.Default__BaseCowgirlTS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlTS_R_C* UBaseCowgirlTS_R_C::GetDefaultObj()
{
	static class UBaseCowgirlTS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlTS_R_C*>(UBaseCowgirlTS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


