#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPClass_Customization_Body.BPClass_Customization_Body_C
// (Actor)

class UClass* ABPClass_Customization_Body_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPClass_Customization_Body_C");

	return Clss;
}


// BPClass_Customization_Body_C BPClass_Customization_Body.Default__BPClass_Customization_Body_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPClass_Customization_Body_C* ABPClass_Customization_Body_C::GetDefaultObj()
{
	static class ABPClass_Customization_Body_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPClass_Customization_Body_C*>(ABPClass_Customization_Body_C::StaticClass()->DefaultObject);

	return Default;
}

}


