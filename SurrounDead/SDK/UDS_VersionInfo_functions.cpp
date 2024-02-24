#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UDS_VersionInfo.UDS_VersionInfo_C
// (None)

class UClass* UUDS_VersionInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UDS_VersionInfo_C");

	return Clss;
}


// UDS_VersionInfo_C UDS_VersionInfo.Default__UDS_VersionInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUDS_VersionInfo_C* UUDS_VersionInfo_C::GetDefaultObj()
{
	static class UUDS_VersionInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUDS_VersionInfo_C*>(UUDS_VersionInfo_C::StaticClass()->DefaultObject);

	return Default;
}

}


