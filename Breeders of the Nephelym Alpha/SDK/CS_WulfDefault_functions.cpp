#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_WulfDefault.CS_WulfDefault_C
// (None)

class UClass* UCS_WulfDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_WulfDefault_C");

	return Clss;
}


// CS_WulfDefault_C CS_WulfDefault.Default__CS_WulfDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_WulfDefault_C* UCS_WulfDefault_C::GetDefaultObj()
{
	static class UCS_WulfDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_WulfDefault_C*>(UCS_WulfDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


