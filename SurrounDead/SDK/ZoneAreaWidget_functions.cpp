#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ZoneAreaWidget.ZoneAreaWidget_C
// (None)

class UClass* UZoneAreaWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ZoneAreaWidget_C");

	return Clss;
}


// ZoneAreaWidget_C ZoneAreaWidget.Default__ZoneAreaWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UZoneAreaWidget_C* UZoneAreaWidget_C::GetDefaultObj()
{
	static class UZoneAreaWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UZoneAreaWidget_C*>(UZoneAreaWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ZoneAreaWidget.ZoneAreaWidget_C.SetName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture*                    Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Entering_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UZoneAreaWidget_C::SetName(class FText Name, class UTexture* Texture, const struct FLinearColor& Color, bool Entering_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZoneAreaWidget_C", "SetName");

	Params::UZoneAreaWidget_C_SetName_Params Parms{};

	Parms.Name = Name;
	Parms.Texture = Texture;
	Parms.Color = Color;
	Parms.Entering_ = Entering_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ZoneAreaWidget.ZoneAreaWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UZoneAreaWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZoneAreaWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ZoneAreaWidget.ZoneAreaWidget_C.FadeStartFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UZoneAreaWidget_C::FadeStartFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZoneAreaWidget_C", "FadeStartFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ZoneAreaWidget.ZoneAreaWidget_C.ExecuteUbergraph_ZoneAreaWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUD_Game_C*                 CallFunc_GetHUD_HUD                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Name                                          (None)
// class UTexture*                    K2Node_CustomEvent_Texture                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_Color                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Entering_                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UZoneAreaWidget_C::ExecuteUbergraph_ZoneAreaWidget(int32 EntryPoint, class AHUD_Game_C* CallFunc_GetHUD_HUD, class FText Temp_text_Variable, class FText Temp_text_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText K2Node_CustomEvent_Name, class UTexture* K2Node_CustomEvent_Texture, const struct FLinearColor& K2Node_CustomEvent_Color, bool K2Node_CustomEvent_Entering_, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, class FText K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZoneAreaWidget_C", "ExecuteUbergraph_ZoneAreaWidget");

	Params::UZoneAreaWidget_C_ExecuteUbergraph_ZoneAreaWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetHUD_HUD = CallFunc_GetHUD_HUD;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Name = K2Node_CustomEvent_Name;
	Parms.K2Node_CustomEvent_Texture = K2Node_CustomEvent_Texture;
	Parms.K2Node_CustomEvent_Color = K2Node_CustomEvent_Color;
	Parms.K2Node_CustomEvent_Entering_ = K2Node_CustomEvent_Entering_;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


