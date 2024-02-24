#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlNN_R.BaseCowgirlNN_R_C
// (None)

class UClass* UBaseCowgirlNN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlNN_R_C");

	return Clss;
}


// BaseCowgirlNN_R_C BaseCowgirlNN_R.Default__BaseCowgirlNN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlNN_R_C* UBaseCowgirlNN_R_C::GetDefaultObj()
{
	static class UBaseCowgirlNN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlNN_R_C*>(UBaseCowgirlNN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


