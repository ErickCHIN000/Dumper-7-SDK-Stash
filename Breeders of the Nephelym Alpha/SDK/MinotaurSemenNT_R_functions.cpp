#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MinotaurSemenNT_R.MinotaurSemenNT_R_C
// (None)

class UClass* UMinotaurSemenNT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinotaurSemenNT_R_C");

	return Clss;
}


// MinotaurSemenNT_R_C MinotaurSemenNT_R.Default__MinotaurSemenNT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMinotaurSemenNT_R_C* UMinotaurSemenNT_R_C::GetDefaultObj()
{
	static class UMinotaurSemenNT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMinotaurSemenNT_R_C*>(UMinotaurSemenNT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


