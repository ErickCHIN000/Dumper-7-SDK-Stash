#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLiftedLT_R.BaseLiftedLT_R_C
// (None)

class UClass* UBaseLiftedLT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLiftedLT_R_C");

	return Clss;
}


// BaseLiftedLT_R_C BaseLiftedLT_R.Default__BaseLiftedLT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLiftedLT_R_C* UBaseLiftedLT_R_C::GetDefaultObj()
{
	static class UBaseLiftedLT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLiftedLT_R_C*>(UBaseLiftedLT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


