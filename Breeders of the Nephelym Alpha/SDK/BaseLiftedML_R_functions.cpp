#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLiftedML_R.BaseLiftedML_R_C
// (None)

class UClass* UBaseLiftedML_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLiftedML_R_C");

	return Clss;
}


// BaseLiftedML_R_C BaseLiftedML_R.Default__BaseLiftedML_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLiftedML_R_C* UBaseLiftedML_R_C::GetDefaultObj()
{
	static class UBaseLiftedML_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLiftedML_R_C*>(UBaseLiftedML_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


