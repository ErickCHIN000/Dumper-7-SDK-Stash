#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PDA_GNM_Base_Hillgiant.PDA_GNM_Base_Hillgiant_C
// (None)

class UClass* UPDA_GNM_Base_Hillgiant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PDA_GNM_Base_Hillgiant_C");

	return Clss;
}


// PDA_GNM_Base_Hillgiant_C PDA_GNM_Base_Hillgiant.Default__PDA_GNM_Base_Hillgiant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPDA_GNM_Base_Hillgiant_C* UPDA_GNM_Base_Hillgiant_C::GetDefaultObj()
{
	static class UPDA_GNM_Base_Hillgiant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPDA_GNM_Base_Hillgiant_C*>(UPDA_GNM_Base_Hillgiant_C::StaticClass()->DefaultObject);

	return Default;
}

}


