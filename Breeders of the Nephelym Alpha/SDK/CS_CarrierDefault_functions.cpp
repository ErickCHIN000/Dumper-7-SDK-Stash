#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_CarrierDefault.CS_CarrierDefault_C
// (None)

class UClass* UCS_CarrierDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_CarrierDefault_C");

	return Clss;
}


// CS_CarrierDefault_C CS_CarrierDefault.Default__CS_CarrierDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_CarrierDefault_C* UCS_CarrierDefault_C::GetDefaultObj()
{
	static class UCS_CarrierDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_CarrierDefault_C*>(UCS_CarrierDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


