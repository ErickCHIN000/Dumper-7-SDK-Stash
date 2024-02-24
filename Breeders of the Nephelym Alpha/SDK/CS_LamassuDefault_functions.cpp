#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_LamassuDefault.CS_LamassuDefault_C
// (None)

class UClass* UCS_LamassuDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_LamassuDefault_C");

	return Clss;
}


// CS_LamassuDefault_C CS_LamassuDefault.Default__CS_LamassuDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_LamassuDefault_C* UCS_LamassuDefault_C::GetDefaultObj()
{
	static class UCS_LamassuDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_LamassuDefault_C*>(UCS_LamassuDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


