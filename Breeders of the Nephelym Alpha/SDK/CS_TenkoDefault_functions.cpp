#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_TenkoDefault.CS_TenkoDefault_C
// (None)

class UClass* UCS_TenkoDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_TenkoDefault_C");

	return Clss;
}


// CS_TenkoDefault_C CS_TenkoDefault.Default__CS_TenkoDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_TenkoDefault_C* UCS_TenkoDefault_C::GetDefaultObj()
{
	static class UCS_TenkoDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_TenkoDefault_C*>(UCS_TenkoDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


