#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EECollection_TOR_SP_Proj.EECollection_TOR_SP_Proj_C
// (None)

class UClass* UEECollection_TOR_SP_Proj_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EECollection_TOR_SP_Proj_C");

	return Clss;
}


// EECollection_TOR_SP_Proj_C EECollection_TOR_SP_Proj.Default__EECollection_TOR_SP_Proj_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEECollection_TOR_SP_Proj_C* UEECollection_TOR_SP_Proj_C::GetDefaultObj()
{
	static class UEECollection_TOR_SP_Proj_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEECollection_TOR_SP_Proj_C*>(UEECollection_TOR_SP_Proj_C::StaticClass()->DefaultObject);

	return Default;
}

}


