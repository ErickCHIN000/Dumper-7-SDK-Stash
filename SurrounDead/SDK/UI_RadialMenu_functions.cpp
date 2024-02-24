#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_RadialMenu.UI_RadialMenu_C
// (None)

class UClass* UUI_RadialMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_RadialMenu_C");

	return Clss;
}


// UI_RadialMenu_C UI_RadialMenu.Default__UI_RadialMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_RadialMenu_C* UUI_RadialMenu_C::GetDefaultObj()
{
	static class UUI_RadialMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_RadialMenu_C*>(UUI_RadialMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_RadialMenu.UI_RadialMenu_C.GetSelectedOption
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              OutIndex                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Valid                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentIndex_Index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentIndex_Valid                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RadialMenu_C::GetSelectedOption(int32* OutIndex, bool* Valid, int32 CallFunc_GetCurrentIndex_Index, bool CallFunc_GetCurrentIndex_Valid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RadialMenu_C", "GetSelectedOption");

	Params::UUI_RadialMenu_C_GetSelectedOption_Params Parms{};

	Parms.CallFunc_GetCurrentIndex_Index = CallFunc_GetCurrentIndex_Index;
	Parms.CallFunc_GetCurrentIndex_Valid = CallFunc_GetCurrentIndex_Valid;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIndex != nullptr)
		*OutIndex = Parms.OutIndex;

	if (Valid != nullptr)
		*Valid = Parms.Valid;

}


// Function UI_RadialMenu.UI_RadialMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_RadialMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RadialMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RadialMenu.UI_RadialMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RadialMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RadialMenu_C", "Tick");

	Params::UUI_RadialMenu_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_RadialMenu.UI_RadialMenu_C.AddRadialMenuItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  IconImage                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFBasicIconSettings         Settings                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RadialMenu_C::AddRadialMenuItem(class UTexture2D* IconImage, const struct FFBasicIconSettings& Settings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RadialMenu_C", "AddRadialMenuItem");

	Params::UUI_RadialMenu_C_AddRadialMenuItem_Params Parms{};

	Parms.IconImage = IconImage;
	Parms.Settings = Settings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_RadialMenu.UI_RadialMenu_C.ExecuteUbergraph_UI_RadialMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_CustomEvent_IconImage                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFBasicIconSettings         K2Node_CustomEvent_Settings                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_RadialIcon_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddChildToRadialMenu_Success                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RadialMenu_C::ExecuteUbergraph_UI_RadialMenu(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UTexture2D* K2Node_CustomEvent_IconImage, const struct FFBasicIconSettings& K2Node_CustomEvent_Settings, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_RadialIcon_C* CallFunc_Create_ReturnValue, bool CallFunc_AddChildToRadialMenu_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RadialMenu_C", "ExecuteUbergraph_UI_RadialMenu");

	Params::UUI_RadialMenu_C_ExecuteUbergraph_UI_RadialMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CustomEvent_IconImage = K2Node_CustomEvent_IconImage;
	Parms.K2Node_CustomEvent_Settings = K2Node_CustomEvent_Settings;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToRadialMenu_Success = CallFunc_AddChildToRadialMenu_Success;

	UObject::ProcessEvent(Func, &Parms);

}

}


