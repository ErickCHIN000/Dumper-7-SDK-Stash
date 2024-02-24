#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Component_SoftEdge_Divider.WBP_Component_SoftEdge_Divider_C
// (None)

class UClass* UWBP_Component_SoftEdge_Divider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Component_SoftEdge_Divider_C");

	return Clss;
}


// WBP_Component_SoftEdge_Divider_C WBP_Component_SoftEdge_Divider.Default__WBP_Component_SoftEdge_Divider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Component_SoftEdge_Divider_C* UWBP_Component_SoftEdge_Divider_C::GetDefaultObj()
{
	static class UWBP_Component_SoftEdge_Divider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Component_SoftEdge_Divider_C*>(UWBP_Component_SoftEdge_Divider_C::StaticClass()->DefaultObject);

	return Default;
}

}


