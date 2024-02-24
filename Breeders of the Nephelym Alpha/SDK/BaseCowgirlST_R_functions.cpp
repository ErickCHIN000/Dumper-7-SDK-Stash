#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlST_R.BaseCowgirlST_R_C
// (None)

class UClass* UBaseCowgirlST_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlST_R_C");

	return Clss;
}


// BaseCowgirlST_R_C BaseCowgirlST_R.Default__BaseCowgirlST_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlST_R_C* UBaseCowgirlST_R_C::GetDefaultObj()
{
	static class UBaseCowgirlST_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlST_R_C*>(UBaseCowgirlST_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


