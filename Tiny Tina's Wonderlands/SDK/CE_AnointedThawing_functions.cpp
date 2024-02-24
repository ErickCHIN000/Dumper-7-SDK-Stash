#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CE_AnointedThawing.CE_AnointedThawing_C
// (None)

class UClass* UCE_AnointedThawing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CE_AnointedThawing_C");

	return Clss;
}


// CE_AnointedThawing_C CE_AnointedThawing.Default__CE_AnointedThawing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCE_AnointedThawing_C* UCE_AnointedThawing_C::GetDefaultObj()
{
	static class UCE_AnointedThawing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCE_AnointedThawing_C*>(UCE_AnointedThawing_C::StaticClass()->DefaultObject);

	return Default;
}

}


