#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyHL_R.ButterflyHL_R_C
// (None)

class UClass* UButterflyHL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyHL_R_C");

	return Clss;
}


// ButterflyHL_R_C ButterflyHL_R.Default__ButterflyHL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyHL_R_C* UButterflyHL_R_C::GetDefaultObj()
{
	static class UButterflyHL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyHL_R_C*>(UButterflyHL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


