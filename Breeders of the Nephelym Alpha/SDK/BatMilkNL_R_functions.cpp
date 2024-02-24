#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BatMilkNL_R.BatMilkNL_R_C
// (None)

class UClass* UBatMilkNL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BatMilkNL_R_C");

	return Clss;
}


// BatMilkNL_R_C BatMilkNL_R.Default__BatMilkNL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBatMilkNL_R_C* UBatMilkNL_R_C::GetDefaultObj()
{
	static class UBatMilkNL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBatMilkNL_R_C*>(UBatMilkNL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


