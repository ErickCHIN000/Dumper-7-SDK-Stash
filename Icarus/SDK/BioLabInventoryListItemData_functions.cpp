#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BioLabInventoryListItemData.BioLabInventoryListItemData_C
// (None)

class UClass* UBioLabInventoryListItemData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BioLabInventoryListItemData_C");

	return Clss;
}


// BioLabInventoryListItemData_C BioLabInventoryListItemData.Default__BioLabInventoryListItemData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBioLabInventoryListItemData_C* UBioLabInventoryListItemData_C::GetDefaultObj()
{
	static class UBioLabInventoryListItemData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBioLabInventoryListItemData_C*>(UBioLabInventoryListItemData_C::StaticClass()->DefaultObject);

	return Default;
}

}


