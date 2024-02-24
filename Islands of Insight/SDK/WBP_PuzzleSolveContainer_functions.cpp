#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PuzzleSolveContainer.WBP_PuzzleSolveContainer_C
// (None)

class UClass* UWBP_PuzzleSolveContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PuzzleSolveContainer_C");

	return Clss;
}


// WBP_PuzzleSolveContainer_C WBP_PuzzleSolveContainer.Default__WBP_PuzzleSolveContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PuzzleSolveContainer_C* UWBP_PuzzleSolveContainer_C::GetDefaultObj()
{
	static class UWBP_PuzzleSolveContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PuzzleSolveContainer_C*>(UWBP_PuzzleSolveContainer_C::StaticClass()->DefaultObject);

	return Default;
}

}


