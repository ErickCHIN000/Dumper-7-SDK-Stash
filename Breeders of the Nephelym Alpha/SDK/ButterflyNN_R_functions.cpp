#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyNN_R.ButterflyNN_R_C
// (None)

class UClass* UButterflyNN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyNN_R_C");

	return Clss;
}


// ButterflyNN_R_C ButterflyNN_R.Default__ButterflyNN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyNN_R_C* UButterflyNN_R_C::GetDefaultObj()
{
	static class UButterflyNN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyNN_R_C*>(UButterflyNN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


