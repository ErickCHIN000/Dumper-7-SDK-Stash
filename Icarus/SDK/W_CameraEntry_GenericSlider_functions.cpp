#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_CameraEntry_GenericSlider.W_CameraEntry_GenericSlider_C
// (None)

class UClass* UW_CameraEntry_GenericSlider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_CameraEntry_GenericSlider_C");

	return Clss;
}


// W_CameraEntry_GenericSlider_C W_CameraEntry_GenericSlider.Default__W_CameraEntry_GenericSlider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_CameraEntry_GenericSlider_C* UW_CameraEntry_GenericSlider_C::GetDefaultObj()
{
	static class UW_CameraEntry_GenericSlider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_CameraEntry_GenericSlider_C*>(UW_CameraEntry_GenericSlider_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_CameraEntry_GenericSlider.W_CameraEntry_GenericSlider_C.SetupSliderValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CameraEntry_GenericSlider_C::SetupSliderValues(const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CameraEntry_GenericSlider_C", "SetupSliderValues");

	Params::UW_CameraEntry_GenericSlider_C_SetupSliderValues_Params Parms{};

	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CameraEntry_GenericSlider.W_CameraEntry_GenericSlider_C.InitFromSaveGameValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFPostProcessSaveData       Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CameraEntry_GenericSlider_C::InitFromSaveGameValue(const struct FFPostProcessSaveData& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CameraEntry_GenericSlider_C", "InitFromSaveGameValue");

	Params::UW_CameraEntry_GenericSlider_C_InitFromSaveGameValue_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CameraEntry_GenericSlider.W_CameraEntry_GenericSlider_C.InitFromDefaultValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_CameraEntry_GenericSlider_C::InitFromDefaultValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CameraEntry_GenericSlider_C", "InitFromDefaultValue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_CameraEntry_GenericSlider.W_CameraEntry_GenericSlider_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_CameraEntry_GenericSlider_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CameraEntry_GenericSlider_C", "PreConstruct");

	Params::UW_CameraEntry_GenericSlider_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CameraEntry_GenericSlider.W_CameraEntry_GenericSlider_C.ExecuteUbergraph_W_CameraEntry_GenericSlider
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_CameraEntry_GenericSlider_C::ExecuteUbergraph_W_CameraEntry_GenericSlider(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CameraEntry_GenericSlider_C", "ExecuteUbergraph_W_CameraEntry_GenericSlider");

	Params::UW_CameraEntry_GenericSlider_C_ExecuteUbergraph_W_CameraEntry_GenericSlider_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


