#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MinotaurSemenNM_R.MinotaurSemenNM_R_C
// (None)

class UClass* UMinotaurSemenNM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinotaurSemenNM_R_C");

	return Clss;
}


// MinotaurSemenNM_R_C MinotaurSemenNM_R.Default__MinotaurSemenNM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMinotaurSemenNM_R_C* UMinotaurSemenNM_R_C::GetDefaultObj()
{
	static class UMinotaurSemenNM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMinotaurSemenNM_R_C*>(UMinotaurSemenNM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


