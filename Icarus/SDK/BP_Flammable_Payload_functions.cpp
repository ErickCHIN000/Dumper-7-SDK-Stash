#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Flammable_Payload.BP_Flammable_Payload_C
// (None)

class UClass* UBP_Flammable_Payload_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Flammable_Payload_C");

	return Clss;
}


// BP_Flammable_Payload_C BP_Flammable_Payload.Default__BP_Flammable_Payload_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Flammable_Payload_C* UBP_Flammable_Payload_C::GetDefaultObj()
{
	static class UBP_Flammable_Payload_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Flammable_Payload_C*>(UBP_Flammable_Payload_C::StaticClass()->DefaultObject);

	return Default;
}

}


