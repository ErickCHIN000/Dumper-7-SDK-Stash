#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CE_AnointedFreezing.CE_AnointedFreezing_C
// (None)

class UClass* UCE_AnointedFreezing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CE_AnointedFreezing_C");

	return Clss;
}


// CE_AnointedFreezing_C CE_AnointedFreezing.Default__CE_AnointedFreezing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCE_AnointedFreezing_C* UCE_AnointedFreezing_C::GetDefaultObj()
{
	static class UCE_AnointedFreezing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCE_AnointedFreezing_C*>(UCE_AnointedFreezing_C::StaticClass()->DefaultObject);

	return Default;
}

}


