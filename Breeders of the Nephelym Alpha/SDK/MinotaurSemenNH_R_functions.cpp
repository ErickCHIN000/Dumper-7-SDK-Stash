#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MinotaurSemenNH_R.MinotaurSemenNH_R_C
// (None)

class UClass* UMinotaurSemenNH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinotaurSemenNH_R_C");

	return Clss;
}


// MinotaurSemenNH_R_C MinotaurSemenNH_R.Default__MinotaurSemenNH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMinotaurSemenNH_R_C* UMinotaurSemenNH_R_C::GetDefaultObj()
{
	static class UMinotaurSemenNH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMinotaurSemenNH_R_C*>(UMinotaurSemenNH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


