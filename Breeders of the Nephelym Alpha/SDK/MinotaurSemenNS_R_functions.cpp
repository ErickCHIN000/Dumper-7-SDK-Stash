#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MinotaurSemenNS_R.MinotaurSemenNS_R_C
// (None)

class UClass* UMinotaurSemenNS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinotaurSemenNS_R_C");

	return Clss;
}


// MinotaurSemenNS_R_C MinotaurSemenNS_R.Default__MinotaurSemenNS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMinotaurSemenNS_R_C* UMinotaurSemenNS_R_C::GetDefaultObj()
{
	static class UMinotaurSemenNS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMinotaurSemenNS_R_C*>(UMinotaurSemenNS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


