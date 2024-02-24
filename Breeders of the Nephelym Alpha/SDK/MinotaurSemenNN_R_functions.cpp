#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MinotaurSemenNN_R.MinotaurSemenNN_R_C
// (None)

class UClass* UMinotaurSemenNN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinotaurSemenNN_R_C");

	return Clss;
}


// MinotaurSemenNN_R_C MinotaurSemenNN_R.Default__MinotaurSemenNN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMinotaurSemenNN_R_C* UMinotaurSemenNN_R_C::GetDefaultObj()
{
	static class UMinotaurSemenNN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMinotaurSemenNN_R_C*>(UMinotaurSemenNN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


