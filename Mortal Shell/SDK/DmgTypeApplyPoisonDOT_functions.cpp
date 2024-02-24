#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgTypeApplyPoisonDOT.DmgTypeApplyPoisonDOT_C
// (None)

class UClass* UDmgTypeApplyPoisonDOT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgTypeApplyPoisonDOT_C");

	return Clss;
}


// DmgTypeApplyPoisonDOT_C DmgTypeApplyPoisonDOT.Default__DmgTypeApplyPoisonDOT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgTypeApplyPoisonDOT_C* UDmgTypeApplyPoisonDOT_C::GetDefaultObj()
{
	static class UDmgTypeApplyPoisonDOT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgTypeApplyPoisonDOT_C*>(UDmgTypeApplyPoisonDOT_C::StaticClass()->DefaultObject);

	return Default;
}

}


