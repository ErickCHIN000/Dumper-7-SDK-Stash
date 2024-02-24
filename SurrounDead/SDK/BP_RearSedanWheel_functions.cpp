#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RearSedanWheel.BP_RearSedanWheel_C
// (None)

class UClass* UBP_RearSedanWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RearSedanWheel_C");

	return Clss;
}


// BP_RearSedanWheel_C BP_RearSedanWheel.Default__BP_RearSedanWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RearSedanWheel_C* UBP_RearSedanWheel_C::GetDefaultObj()
{
	static class UBP_RearSedanWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RearSedanWheel_C*>(UBP_RearSedanWheel_C::StaticClass()->DefaultObject);

	return Default;
}

}


