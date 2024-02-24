#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass NewHUDLayout.NewHUDLayout_C
// (None)

class UClass* UNewHUDLayout_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NewHUDLayout_C");

	return Clss;
}


// NewHUDLayout_C NewHUDLayout.Default__NewHUDLayout_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNewHUDLayout_C* UNewHUDLayout_C::GetDefaultObj()
{
	static class UNewHUDLayout_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNewHUDLayout_C*>(UNewHUDLayout_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NewHUDLayout.NewHUDLayout_C.HUD_FadeIn_NoNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewHUDLayout_C::HUD_FadeIn_NoNotify(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewHUDLayout_C", "HUD_FadeIn_NoNotify");

	Params::UNewHUDLayout_C_HUD_FadeIn_NoNotify_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewHUDLayout.NewHUDLayout_C.HUD_FadeOut_NoNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewHUDLayout_C::HUD_FadeOut_NoNotify(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewHUDLayout_C", "HUD_FadeOut_NoNotify");

	Params::UNewHUDLayout_C_HUD_FadeOut_NoNotify_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewHUDLayout.NewHUDLayout_C.HideHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsInPhotoMode_PhotoMode_                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsInCutscene_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_HUD_Size           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewHUDLayout_C::HideHUD(float Temp_float_Variable, float Temp_float_Variable_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetIsInPhotoMode_PhotoMode_, bool CallFunc_GetIsInCutscene_ReturnValue, bool CallFunc_IsValid_ReturnValue, float Temp_float_Variable_2, float Temp_float_Variable_3, enum class Enum_HUD_Size Temp_byte_Variable, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewHUDLayout_C", "HideHUD");

	Params::UNewHUDLayout_C_HideHUD_Params Parms{};

	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_1 = K2Node_DynamicCast_AsGame_Play_PCInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetIsInPhotoMode_PhotoMode_ = CallFunc_GetIsInPhotoMode_PhotoMode_;
	Parms.CallFunc_GetIsInCutscene_ReturnValue = CallFunc_GetIsInCutscene_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewHUDLayout.NewHUDLayout_C.HandleScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_HUD_Size           Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewHUDLayout_C::HandleScale(enum class Enum_HUD_Size Size, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewHUDLayout_C", "HandleScale");

	Params::UNewHUDLayout_C_HandleScale_Params Parms{};

	Parms.Size = Size;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewHUDLayout.NewHUDLayout_C.Hide Immediately
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNewHUDLayout_C::Hide_Immediately()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewHUDLayout_C", "Hide Immediately");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NewHUDLayout.NewHUDLayout_C.ShowImmediately
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNewHUDLayout_C::ShowImmediately()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewHUDLayout_C", "ShowImmediately");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NewHUDLayout.NewHUDLayout_C.UpdateResolve
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_Constant_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewHUDLayout_C::UpdateResolve(float CallFunc_GetWorldDeltaSeconds_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, float CallFunc_FInterpTo_Constant_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewHUDLayout_C", "UpdateResolve");

	Params::UNewHUDLayout_C_UpdateResolve_Params Parms{};

	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue = CallFunc_FInterpTo_Constant_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewHUDLayout.NewHUDLayout_C.UpdateStamina
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewHUDLayout_C::UpdateStamina(class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, float CallFunc_FMax_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewHUDLayout_C", "UpdateStamina");

	Params::UNewHUDLayout_C_UpdateStamina_Params Parms{};

	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewHUDLayout.NewHUDLayout_C.UpdateHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewHUDLayout_C::UpdateHealth(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewHUDLayout_C", "UpdateHealth");

	Params::UNewHUDLayout_C_UpdateHealth_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewHUDLayout.NewHUDLayout_C.PlayFadeInAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NoHideNotifies                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNewHUDLayout_C::PlayFadeInAnim(bool NoHideNotifies)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewHUDLayout_C", "PlayFadeInAnim");

	Params::UNewHUDLayout_C_PlayFadeInAnim_Params Parms{};

	Parms.NoHideNotifies = NoHideNotifies;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewHUDLayout.NewHUDLayout_C.PlayFadeOutAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NoHideNotifies                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNewHUDLayout_C::PlayFadeOutAnim(bool NoHideNotifies)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewHUDLayout_C", "PlayFadeOutAnim");

	Params::UNewHUDLayout_C_PlayFadeOutAnim_Params Parms{};

	Parms.NoHideNotifies = NoHideNotifies;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewHUDLayout.NewHUDLayout_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewHUDLayout_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewHUDLayout_C", "Tick");

	Params::UNewHUDLayout_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewHUDLayout.NewHUDLayout_C.HideBottomLeftHealthAndAllThat
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNewHUDLayout_C::HideBottomLeftHealthAndAllThat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewHUDLayout_C", "HideBottomLeftHealthAndAllThat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NewHUDLayout.NewHUDLayout_C.ShowBottomLeftHealthAndAllThat
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNewHUDLayout_C::ShowBottomLeftHealthAndAllThat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewHUDLayout_C", "ShowBottomLeftHealthAndAllThat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NewHUDLayout.NewHUDLayout_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UNewHUDLayout_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewHUDLayout_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NewHUDLayout.NewHUDLayout_C.OnHUDSizeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_HUD_Size           Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewHUDLayout_C::OnHUDSizeChanged(enum class Enum_HUD_Size Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewHUDLayout_C", "OnHUDSizeChanged");

	Params::UNewHUDLayout_C_OnHUDSizeChanged_Params Parms{};

	Parms.Size = Size;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewHUDLayout.NewHUDLayout_C.OnMaxResolveChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNewHUDLayout_C::OnMaxResolveChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewHUDLayout_C", "OnMaxResolveChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NewHUDLayout.NewHUDLayout_C.ChangedShells_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNewHUDLayout_C::ChangedShells_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewHUDLayout_C", "ChangedShells_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NewHUDLayout.NewHUDLayout_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UNewHUDLayout_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewHUDLayout_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NewHUDLayout.NewHUDLayout_C.OnNotEnoughResolve_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNewHUDLayout_C::OnNotEnoughResolve_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewHUDLayout_C", "OnNotEnoughResolve_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NewHUDLayout.NewHUDLayout_C.OnIncompleteResolveSegmentDrained_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Segment                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewHUDLayout_C::OnIncompleteResolveSegmentDrained_Event_0(int32 Segment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewHUDLayout_C", "OnIncompleteResolveSegmentDrained_Event_0");

	Params::UNewHUDLayout_C_OnIncompleteResolveSegmentDrained_Event_0_Params Parms{};

	Parms.Segment = Segment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewHUDLayout.NewHUDLayout_C.ExecuteUbergraph_NewHUDLayout
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_NoHideNotifies_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                K2Node_DynamicCast_AsBarbarous                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_NoHideNotifies                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_HUD_Size           K2Node_CustomEvent_Size                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// int32                              K2Node_CustomEvent_Segment                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewHUDLayout_C::ExecuteUbergraph_NewHUDLayout(int32 EntryPoint, bool K2Node_CustomEvent_NoHideNotifies_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_CustomEvent_NoHideNotifies, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, enum class Enum_HUD_Size K2Node_CustomEvent_Size, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 CallFunc_FTrunc_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, int32 K2Node_CustomEvent_Segment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewHUDLayout_C", "ExecuteUbergraph_NewHUDLayout");

	Params::UNewHUDLayout_C_ExecuteUbergraph_NewHUDLayout_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NoHideNotifies_1 = K2Node_CustomEvent_NoHideNotifies_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBarbarous = K2Node_DynamicCast_AsBarbarous;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CustomEvent_NoHideNotifies = K2Node_CustomEvent_NoHideNotifies;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.K2Node_CustomEvent_Size = K2Node_CustomEvent_Size;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_Segment = K2Node_CustomEvent_Segment;

	UObject::ProcessEvent(Func, &Parms);

}

}


