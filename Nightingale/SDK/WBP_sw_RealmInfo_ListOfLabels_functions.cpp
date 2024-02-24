#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_sw_RealmInfo_ListOfLabels.WBP_sw_RealmInfo_ListOfLabels_C
// (None)

class UClass* UWBP_sw_RealmInfo_ListOfLabels_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_sw_RealmInfo_ListOfLabels_C");

	return Clss;
}


// WBP_sw_RealmInfo_ListOfLabels_C WBP_sw_RealmInfo_ListOfLabels.Default__WBP_sw_RealmInfo_ListOfLabels_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_sw_RealmInfo_ListOfLabels_C* UWBP_sw_RealmInfo_ListOfLabels_C::GetDefaultObj()
{
	static class UWBP_sw_RealmInfo_ListOfLabels_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_sw_RealmInfo_ListOfLabels_C*>(UWBP_sw_RealmInfo_ListOfLabels_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_sw_RealmInfo_ListOfLabels.WBP_sw_RealmInfo_ListOfLabels_C.AddLabel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// float                              K2Node_MakeStruct_Size_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_RealmInfo_ListOfLabels_C::AddLabel(class FText Label, int32 CallFunc_MakeLiteralInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, class UTextBlock* CallFunc_SpawnObject_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, float K2Node_MakeStruct_Size_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfo_ListOfLabels_C", "AddLabel");

	Params::UWBP_sw_RealmInfo_ListOfLabels_C_AddLabel_Params Parms{};

	Parms.Label = Label;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_Size_ImplicitCast = K2Node_MakeStruct_Size_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_RealmInfo_ListOfLabels.WBP_sw_RealmInfo_ListOfLabels_C.DisplayNoTextInfoAndContainer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldDisplay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_RealmInfo_ListOfLabels_C::DisplayNoTextInfoAndContainer(bool ShouldDisplay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfo_ListOfLabels_C", "DisplayNoTextInfoAndContainer");

	Params::UWBP_sw_RealmInfo_ListOfLabels_C_DisplayNoTextInfoAndContainer_Params Parms{};

	Parms.ShouldDisplay = ShouldDisplay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_RealmInfo_ListOfLabels.WBP_sw_RealmInfo_ListOfLabels_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_sw_RealmInfo_ListOfLabels_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfo_ListOfLabels_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_RealmInfo_ListOfLabels.WBP_sw_RealmInfo_ListOfLabels_C.ExecuteUbergraph_WBP_sw_RealmInfo_ListOfLabels
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_RealmInfo_ListOfLabels_C::ExecuteUbergraph_WBP_sw_RealmInfo_ListOfLabels(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfo_ListOfLabels_C", "ExecuteUbergraph_WBP_sw_RealmInfo_ListOfLabels");

	Params::UWBP_sw_RealmInfo_ListOfLabels_C_ExecuteUbergraph_WBP_sw_RealmInfo_ListOfLabels_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


