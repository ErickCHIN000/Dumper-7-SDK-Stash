#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_DaevaDefault.CS_DaevaDefault_C
// (None)

class UClass* UCS_DaevaDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_DaevaDefault_C");

	return Clss;
}


// CS_DaevaDefault_C CS_DaevaDefault.Default__CS_DaevaDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_DaevaDefault_C* UCS_DaevaDefault_C::GetDefaultObj()
{
	static class UCS_DaevaDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_DaevaDefault_C*>(UCS_DaevaDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


