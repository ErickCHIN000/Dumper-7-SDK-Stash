#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DMDickSukinF.DMDickSukinF_C
// (None)

class UClass* UDMDickSukinF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DMDickSukinF_C");

	return Clss;
}


// DMDickSukinF_C DMDickSukinF.Default__DMDickSukinF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDMDickSukinF_C* UDMDickSukinF_C::GetDefaultObj()
{
	static class UDMDickSukinF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDMDickSukinF_C*>(UDMDickSukinF_C::StaticClass()->DefaultObject);

	return Default;
}

}


