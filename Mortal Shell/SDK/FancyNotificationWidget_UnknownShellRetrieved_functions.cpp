#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FancyNotificationWidget_UnknownShellRetrieved.FancyNotificationWidget_UnknownShellRetrieved_C
// (None)

class UClass* UFancyNotificationWidget_UnknownShellRetrieved_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FancyNotificationWidget_UnknownShellRetrieved_C");

	return Clss;
}


// FancyNotificationWidget_UnknownShellRetrieved_C FancyNotificationWidget_UnknownShellRetrieved.Default__FancyNotificationWidget_UnknownShellRetrieved_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFancyNotificationWidget_UnknownShellRetrieved_C* UFancyNotificationWidget_UnknownShellRetrieved_C::GetDefaultObj()
{
	static class UFancyNotificationWidget_UnknownShellRetrieved_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFancyNotificationWidget_UnknownShellRetrieved_C*>(UFancyNotificationWidget_UnknownShellRetrieved_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FancyNotificationWidget_UnknownShellRetrieved.FancyNotificationWidget_UnknownShellRetrieved_C.Get_DoNotTouchCanvas_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UFancyNotificationWidget_UnknownShellRetrieved_C::Get_DoNotTouchCanvas_Visibility_0(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyNotificationWidget_UnknownShellRetrieved_C", "Get_DoNotTouchCanvas_Visibility_0");

	Params::UFancyNotificationWidget_UnknownShellRetrieved_C_Get_DoNotTouchCanvas_Visibility_0_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FancyNotificationWidget_UnknownShellRetrieved.FancyNotificationWidget_UnknownShellRetrieved_C.Get_PutEverythingHereCanvas_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_IsInTutorial                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UFancyNotificationWidget_UnknownShellRetrieved_C::Get_PutEverythingHereCanvas_Visibility_0(bool Local_IsInTutorial, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyNotificationWidget_UnknownShellRetrieved_C", "Get_PutEverythingHereCanvas_Visibility_0");

	Params::UFancyNotificationWidget_UnknownShellRetrieved_C_Get_PutEverythingHereCanvas_Visibility_0_Params Parms{};

	Parms.Local_IsInTutorial = Local_IsInTutorial;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FancyNotificationWidget_UnknownShellRetrieved.FancyNotificationWidget_UnknownShellRetrieved_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFancyNotificationWidget_UnknownShellRetrieved_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyNotificationWidget_UnknownShellRetrieved_C", "PreConstruct");

	Params::UFancyNotificationWidget_UnknownShellRetrieved_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FancyNotificationWidget_UnknownShellRetrieved.FancyNotificationWidget_UnknownShellRetrieved_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFancyNotificationWidget_UnknownShellRetrieved_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyNotificationWidget_UnknownShellRetrieved_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FancyNotificationWidget_UnknownShellRetrieved.FancyNotificationWidget_UnknownShellRetrieved_C.SetRetainerEffectAlpha
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              EffectAlpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Opacity                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFancyNotificationWidget_UnknownShellRetrieved_C::SetRetainerEffectAlpha(float EffectAlpha, float Opacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyNotificationWidget_UnknownShellRetrieved_C", "SetRetainerEffectAlpha");

	Params::UFancyNotificationWidget_UnknownShellRetrieved_C_SetRetainerEffectAlpha_Params Parms{};

	Parms.EffectAlpha = EffectAlpha;
	Parms.Opacity = Opacity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FancyNotificationWidget_UnknownShellRetrieved.FancyNotificationWidget_UnknownShellRetrieved_C.ExecuteUbergraph_FancyNotificationWidget_UnknownShellRetrieved
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_EffectAlpha                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Opacity                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFancyNotificationWidget_UnknownShellRetrieved_C::ExecuteUbergraph_FancyNotificationWidget_UnknownShellRetrieved(int32 EntryPoint, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float K2Node_CustomEvent_EffectAlpha, float K2Node_CustomEvent_Opacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyNotificationWidget_UnknownShellRetrieved_C", "ExecuteUbergraph_FancyNotificationWidget_UnknownShellRetrieved");

	Params::UFancyNotificationWidget_UnknownShellRetrieved_C_ExecuteUbergraph_FancyNotificationWidget_UnknownShellRetrieved_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_CustomEvent_EffectAlpha = K2Node_CustomEvent_EffectAlpha;
	Parms.K2Node_CustomEvent_Opacity = K2Node_CustomEvent_Opacity;

	UObject::ProcessEvent(Func, &Parms);

}

}


