#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CE_CryoThawing.CE_CryoThawing_C
// (None)

class UClass* UCE_CryoThawing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CE_CryoThawing_C");

	return Clss;
}


// CE_CryoThawing_C CE_CryoThawing.Default__CE_CryoThawing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCE_CryoThawing_C* UCE_CryoThawing_C::GetDefaultObj()
{
	static class UCE_CryoThawing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCE_CryoThawing_C*>(UCE_CryoThawing_C::StaticClass()->DefaultObject);

	return Default;
}

}


