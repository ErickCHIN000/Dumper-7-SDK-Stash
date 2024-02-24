#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BatMilkNL_G.BatMilkNL_G_C
// (None)

class UClass* UBatMilkNL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BatMilkNL_G_C");

	return Clss;
}


// BatMilkNL_G_C BatMilkNL_G.Default__BatMilkNL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBatMilkNL_G_C* UBatMilkNL_G_C::GetDefaultObj()
{
	static class UBatMilkNL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBatMilkNL_G_C*>(UBatMilkNL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


