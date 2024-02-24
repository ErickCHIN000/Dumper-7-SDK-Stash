#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPClass_Customization_Banner.BPClass_Customization_Banner_C
// (Actor)

class UClass* ABPClass_Customization_Banner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPClass_Customization_Banner_C");

	return Clss;
}


// BPClass_Customization_Banner_C BPClass_Customization_Banner.Default__BPClass_Customization_Banner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPClass_Customization_Banner_C* ABPClass_Customization_Banner_C::GetDefaultObj()
{
	static class ABPClass_Customization_Banner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPClass_Customization_Banner_C*>(ABPClass_Customization_Banner_C::StaticClass()->DefaultObject);

	return Default;
}

}


