#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BatMilkNH_R.BatMilkNH_R_C
// (None)

class UClass* UBatMilkNH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BatMilkNH_R_C");

	return Clss;
}


// BatMilkNH_R_C BatMilkNH_R.Default__BatMilkNH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBatMilkNH_R_C* UBatMilkNH_R_C::GetDefaultObj()
{
	static class UBatMilkNH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBatMilkNH_R_C*>(UBatMilkNH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


