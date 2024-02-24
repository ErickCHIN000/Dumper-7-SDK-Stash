#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Artifact_RearEnder.DmgType_Artifact_RearEnder_C
// (None)

class UClass* UDmgType_Artifact_RearEnder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Artifact_RearEnder_C");

	return Clss;
}


// DmgType_Artifact_RearEnder_C DmgType_Artifact_RearEnder.Default__DmgType_Artifact_RearEnder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Artifact_RearEnder_C* UDmgType_Artifact_RearEnder_C::GetDefaultObj()
{
	static class UDmgType_Artifact_RearEnder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Artifact_RearEnder_C*>(UDmgType_Artifact_RearEnder_C::StaticClass()->DefaultObject);

	return Default;
}

}


