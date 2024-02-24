#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PrivilegeManagerRuntime.PrivilegeManager
// (None)

class UClass* UPrivilegeManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrivilegeManager");

	return Clss;
}


// PrivilegeManager PrivilegeManagerRuntime.Default__PrivilegeManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UPrivilegeManager* UPrivilegeManager::GetDefaultObj()
{
	static class UPrivilegeManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrivilegeManager*>(UPrivilegeManager::StaticClass()->DefaultObject);

	return Default;
}

}


