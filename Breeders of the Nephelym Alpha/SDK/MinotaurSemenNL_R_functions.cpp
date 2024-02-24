#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MinotaurSemenNL_R.MinotaurSemenNL_R_C
// (None)

class UClass* UMinotaurSemenNL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinotaurSemenNL_R_C");

	return Clss;
}


// MinotaurSemenNL_R_C MinotaurSemenNL_R.Default__MinotaurSemenNL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMinotaurSemenNL_R_C* UMinotaurSemenNL_R_C::GetDefaultObj()
{
	static class UMinotaurSemenNL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMinotaurSemenNL_R_C*>(UMinotaurSemenNL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


