#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgTypeFall.DmgTypeFall_C
// (None)

class UClass* UDmgTypeFall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgTypeFall_C");

	return Clss;
}


// DmgTypeFall_C DmgTypeFall.Default__DmgTypeFall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgTypeFall_C* UDmgTypeFall_C::GetDefaultObj()
{
	static class UDmgTypeFall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgTypeFall_C*>(UDmgTypeFall_C::StaticClass()->DefaultObject);

	return Default;
}

}


