#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UserEdge_Vault.UserEdge_Vault_C
// (None)

class UClass* UUserEdge_Vault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UserEdge_Vault_C");

	return Clss;
}


// UserEdge_Vault_C UserEdge_Vault.Default__UserEdge_Vault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUserEdge_Vault_C* UUserEdge_Vault_C::GetDefaultObj()
{
	static class UUserEdge_Vault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUserEdge_Vault_C*>(UUserEdge_Vault_C::StaticClass()->DefaultObject);

	return Default;
}

}


