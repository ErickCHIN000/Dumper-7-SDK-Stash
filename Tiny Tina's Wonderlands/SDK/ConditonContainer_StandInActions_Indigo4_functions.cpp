#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ConditonContainer_StandInActions_Indigo4.ConditonContainer_StandInActions_Indigo4_C
// (None)

class UClass* UConditonContainer_StandInActions_Indigo4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConditonContainer_StandInActions_Indigo4_C");

	return Clss;
}


// ConditonContainer_StandInActions_Indigo4_C ConditonContainer_StandInActions_Indigo4.Default__ConditonContainer_StandInActions_Indigo4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UConditonContainer_StandInActions_Indigo4_C* UConditonContainer_StandInActions_Indigo4_C::GetDefaultObj()
{
	static class UConditonContainer_StandInActions_Indigo4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UConditonContainer_StandInActions_Indigo4_C*>(UConditonContainer_StandInActions_Indigo4_C::StaticClass()->DefaultObject);

	return Default;
}

}


