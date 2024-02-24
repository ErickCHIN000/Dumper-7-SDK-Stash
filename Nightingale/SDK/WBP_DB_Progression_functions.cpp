#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DB_Progression.WBP_DB_Progression_C
// (None)

class UClass* UWBP_DB_Progression_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DB_Progression_C");

	return Clss;
}


// WBP_DB_Progression_C WBP_DB_Progression.Default__WBP_DB_Progression_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DB_Progression_C* UWBP_DB_Progression_C::GetDefaultObj()
{
	static class UWBP_DB_Progression_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DB_Progression_C*>(UWBP_DB_Progression_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DB_Progression.WBP_DB_Progression_C.BndEvt__WBP_DB_Performance_WBP_UIK_MenuTabs_1_K2Node_ComponentBoundEvent_0_TabSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        SelectedTabName                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              ActiveTab                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Progression_C::BndEvt__WBP_DB_Performance_WBP_UIK_MenuTabs_1_K2Node_ComponentBoundEvent_0_TabSelected__DelegateSignature(class FText SelectedTabName, int32 ActiveTab)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Progression_C", "BndEvt__WBP_DB_Performance_WBP_UIK_MenuTabs_1_K2Node_ComponentBoundEvent_0_TabSelected__DelegateSignature");

	Params::UWBP_DB_Progression_C_BndEvt__WBP_DB_Performance_WBP_UIK_MenuTabs_1_K2Node_ComponentBoundEvent_0_TabSelected__DelegateSignature_Params Parms{};

	Parms.SelectedTabName = SelectedTabName;
	Parms.ActiveTab = ActiveTab;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Progression.WBP_DB_Progression_C.ExecuteUbergraph_WBP_DB_Progression
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_SelectedTabName                       (None)
// int32                              K2Node_ComponentBoundEvent_ActiveTab                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Progression_C::ExecuteUbergraph_WBP_DB_Progression(int32 EntryPoint, class FText K2Node_ComponentBoundEvent_SelectedTabName, int32 K2Node_ComponentBoundEvent_ActiveTab)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Progression_C", "ExecuteUbergraph_WBP_DB_Progression");

	Params::UWBP_DB_Progression_C_ExecuteUbergraph_WBP_DB_Progression_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_SelectedTabName = K2Node_ComponentBoundEvent_SelectedTabName;
	Parms.K2Node_ComponentBoundEvent_ActiveTab = K2Node_ComponentBoundEvent_ActiveTab;

	UObject::ProcessEvent(Func, &Parms);

}

}


