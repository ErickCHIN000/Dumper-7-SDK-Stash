#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_SporeDefault.CS_SporeDefault_C
// (None)

class UClass* UCS_SporeDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_SporeDefault_C");

	return Clss;
}


// CS_SporeDefault_C CS_SporeDefault.Default__CS_SporeDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_SporeDefault_C* UCS_SporeDefault_C::GetDefaultObj()
{
	static class UCS_SporeDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_SporeDefault_C*>(UCS_SporeDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


