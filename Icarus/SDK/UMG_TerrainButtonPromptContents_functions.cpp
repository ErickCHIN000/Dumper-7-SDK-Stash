#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_TerrainButtonPromptContents.UMG_TerrainButtonPromptContents_C
// (None)

class UClass* UUMG_TerrainButtonPromptContents_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_TerrainButtonPromptContents_C");

	return Clss;
}


// UMG_TerrainButtonPromptContents_C UMG_TerrainButtonPromptContents.Default__UMG_TerrainButtonPromptContents_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_TerrainButtonPromptContents_C* UUMG_TerrainButtonPromptContents_C::GetDefaultObj()
{
	static class UUMG_TerrainButtonPromptContents_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_TerrainButtonPromptContents_C*>(UUMG_TerrainButtonPromptContents_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_TerrainButtonPromptContents.UMG_TerrainButtonPromptContents_C.DontShowAgain
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               DontShowAgain                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_TerrainButtonPromptContents_C::DontShowAgain(bool* DontShowAgain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TerrainButtonPromptContents_C", "DontShowAgain");

	Params::UUMG_TerrainButtonPromptContents_C_DontShowAgain_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DontShowAgain != nullptr)
		*DontShowAgain = Parms.DontShowAgain;

}


// Function UMG_TerrainButtonPromptContents.UMG_TerrainButtonPromptContents_C.BndEvt__UMG_TerrainButtonPromptContents_UMG_IconTextButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_TerrainButtonPromptContents_C::BndEvt__UMG_TerrainButtonPromptContents_UMG_IconTextButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TerrainButtonPromptContents_C", "BndEvt__UMG_TerrainButtonPromptContents_UMG_IconTextButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TerrainButtonPromptContents.UMG_TerrainButtonPromptContents_C.SetBoostPanelDetails
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              PlayerLevel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TerrainButtonPromptContents_C::SetBoostPanelDetails(bool Visible, int32 PlayerLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TerrainButtonPromptContents_C", "SetBoostPanelDetails");

	Params::UUMG_TerrainButtonPromptContents_C_SetBoostPanelDetails_Params Parms{};

	Parms.Visible = Visible;
	Parms.PlayerLevel = PlayerLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TerrainButtonPromptContents.UMG_TerrainButtonPromptContents_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_TerrainButtonPromptContents_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TerrainButtonPromptContents_C", "PreConstruct");

	Params::UUMG_TerrainButtonPromptContents_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TerrainButtonPromptContents.UMG_TerrainButtonPromptContents_C.ExecuteUbergraph_UMG_TerrainButtonPromptContents
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Visible                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_PlayerLevel                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_TerrainButtonPromptContents_C::ExecuteUbergraph_UMG_TerrainButtonPromptContents(int32 EntryPoint, bool K2Node_CustomEvent_Visible, int32 K2Node_CustomEvent_PlayerLevel, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TerrainButtonPromptContents_C", "ExecuteUbergraph_UMG_TerrainButtonPromptContents");

	Params::UUMG_TerrainButtonPromptContents_C_ExecuteUbergraph_UMG_TerrainButtonPromptContents_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Visible = K2Node_CustomEvent_Visible;
	Parms.K2Node_CustomEvent_PlayerLevel = K2Node_CustomEvent_PlayerLevel;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TerrainButtonPromptContents.UMG_TerrainButtonPromptContents_C.BoostButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_TerrainButtonPromptContents_C::BoostButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TerrainButtonPromptContents_C", "BoostButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


