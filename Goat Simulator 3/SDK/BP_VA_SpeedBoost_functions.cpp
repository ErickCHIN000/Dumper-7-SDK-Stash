#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VA_SpeedBoost.BP_VA_SpeedBoost_C
// (None)

class UClass* UBP_VA_SpeedBoost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VA_SpeedBoost_C");

	return Clss;
}


// BP_VA_SpeedBoost_C BP_VA_SpeedBoost.Default__BP_VA_SpeedBoost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_VA_SpeedBoost_C* UBP_VA_SpeedBoost_C::GetDefaultObj()
{
	static class UBP_VA_SpeedBoost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_VA_SpeedBoost_C*>(UBP_VA_SpeedBoost_C::StaticClass()->DefaultObject);

	return Default;
}

}


