#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KestrelMilkNL_R.KestrelMilkNL_R_C
// (None)

class UClass* UKestrelMilkNL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KestrelMilkNL_R_C");

	return Clss;
}


// KestrelMilkNL_R_C KestrelMilkNL_R.Default__KestrelMilkNL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKestrelMilkNL_R_C* UKestrelMilkNL_R_C::GetDefaultObj()
{
	static class UKestrelMilkNL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKestrelMilkNL_R_C*>(UKestrelMilkNL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


