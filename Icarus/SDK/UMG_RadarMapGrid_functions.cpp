#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_RadarMapGrid.UMG_RadarMapGrid_C
// (None)

class UClass* UUMG_RadarMapGrid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_RadarMapGrid_C");

	return Clss;
}


// UMG_RadarMapGrid_C UMG_RadarMapGrid.Default__UMG_RadarMapGrid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_RadarMapGrid_C* UUMG_RadarMapGrid_C::GetDefaultObj()
{
	static class UUMG_RadarMapGrid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_RadarMapGrid_C*>(UUMG_RadarMapGrid_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_RadarMapGrid.UMG_RadarMapGrid_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RadarMapGrid_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RadarMapGrid_C", "PreConstruct");

	Params::UUMG_RadarMapGrid_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RadarMapGrid.UMG_RadarMapGrid_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_RadarMapGrid_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RadarMapGrid_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_RadarMapGrid.UMG_RadarMapGrid_C.OnRenderGridImage
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bInRenderImage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RadarMapGrid_C::OnRenderGridImage(bool bInRenderImage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RadarMapGrid_C", "OnRenderGridImage");

	Params::UUMG_RadarMapGrid_C_OnRenderGridImage_Params Parms{};

	Parms.bInRenderImage = bInRenderImage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RadarMapGrid.UMG_RadarMapGrid_C.ExecuteUbergraph_UMG_RadarMapGrid
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bInRenderImage                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_RadarMapGrid_C::ExecuteUbergraph_UMG_RadarMapGrid(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, bool K2Node_Event_bInRenderImage, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RadarMapGrid_C", "ExecuteUbergraph_UMG_RadarMapGrid");

	Params::UUMG_RadarMapGrid_C_ExecuteUbergraph_UMG_RadarMapGrid_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_bInRenderImage = K2Node_Event_bInRenderImage;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


