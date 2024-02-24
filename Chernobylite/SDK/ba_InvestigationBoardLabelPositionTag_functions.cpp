#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_InvestigationBoardLabelPositionTag.ba_InvestigationBoardLabelPositionTag_C
// (Actor)

class UClass* Aba_InvestigationBoardLabelPositionTag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_InvestigationBoardLabelPositionTag_C");

	return Clss;
}


// ba_InvestigationBoardLabelPositionTag_C ba_InvestigationBoardLabelPositionTag.Default__ba_InvestigationBoardLabelPositionTag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_InvestigationBoardLabelPositionTag_C* Aba_InvestigationBoardLabelPositionTag_C::GetDefaultObj()
{
	static class Aba_InvestigationBoardLabelPositionTag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_InvestigationBoardLabelPositionTag_C*>(Aba_InvestigationBoardLabelPositionTag_C::StaticClass()->DefaultObject);

	return Default;
}

}


