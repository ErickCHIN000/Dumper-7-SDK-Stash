#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KestrelMilkNH_R.KestrelMilkNH_R_C
// (None)

class UClass* UKestrelMilkNH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KestrelMilkNH_R_C");

	return Clss;
}


// KestrelMilkNH_R_C KestrelMilkNH_R.Default__KestrelMilkNH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKestrelMilkNH_R_C* UKestrelMilkNH_R_C::GetDefaultObj()
{
	static class UKestrelMilkNH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKestrelMilkNH_R_C*>(UKestrelMilkNH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


