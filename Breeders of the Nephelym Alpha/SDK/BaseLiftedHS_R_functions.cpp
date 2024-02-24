#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLiftedHS_R.BaseLiftedHS_R_C
// (None)

class UClass* UBaseLiftedHS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLiftedHS_R_C");

	return Clss;
}


// BaseLiftedHS_R_C BaseLiftedHS_R.Default__BaseLiftedHS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLiftedHS_R_C* UBaseLiftedHS_R_C::GetDefaultObj()
{
	static class UBaseLiftedHS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLiftedHS_R_C*>(UBaseLiftedHS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


