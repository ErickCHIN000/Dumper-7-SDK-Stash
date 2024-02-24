#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgTypeApplyStaminaRegPenalty.DmgTypeApplyStaminaRegPenalty_C
// (None)

class UClass* UDmgTypeApplyStaminaRegPenalty_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgTypeApplyStaminaRegPenalty_C");

	return Clss;
}


// DmgTypeApplyStaminaRegPenalty_C DmgTypeApplyStaminaRegPenalty.Default__DmgTypeApplyStaminaRegPenalty_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgTypeApplyStaminaRegPenalty_C* UDmgTypeApplyStaminaRegPenalty_C::GetDefaultObj()
{
	static class UDmgTypeApplyStaminaRegPenalty_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgTypeApplyStaminaRegPenalty_C*>(UDmgTypeApplyStaminaRegPenalty_C::StaticClass()->DefaultObject);

	return Default;
}

}


