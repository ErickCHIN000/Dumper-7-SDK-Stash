#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPClass_Customization_HeroStatuePose.BPClass_Customization_HeroStatuePose_C
// (Actor)

class UClass* ABPClass_Customization_HeroStatuePose_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPClass_Customization_HeroStatuePose_C");

	return Clss;
}


// BPClass_Customization_HeroStatuePose_C BPClass_Customization_HeroStatuePose.Default__BPClass_Customization_HeroStatuePose_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPClass_Customization_HeroStatuePose_C* ABPClass_Customization_HeroStatuePose_C::GetDefaultObj()
{
	static class ABPClass_Customization_HeroStatuePose_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPClass_Customization_HeroStatuePose_C*>(ABPClass_Customization_HeroStatuePose_C::StaticClass()->DefaultObject);

	return Default;
}

}


