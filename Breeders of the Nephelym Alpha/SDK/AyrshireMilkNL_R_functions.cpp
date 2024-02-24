#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AyrshireMilkNL_R.AyrshireMilkNL_R_C
// (None)

class UClass* UAyrshireMilkNL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AyrshireMilkNL_R_C");

	return Clss;
}


// AyrshireMilkNL_R_C AyrshireMilkNL_R.Default__AyrshireMilkNL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAyrshireMilkNL_R_C* UAyrshireMilkNL_R_C::GetDefaultObj()
{
	static class UAyrshireMilkNL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAyrshireMilkNL_R_C*>(UAyrshireMilkNL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


