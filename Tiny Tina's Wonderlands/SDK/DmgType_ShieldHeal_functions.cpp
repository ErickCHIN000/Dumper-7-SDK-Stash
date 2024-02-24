#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_ShieldHeal.DmgType_ShieldHeal_C
// (None)

class UClass* UDmgType_ShieldHeal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_ShieldHeal_C");

	return Clss;
}


// DmgType_ShieldHeal_C DmgType_ShieldHeal.Default__DmgType_ShieldHeal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_ShieldHeal_C* UDmgType_ShieldHeal_C::GetDefaultObj()
{
	static class UDmgType_ShieldHeal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_ShieldHeal_C*>(UDmgType_ShieldHeal_C::StaticClass()->DefaultObject);

	return Default;
}

}


