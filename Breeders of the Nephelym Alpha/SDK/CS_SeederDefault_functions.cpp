#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_SeederDefault.CS_SeederDefault_C
// (None)

class UClass* UCS_SeederDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_SeederDefault_C");

	return Clss;
}


// CS_SeederDefault_C CS_SeederDefault.Default__CS_SeederDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_SeederDefault_C* UCS_SeederDefault_C::GetDefaultObj()
{
	static class UCS_SeederDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_SeederDefault_C*>(UCS_SeederDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


