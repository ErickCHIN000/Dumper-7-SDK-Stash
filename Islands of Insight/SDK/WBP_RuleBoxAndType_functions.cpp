#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_RuleBoxAndType.WBP_RuleBoxAndType_C
// (None)

class UClass* UWBP_RuleBoxAndType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_RuleBoxAndType_C");

	return Clss;
}


// WBP_RuleBoxAndType_C WBP_RuleBoxAndType.Default__WBP_RuleBoxAndType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_RuleBoxAndType_C* UWBP_RuleBoxAndType_C::GetDefaultObj()
{
	static class UWBP_RuleBoxAndType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_RuleBoxAndType_C*>(UWBP_RuleBoxAndType_C::StaticClass()->DefaultObject);

	return Default;
}

}


