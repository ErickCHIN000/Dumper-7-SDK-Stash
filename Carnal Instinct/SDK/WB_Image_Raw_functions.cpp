#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Image_Raw.WB_Image_Raw_C
// (None)

class UClass* UWB_Image_Raw_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Image_Raw_C");

	return Clss;
}


// WB_Image_Raw_C WB_Image_Raw.Default__WB_Image_Raw_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Image_Raw_C* UWB_Image_Raw_C::GetDefaultObj()
{
	static class UWB_Image_Raw_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Image_Raw_C*>(UWB_Image_Raw_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Image_Raw.WB_Image_Raw_C.SetColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Image_Raw_C::SetColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Image_Raw_C", "SetColor");

	Params::UWB_Image_Raw_C_SetColor_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Image_Raw.WB_Image_Raw_C.SetBackgroundBlur
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              BlurStrength                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Image_Raw_C::SetBackgroundBlur(bool IsEnabled, float BlurStrength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Image_Raw_C", "SetBackgroundBlur");

	Params::UWB_Image_Raw_C_SetBackgroundBlur_Params Parms{};

	Parms.IsEnabled = IsEnabled;
	Parms.BlurStrength = BlurStrength;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Image_Raw.WB_Image_Raw_C.ExecuteUbergraph_WB_Image_Raw
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_Color                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsEnabled                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_BlurStrength                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Image_Raw_C::ExecuteUbergraph_WB_Image_Raw(int32 EntryPoint, const struct FLinearColor& K2Node_CustomEvent_Color, bool K2Node_CustomEvent_IsEnabled, float K2Node_CustomEvent_BlurStrength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Image_Raw_C", "ExecuteUbergraph_WB_Image_Raw");

	Params::UWB_Image_Raw_C_ExecuteUbergraph_WB_Image_Raw_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Color = K2Node_CustomEvent_Color;
	Parms.K2Node_CustomEvent_IsEnabled = K2Node_CustomEvent_IsEnabled;
	Parms.K2Node_CustomEvent_BlurStrength = K2Node_CustomEvent_BlurStrength;

	UObject::ProcessEvent(Func, &Parms);

}

}


