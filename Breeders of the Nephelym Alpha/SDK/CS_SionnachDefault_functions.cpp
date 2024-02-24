#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_SionnachDefault.CS_SionnachDefault_C
// (None)

class UClass* UCS_SionnachDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_SionnachDefault_C");

	return Clss;
}


// CS_SionnachDefault_C CS_SionnachDefault.Default__CS_SionnachDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_SionnachDefault_C* UCS_SionnachDefault_C::GetDefaultObj()
{
	static class UCS_SionnachDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_SionnachDefault_C*>(UCS_SionnachDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


