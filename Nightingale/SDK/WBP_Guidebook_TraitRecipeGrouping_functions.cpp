#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Guidebook_TraitRecipeGrouping.WBP_Guidebook_TraitRecipeGrouping_C
// (None)

class UClass* UWBP_Guidebook_TraitRecipeGrouping_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Guidebook_TraitRecipeGrouping_C");

	return Clss;
}


// WBP_Guidebook_TraitRecipeGrouping_C WBP_Guidebook_TraitRecipeGrouping.Default__WBP_Guidebook_TraitRecipeGrouping_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Guidebook_TraitRecipeGrouping_C* UWBP_Guidebook_TraitRecipeGrouping_C::GetDefaultObj()
{
	static class UWBP_Guidebook_TraitRecipeGrouping_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Guidebook_TraitRecipeGrouping_C*>(UWBP_Guidebook_TraitRecipeGrouping_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Guidebook_TraitRecipeGrouping.WBP_Guidebook_TraitRecipeGrouping_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Guidebook_TraitRecipeGrouping_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_TraitRecipeGrouping_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Guidebook_TraitRecipeGrouping.WBP_Guidebook_TraitRecipeGrouping_C.ExecuteUbergraph_WBP_Guidebook_TraitRecipeGrouping
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_StructureTrait_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Guidebook_TraitRecipeGrouping_C::ExecuteUbergraph_WBP_Guidebook_TraitRecipeGrouping(int32 EntryPoint, class UWBP_sw_StructureTrait_C* CallFunc_Create_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Guidebook_TraitRecipeGrouping_C", "ExecuteUbergraph_WBP_Guidebook_TraitRecipeGrouping");

	Params::UWBP_Guidebook_TraitRecipeGrouping_C_ExecuteUbergraph_WBP_Guidebook_TraitRecipeGrouping_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToOverlay_ReturnValue = CallFunc_AddChildToOverlay_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


