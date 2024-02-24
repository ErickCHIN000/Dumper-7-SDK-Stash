#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_ElfDefault.CS_ElfDefault_C
// (None)

class UClass* UCS_ElfDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_ElfDefault_C");

	return Clss;
}


// CS_ElfDefault_C CS_ElfDefault.Default__CS_ElfDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_ElfDefault_C* UCS_ElfDefault_C::GetDefaultObj()
{
	static class UCS_ElfDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_ElfDefault_C*>(UCS_ElfDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


