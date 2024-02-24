#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Shake_Hit_Light.BP_Shake_Hit_Light_C
// (None)

class UClass* UBP_Shake_Hit_Light_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Shake_Hit_Light_C");

	return Clss;
}


// BP_Shake_Hit_Light_C BP_Shake_Hit_Light.Default__BP_Shake_Hit_Light_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Shake_Hit_Light_C* UBP_Shake_Hit_Light_C::GetDefaultObj()
{
	static class UBP_Shake_Hit_Light_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Shake_Hit_Light_C*>(UBP_Shake_Hit_Light_C::StaticClass()->DefaultObject);

	return Default;
}

}


