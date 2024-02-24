#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MagazineMarksmanship.BP_MagazineMarksmanship_C
// (Actor)

class UClass* ABP_MagazineMarksmanship_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MagazineMarksmanship_C");

	return Clss;
}


// BP_MagazineMarksmanship_C BP_MagazineMarksmanship.Default__BP_MagazineMarksmanship_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MagazineMarksmanship_C* ABP_MagazineMarksmanship_C::GetDefaultObj()
{
	static class ABP_MagazineMarksmanship_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MagazineMarksmanship_C*>(ABP_MagazineMarksmanship_C::StaticClass()->DefaultObject);

	return Default;
}

}


