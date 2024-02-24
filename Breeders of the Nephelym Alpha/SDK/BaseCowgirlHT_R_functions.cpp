#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlHT_R.BaseCowgirlHT_R_C
// (None)

class UClass* UBaseCowgirlHT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlHT_R_C");

	return Clss;
}


// BaseCowgirlHT_R_C BaseCowgirlHT_R.Default__BaseCowgirlHT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlHT_R_C* UBaseCowgirlHT_R_C::GetDefaultObj()
{
	static class UBaseCowgirlHT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlHT_R_C*>(UBaseCowgirlHT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


