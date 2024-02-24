#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_UnicornDefault.CS_UnicornDefault_C
// (None)

class UClass* UCS_UnicornDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_UnicornDefault_C");

	return Clss;
}


// CS_UnicornDefault_C CS_UnicornDefault.Default__CS_UnicornDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_UnicornDefault_C* UCS_UnicornDefault_C::GetDefaultObj()
{
	static class UCS_UnicornDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_UnicornDefault_C*>(UCS_UnicornDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


