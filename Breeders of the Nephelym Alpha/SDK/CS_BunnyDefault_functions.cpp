#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_BunnyDefault.CS_BunnyDefault_C
// (None)

class UClass* UCS_BunnyDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_BunnyDefault_C");

	return Clss;
}


// CS_BunnyDefault_C CS_BunnyDefault.Default__CS_BunnyDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_BunnyDefault_C* UCS_BunnyDefault_C::GetDefaultObj()
{
	static class UCS_BunnyDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_BunnyDefault_C*>(UCS_BunnyDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


