#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_HUD_DamageIndicator.WBP_HUD_DamageIndicator_C
// (None)

class UClass* UWBP_HUD_DamageIndicator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_HUD_DamageIndicator_C");

	return Clss;
}


// WBP_HUD_DamageIndicator_C WBP_HUD_DamageIndicator.Default__WBP_HUD_DamageIndicator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_HUD_DamageIndicator_C* UWBP_HUD_DamageIndicator_C::GetDefaultObj()
{
	static class UWBP_HUD_DamageIndicator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_HUD_DamageIndicator_C*>(UWBP_HUD_DamageIndicator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_HUD_DamageIndicator.WBP_HUD_DamageIndicator_C.OnDMGWidgetDestroyed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_DamageIndicator_C::OnDMGWidgetDestroyed(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_DamageIndicator_C", "OnDMGWidgetDestroyed");

	Params::UWBP_HUD_DamageIndicator_C_OnDMGWidgetDestroyed_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_DamageIndicator.WBP_HUD_DamageIndicator_C.CreateDMGMarker
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageEffectContextData    DamageContextData                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// double                             Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_HUD_DMG_Marker_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_DamageIndicator_C::CreateDMGMarker(struct FDamageEffectContextData& DamageContextData, double Duration, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UWBP_HUD_DMG_Marker_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_DamageIndicator_C", "CreateDMGMarker");

	Params::UWBP_HUD_DamageIndicator_C_CreateDMGMarker_Params Parms{};

	Parms.DamageContextData = DamageContextData;
	Parms.Duration = Duration;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_DamageIndicator.WBP_HUD_DamageIndicator_C.UpdateDMGMarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageEffectContextData    DamageContextData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// double                             DMGIntensity                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             TimeToDisplay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Colour                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_DamageIndicator_C::UpdateDMGMarker(const struct FDamageEffectContextData& DamageContextData, double DMGIntensity, double TimeToDisplay, const struct FLinearColor& Colour, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_DamageIndicator_C", "UpdateDMGMarker");

	Params::UWBP_HUD_DamageIndicator_C_UpdateDMGMarker_Params Parms{};

	Parms.DamageContextData = DamageContextData;
	Parms.DMGIntensity = DMGIntensity;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.Colour = Colour;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


