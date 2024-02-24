#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FrontFlatbedTruckWheel.BP_FrontFlatbedTruckWheel_C
// (None)

class UClass* UBP_FrontFlatbedTruckWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FrontFlatbedTruckWheel_C");

	return Clss;
}


// BP_FrontFlatbedTruckWheel_C BP_FrontFlatbedTruckWheel.Default__BP_FrontFlatbedTruckWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FrontFlatbedTruckWheel_C* UBP_FrontFlatbedTruckWheel_C::GetDefaultObj()
{
	static class UBP_FrontFlatbedTruckWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FrontFlatbedTruckWheel_C*>(UBP_FrontFlatbedTruckWheel_C::StaticClass()->DefaultObject);

	return Default;
}

}


