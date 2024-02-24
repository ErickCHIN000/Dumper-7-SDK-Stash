#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyNL_G.ButterflyNL_G_C
// (None)

class UClass* UButterflyNL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyNL_G_C");

	return Clss;
}


// ButterflyNL_G_C ButterflyNL_G.Default__ButterflyNL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyNL_G_C* UButterflyNL_G_C::GetDefaultObj()
{
	static class UButterflyNL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyNL_G_C*>(UButterflyNL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


