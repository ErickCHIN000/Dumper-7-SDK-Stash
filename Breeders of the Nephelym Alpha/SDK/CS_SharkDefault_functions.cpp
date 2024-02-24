#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_SharkDefault.CS_SharkDefault_C
// (None)

class UClass* UCS_SharkDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_SharkDefault_C");

	return Clss;
}


// CS_SharkDefault_C CS_SharkDefault.Default__CS_SharkDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_SharkDefault_C* UCS_SharkDefault_C::GetDefaultObj()
{
	static class UCS_SharkDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_SharkDefault_C*>(UCS_SharkDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


