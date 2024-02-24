#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Ballistazooka_Crosshair.UI_Ballistazooka_Crosshair_C
// (None)

class UClass* UUI_Ballistazooka_Crosshair_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Ballistazooka_Crosshair_C");

	return Clss;
}


// UI_Ballistazooka_Crosshair_C UI_Ballistazooka_Crosshair.Default__UI_Ballistazooka_Crosshair_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Ballistazooka_Crosshair_C* UUI_Ballistazooka_Crosshair_C::GetDefaultObj()
{
	static class UUI_Ballistazooka_Crosshair_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Ballistazooka_Crosshair_C*>(UUI_Ballistazooka_Crosshair_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Ballistazooka_Crosshair.UI_Ballistazooka_Crosshair_C.SetOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_DeltaTime                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Ballistazooka_Crosshair_C::SetOpacity(float DeltaTime, float Local_DeltaTime, bool CallFunc_IsValid_ReturnValue, float CallFunc_FInterpTo_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ballistazooka_Crosshair_C", "SetOpacity");

	Params::UUI_Ballistazooka_Crosshair_C_SetOpacity_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.Local_DeltaTime = Local_DeltaTime;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Ballistazooka_Crosshair.UI_Ballistazooka_Crosshair_C.Get_Image_Ballistazooka_Crosshair_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UUI_Ballistazooka_Crosshair_C::Get_Image_Ballistazooka_Crosshair_Visibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ballistazooka_Crosshair_C", "Get_Image_Ballistazooka_Crosshair_Visibility");

	Params::UUI_Ballistazooka_Crosshair_C_Get_Image_Ballistazooka_Crosshair_Visibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Ballistazooka_Crosshair.UI_Ballistazooka_Crosshair_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Ballistazooka_Crosshair_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ballistazooka_Crosshair_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Ballistazooka_Crosshair.UI_Ballistazooka_Crosshair_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Ballistazooka_Crosshair_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ballistazooka_Crosshair_C", "Tick");

	Params::UUI_Ballistazooka_Crosshair_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Ballistazooka_Crosshair.UI_Ballistazooka_Crosshair_C.ExecuteUbergraph_UI_Ballistazooka_Crosshair
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AYourHUD_C*                  K2Node_DynamicCast_AsYour_HUD                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Ballistazooka_Crosshair_C::ExecuteUbergraph_UI_Ballistazooka_Crosshair(int32 EntryPoint, class AHUD* CallFunc_GetHUD_ReturnValue, class AYourHUD_C* K2Node_DynamicCast_AsYour_HUD, bool K2Node_DynamicCast_bSuccess, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Ballistazooka_Crosshair_C", "ExecuteUbergraph_UI_Ballistazooka_Crosshair");

	Params::UUI_Ballistazooka_Crosshair_C_ExecuteUbergraph_UI_Ballistazooka_Crosshair_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.K2Node_DynamicCast_AsYour_HUD = K2Node_DynamicCast_AsYour_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


