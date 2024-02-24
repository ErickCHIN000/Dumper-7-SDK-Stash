#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_KestrelDefault.CS_KestrelDefault_C
// (None)

class UClass* UCS_KestrelDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_KestrelDefault_C");

	return Clss;
}


// CS_KestrelDefault_C CS_KestrelDefault.Default__CS_KestrelDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_KestrelDefault_C* UCS_KestrelDefault_C::GetDefaultObj()
{
	static class UCS_KestrelDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_KestrelDefault_C*>(UCS_KestrelDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


