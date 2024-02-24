#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FrontTruckWheel.BP_FrontTruckWheel_C
// (None)

class UClass* UBP_FrontTruckWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FrontTruckWheel_C");

	return Clss;
}


// BP_FrontTruckWheel_C BP_FrontTruckWheel.Default__BP_FrontTruckWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FrontTruckWheel_C* UBP_FrontTruckWheel_C::GetDefaultObj()
{
	static class UBP_FrontTruckWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FrontTruckWheel_C*>(UBP_FrontTruckWheel_C::StaticClass()->DefaultObject);

	return Default;
}

}


