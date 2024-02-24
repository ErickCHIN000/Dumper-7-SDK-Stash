#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_BullDefault.CS_BullDefault_C
// (None)

class UClass* UCS_BullDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_BullDefault_C");

	return Clss;
}


// CS_BullDefault_C CS_BullDefault.Default__CS_BullDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_BullDefault_C* UCS_BullDefault_C::GetDefaultObj()
{
	static class UCS_BullDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_BullDefault_C*>(UCS_BullDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


