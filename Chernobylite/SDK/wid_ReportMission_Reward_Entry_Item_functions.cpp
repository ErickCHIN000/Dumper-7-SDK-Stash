#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_ReportMission_Reward_Entry_Item.wid_ReportMission_Reward_Entry_Item_C
// (None)

class UClass* UWid_ReportMission_Reward_Entry_Item_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_ReportMission_Reward_Entry_Item_C");

	return Clss;
}


// wid_ReportMission_Reward_Entry_Item_C wid_ReportMission_Reward_Entry_Item.Default__wid_ReportMission_Reward_Entry_Item_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_ReportMission_Reward_Entry_Item_C* UWid_ReportMission_Reward_Entry_Item_C::GetDefaultObj()
{
	static class UWid_ReportMission_Reward_Entry_Item_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_ReportMission_Reward_Entry_Item_C*>(UWid_ReportMission_Reward_Entry_Item_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_ReportMission_Reward_Entry_Item.wid_ReportMission_Reward_Entry_Item_C.SetSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewVisibility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Color                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (UObjectWrapper)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (UObjectWrapper)

void UWid_ReportMission_Reward_Entry_Item_C::SetSelected(bool NewVisibility, const struct FLinearColor& Color, enum class ESlateVisibility NewLocalVar_0, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class FText CallFunc_Conv_FloatToText_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_ReportMission_Reward_Entry_Item_C", "SetSelected");

	Params::UWid_ReportMission_Reward_Entry_Item_C_SetSelected_Params Parms{};

	Parms.NewVisibility = NewVisibility;
	Parms.Color = Color;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_ReportMission_Reward_Entry_Item.wid_ReportMission_Reward_Entry_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_ReportMission_Reward_Entry_Item_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_ReportMission_Reward_Entry_Item_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_ReportMission_Reward_Entry_Item.wid_ReportMission_Reward_Entry_Item_C.ExecuteUbergraph_wid_ReportMission_Reward_Entry_Item
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_ReportMission_Reward_Entry_Item_C::ExecuteUbergraph_wid_ReportMission_Reward_Entry_Item(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_ReportMission_Reward_Entry_Item_C", "ExecuteUbergraph_wid_ReportMission_Reward_Entry_Item");

	Params::UWid_ReportMission_Reward_Entry_Item_C_ExecuteUbergraph_wid_ReportMission_Reward_Entry_Item_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


