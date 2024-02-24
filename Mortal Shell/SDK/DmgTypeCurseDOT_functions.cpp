#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgTypeCurseDOT.DmgTypeCurseDOT_C
// (None)

class UClass* UDmgTypeCurseDOT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgTypeCurseDOT_C");

	return Clss;
}


// DmgTypeCurseDOT_C DmgTypeCurseDOT.Default__DmgTypeCurseDOT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgTypeCurseDOT_C* UDmgTypeCurseDOT_C::GetDefaultObj()
{
	static class UDmgTypeCurseDOT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgTypeCurseDOT_C*>(UDmgTypeCurseDOT_C::StaticClass()->DefaultObject);

	return Default;
}

}


