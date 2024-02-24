#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CambionMilkNL_R.CambionMilkNL_R_C
// (None)

class UClass* UCambionMilkNL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CambionMilkNL_R_C");

	return Clss;
}


// CambionMilkNL_R_C CambionMilkNL_R.Default__CambionMilkNL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCambionMilkNL_R_C* UCambionMilkNL_R_C::GetDefaultObj()
{
	static class UCambionMilkNL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCambionMilkNL_R_C*>(UCambionMilkNL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


