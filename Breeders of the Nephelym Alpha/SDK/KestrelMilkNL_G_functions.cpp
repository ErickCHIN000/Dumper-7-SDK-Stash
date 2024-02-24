#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KestrelMilkNL_G.KestrelMilkNL_G_C
// (None)

class UClass* UKestrelMilkNL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KestrelMilkNL_G_C");

	return Clss;
}


// KestrelMilkNL_G_C KestrelMilkNL_G.Default__KestrelMilkNL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKestrelMilkNL_G_C* UKestrelMilkNL_G_C::GetDefaultObj()
{
	static class UKestrelMilkNL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKestrelMilkNL_G_C*>(UKestrelMilkNL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


