#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Normal.DmgType_Normal_C
// (None)

class UClass* UDmgType_Normal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Normal_C");

	return Clss;
}


// DmgType_Normal_C DmgType_Normal.Default__DmgType_Normal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Normal_C* UDmgType_Normal_C::GetDefaultObj()
{
	static class UDmgType_Normal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Normal_C*>(UDmgType_Normal_C::StaticClass()->DefaultObject);

	return Default;
}

}


