#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgTypeDirect.DmgTypeDirect_C
// (None)

class UClass* UDmgTypeDirect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgTypeDirect_C");

	return Clss;
}


// DmgTypeDirect_C DmgTypeDirect.Default__DmgTypeDirect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgTypeDirect_C* UDmgTypeDirect_C::GetDefaultObj()
{
	static class UDmgTypeDirect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgTypeDirect_C*>(UDmgTypeDirect_C::StaticClass()->DefaultObject);

	return Default;
}

}


