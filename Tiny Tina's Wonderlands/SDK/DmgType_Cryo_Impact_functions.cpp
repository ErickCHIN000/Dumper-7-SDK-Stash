#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Cryo_Impact.DmgType_Cryo_Impact_C
// (None)

class UClass* UDmgType_Cryo_Impact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Cryo_Impact_C");

	return Clss;
}


// DmgType_Cryo_Impact_C DmgType_Cryo_Impact.Default__DmgType_Cryo_Impact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Cryo_Impact_C* UDmgType_Cryo_Impact_C::GetDefaultObj()
{
	static class UDmgType_Cryo_Impact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Cryo_Impact_C*>(UDmgType_Cryo_Impact_C::StaticClass()->DefaultObject);

	return Default;
}

}


