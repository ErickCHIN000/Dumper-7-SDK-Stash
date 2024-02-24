#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyMN_R.ButterflyMN_R_C
// (None)

class UClass* UButterflyMN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyMN_R_C");

	return Clss;
}


// ButterflyMN_R_C ButterflyMN_R.Default__ButterflyMN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyMN_R_C* UButterflyMN_R_C::GetDefaultObj()
{
	static class UButterflyMN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyMN_R_C*>(UButterflyMN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


