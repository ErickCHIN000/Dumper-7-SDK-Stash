#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_HealingDefault.DmgType_HealingDefault_C
// (None)

class UClass* UDmgType_HealingDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_HealingDefault_C");

	return Clss;
}


// DmgType_HealingDefault_C DmgType_HealingDefault.Default__DmgType_HealingDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_HealingDefault_C* UDmgType_HealingDefault_C::GetDefaultObj()
{
	static class UDmgType_HealingDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_HealingDefault_C*>(UDmgType_HealingDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


