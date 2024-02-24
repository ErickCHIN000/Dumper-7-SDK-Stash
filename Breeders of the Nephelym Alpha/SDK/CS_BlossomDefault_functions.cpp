#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_BlossomDefault.CS_BlossomDefault_C
// (None)

class UClass* UCS_BlossomDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_BlossomDefault_C");

	return Clss;
}


// CS_BlossomDefault_C CS_BlossomDefault.Default__CS_BlossomDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_BlossomDefault_C* UCS_BlossomDefault_C::GetDefaultObj()
{
	static class UCS_BlossomDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_BlossomDefault_C*>(UCS_BlossomDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


