#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_BatDefault.CS_BatDefault_C
// (None)

class UClass* UCS_BatDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_BatDefault_C");

	return Clss;
}


// CS_BatDefault_C CS_BatDefault.Default__CS_BatDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_BatDefault_C* UCS_BatDefault_C::GetDefaultObj()
{
	static class UCS_BatDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_BatDefault_C*>(UCS_BatDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


