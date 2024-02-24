#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Tooltip_MapMarker.WBP_Tooltip_MapMarker_C
// (None)

class UClass* UWBP_Tooltip_MapMarker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Tooltip_MapMarker_C");

	return Clss;
}


// WBP_Tooltip_MapMarker_C WBP_Tooltip_MapMarker.Default__WBP_Tooltip_MapMarker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Tooltip_MapMarker_C* UWBP_Tooltip_MapMarker_C::GetDefaultObj()
{
	static class UWBP_Tooltip_MapMarker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Tooltip_MapMarker_C*>(UWBP_Tooltip_MapMarker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Tooltip_MapMarker.WBP_Tooltip_MapMarker_C.RefreshMapMarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        TitleText                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        BodyText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CoordText                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// TSoftObjectPtr<class UTexture2D>   IconTexture                                                      (BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash)

void UWBP_Tooltip_MapMarker_C::RefreshMapMarker(class FText TitleText, class FText BodyText, class FText CoordText, TSoftObjectPtr<class UTexture2D> IconTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Tooltip_MapMarker_C", "RefreshMapMarker");

	Params::UWBP_Tooltip_MapMarker_C_RefreshMapMarker_Params Parms{};

	Parms.TitleText = TitleText;
	Parms.BodyText = BodyText;
	Parms.CoordText = CoordText;
	Parms.IconTexture = IconTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Tooltip_MapMarker.WBP_Tooltip_MapMarker_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Tooltip_MapMarker_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Tooltip_MapMarker_C", "PreConstruct");

	Params::UWBP_Tooltip_MapMarker_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Tooltip_MapMarker.WBP_Tooltip_MapMarker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Tooltip_MapMarker_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Tooltip_MapMarker_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Tooltip_MapMarker.WBP_Tooltip_MapMarker_C.ExecuteUbergraph_WBP_Tooltip_MapMarker
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Tooltip_MapMarker_C::ExecuteUbergraph_WBP_Tooltip_MapMarker(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Tooltip_MapMarker_C", "ExecuteUbergraph_WBP_Tooltip_MapMarker");

	Params::UWBP_Tooltip_MapMarker_C_ExecuteUbergraph_WBP_Tooltip_MapMarker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


