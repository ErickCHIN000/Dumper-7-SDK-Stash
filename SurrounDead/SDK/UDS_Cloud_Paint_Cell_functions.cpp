#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UDS_Cloud_Paint_Cell.UDS_Cloud_Paint_Cell_C
// (None)

class UClass* UUDS_Cloud_Paint_Cell_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UDS_Cloud_Paint_Cell_C");

	return Clss;
}


// UDS_Cloud_Paint_Cell_C UDS_Cloud_Paint_Cell.Default__UDS_Cloud_Paint_Cell_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUDS_Cloud_Paint_Cell_C* UUDS_Cloud_Paint_Cell_C::GetDefaultObj()
{
	static class UUDS_Cloud_Paint_Cell_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUDS_Cloud_Paint_Cell_C*>(UUDS_Cloud_Paint_Cell_C::StaticClass()->DefaultObject);

	return Default;
}

}


