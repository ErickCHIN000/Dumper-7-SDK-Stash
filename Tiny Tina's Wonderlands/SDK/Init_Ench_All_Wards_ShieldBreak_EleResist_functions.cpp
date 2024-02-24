#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Ench_All_Wards_ShieldBreak_EleResist.Init_Ench_All_Wards_ShieldBreak_EleResist_C
// (None)

class UClass* UInit_Ench_All_Wards_ShieldBreak_EleResist_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Ench_All_Wards_ShieldBreak_EleResist_C");

	return Clss;
}


// Init_Ench_All_Wards_ShieldBreak_EleResist_C Init_Ench_All_Wards_ShieldBreak_EleResist.Default__Init_Ench_All_Wards_ShieldBreak_EleResist_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Ench_All_Wards_ShieldBreak_EleResist_C* UInit_Ench_All_Wards_ShieldBreak_EleResist_C::GetDefaultObj()
{
	static class UInit_Ench_All_Wards_ShieldBreak_EleResist_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Ench_All_Wards_ShieldBreak_EleResist_C*>(UInit_Ench_All_Wards_ShieldBreak_EleResist_C::StaticClass()->DefaultObject);

	return Default;
}

}


