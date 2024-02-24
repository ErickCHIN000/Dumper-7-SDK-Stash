#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DB_RecipeRequirementsListing.WBP_DB_RecipeRequirementsListing_C
// (None)

class UClass* UWBP_DB_RecipeRequirementsListing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DB_RecipeRequirementsListing_C");

	return Clss;
}


// WBP_DB_RecipeRequirementsListing_C WBP_DB_RecipeRequirementsListing.Default__WBP_DB_RecipeRequirementsListing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DB_RecipeRequirementsListing_C* UWBP_DB_RecipeRequirementsListing_C::GetDefaultObj()
{
	static class UWBP_DB_RecipeRequirementsListing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DB_RecipeRequirementsListing_C*>(UWBP_DB_RecipeRequirementsListing_C::StaticClass()->DefaultObject);

	return Default;
}

}


