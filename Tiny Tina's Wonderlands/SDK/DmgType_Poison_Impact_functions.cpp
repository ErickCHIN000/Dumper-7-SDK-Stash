#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Poison_Impact.DmgType_Poison_Impact_C
// (None)

class UClass* UDmgType_Poison_Impact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Poison_Impact_C");

	return Clss;
}


// DmgType_Poison_Impact_C DmgType_Poison_Impact.Default__DmgType_Poison_Impact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Poison_Impact_C* UDmgType_Poison_Impact_C::GetDefaultObj()
{
	static class UDmgType_Poison_Impact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Poison_Impact_C*>(UDmgType_Poison_Impact_C::StaticClass()->DefaultObject);

	return Default;
}

}


