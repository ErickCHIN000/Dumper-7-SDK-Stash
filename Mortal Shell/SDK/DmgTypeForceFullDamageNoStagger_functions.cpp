#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgTypeForceFullDamageNoStagger.DmgTypeForceFullDamageNoStagger_C
// (None)

class UClass* UDmgTypeForceFullDamageNoStagger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgTypeForceFullDamageNoStagger_C");

	return Clss;
}


// DmgTypeForceFullDamageNoStagger_C DmgTypeForceFullDamageNoStagger.Default__DmgTypeForceFullDamageNoStagger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgTypeForceFullDamageNoStagger_C* UDmgTypeForceFullDamageNoStagger_C::GetDefaultObj()
{
	static class UDmgTypeForceFullDamageNoStagger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgTypeForceFullDamageNoStagger_C*>(UDmgTypeForceFullDamageNoStagger_C::StaticClass()->DefaultObject);

	return Default;
}

}


